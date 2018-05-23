#pragma once
#include "dominio/seguranca/ControllerSeguranca.h"
#include "TelaDoUsuario.h"
#include "dominio/seguranca/Usuario.h"
#include <msclr\marshal_cppstd.h>
#include <ctime>
#include <iomanip>
#include <sstream>

namespace WindowsClrmysql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginUI
	/// </summary>
	public ref class LoginUI : public System::Windows::Forms::Form
	{
	public:
		LoginUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property String^ Login {
			String^ get() {
				return txt_login->Text;
			}
			void set(String^ login) {
				txt_login->Text = login;
			}
		}
		property String^ Senha {
			String^ get() {
				return txt_senha->Text;
			}
			void set(String^ senha) {
				txt_senha->Text = senha;
			}
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_logar;
	protected:

	private: System::Windows::Forms::TextBox^  txt_login;

	private: System::Windows::Forms::TextBox^  txt_senha;
	private: System::Windows::Forms::Label^  lb_login;
	private: System::Windows::Forms::Label^  lb_senha;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt_logar = (gcnew System::Windows::Forms::Button());
			this->txt_login = (gcnew System::Windows::Forms::TextBox());
			this->txt_senha = (gcnew System::Windows::Forms::TextBox());
			this->lb_login = (gcnew System::Windows::Forms::Label());
			this->lb_senha = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bt_logar
			// 
			this->bt_logar->Location = System::Drawing::Point(118, 153);
			this->bt_logar->Name = L"bt_logar";
			this->bt_logar->Size = System::Drawing::Size(75, 23);
			this->bt_logar->TabIndex = 0;
			this->bt_logar->Text = L"Logar";
			this->bt_logar->UseVisualStyleBackColor = true;
			this->bt_logar->Click += gcnew System::EventHandler(this, &LoginUI::button1_Click);
			// 
			// txt_login
			// 
			this->txt_login->Location = System::Drawing::Point(118, 71);
			this->txt_login->Name = L"txt_login";
			this->txt_login->Size = System::Drawing::Size(100, 20);
			this->txt_login->TabIndex = 1;
			// 
			// txt_senha
			// 
			this->txt_senha->Location = System::Drawing::Point(118, 113);
			this->txt_senha->Name = L"txt_senha";
			this->txt_senha->PasswordChar = '*';
			this->txt_senha->Size = System::Drawing::Size(100, 20);
			this->txt_senha->TabIndex = 2;
			this->txt_senha->UseSystemPasswordChar = true;
			// 
			// lb_login
			// 
			this->lb_login->AutoSize = true;
			this->lb_login->Location = System::Drawing::Point(57, 74);
			this->lb_login->Name = L"lb_login";
			this->lb_login->Size = System::Drawing::Size(33, 13);
			this->lb_login->TabIndex = 3;
			this->lb_login->Text = L"Login";
			// 
			// lb_senha
			// 
			this->lb_senha->AutoSize = true;
			this->lb_senha->Location = System::Drawing::Point(57, 116);
			this->lb_senha->Name = L"lb_senha";
			this->lb_senha->Size = System::Drawing::Size(38, 13);
			this->lb_senha->TabIndex = 4;
			this->lb_senha->Text = L"Senha";
			// 
			// LoginUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lb_senha);
			this->Controls->Add(this->lb_login);
			this->Controls->Add(this->txt_senha);
			this->Controls->Add(this->txt_login);
			this->Controls->Add(this->bt_logar);
			this->Name = L"LoginUI";
			this->Text = L"LoginUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//Validação
		if ((this->Login == String::Empty) && (this->Senha == String::Empty)) {
			
			this->txt_login->BackColor = System::Drawing::Color::Yellow;
			this->txt_senha->BackColor = System::Drawing::Color::Yellow;
		}
		else if (this->Login == String::Empty) {
			this->txt_login->BackColor = System::Drawing::Color::Yellow;
		}
		else if (this->Senha == String::Empty) {
			this->txt_senha->BackColor = System::Drawing::Color::Yellow;
		}
		else {
			ControllerSeguranca * seguranca = new ControllerSeguranca();
			std::string login = msclr::interop::marshal_as<std::string>(this->Login);
			std::string senha = msclr::interop::marshal_as<std::string>(this->Senha);
			
			Usuario* usuario = seguranca->logar(login, senha);
			if (usuario != nullptr) {


				time_t dt = usuario->getDataCadastro();
				std::stringstream ss;
				ss << std::put_time(std::localtime(&dt), "%Y-%m-%d");
				string d = ss.str();
				MessageBox::Show("Usuário: " + msclr::interop::marshal_as<String^>(usuario->getLogin()) + 
					" logado com sucesso, cadastrado em: " + msclr::interop::marshal_as<String^>(d));
				
				usuario = seguranca->carregarFuncionalidades(usuario);
				
				TelaDoUsuario^ tu = gcnew TelaDoUsuario(usuario);
				this->Hide();
				tu->Show();


			}
			else {
				MessageBox::Show("Usuário ou senha inválidos");
			}

		}





		
		
	}
};
}
