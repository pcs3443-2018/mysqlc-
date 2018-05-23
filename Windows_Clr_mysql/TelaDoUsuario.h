#pragma once
#include "dominio/seguranca/Usuario.h"
namespace WindowsClrmysql {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaDoUsuario
	/// </summary>
	public ref class TelaDoUsuario : public System::Windows::Forms::Form
	{
	public:
		TelaDoUsuario(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TelaDoUsuario(Usuario* usuario) {
			InitializeComponent();
			vector<Perfil*>::iterator it_p;
			vector<Funcionalidade*>::iterator it_f;
			for (it_p = usuario->getPerfis()->begin(); it_p != usuario->getPerfis()->end(); it_p++) {
				for (it_f = (*it_p)->getFuncionalidades()->begin(); it_f != (*it_p)->getFuncionalidades()->end(); it_f++) {
					Funcionalidade * f = (*it_f);
					switch(f->getId()){
					case 1:
						this->bt_cadastrar_aluno->Enabled = true;
						break;
					case 2:
						this->bt_cadastrar_usuarios->Enabled = true;
						break;
					case 3:
						this->bt_editar_perfis_do_usuario->Enabled = true;
						break;
					case 4:
						this->bt_importar_alunos_de_arquivo->Enabled = true;
						break;
					case 5:
						this->bt_registrar_estagio->Enabled = true;
						break;
					case 6:
						this->bt_avaliar_estagio->Enabled = true;
						break;
					case 7:
						this->bt_mostrar_pendencias->Enabled = true;
						break;
					case 8:
						this->bt_divulgar_vaga->Enabled = true;
						break;
					case 9:
						this->bt_enviar_avaliacao->Enabled = true;
						break;
					case 10:
						this->bt_solicitar_registro_estagio->Enabled = true;
						break;
					case 11:
						this->bt_preencher_plano->Enabled = true;
						break;
					case 12:
						this->bt_enviar_relatorio->Enabled = true;
						break;
					case 13:
						this->bt_historico_estagio->Enabled = true;
						break;
					case 14:
						this->bt_historico_empresa->Enabled = true;
						break;
					default:
						break;

					}
				}
				
			}

			//verificar funcionalidades do usuario e desativar botões

			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaDoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  bt_registrar_estagio;
	private: System::Windows::Forms::Button^  bt_avaliar_estagio;
	private: System::Windows::Forms::Button^  bt_mostrar_pendencias;
	private: System::Windows::Forms::Button^  bt_historico_estagio;
	private: System::Windows::Forms::Button^  bt_historico_empresa;
	private: System::Windows::Forms::Button^  bt_enviar_avaliacao;
	protected:

	protected:





	private: System::Windows::Forms::Button^  bt_solicitar_registro_estagio;
	private: System::Windows::Forms::Button^  bt_preencher_plano;
	private: System::Windows::Forms::Button^  bt_enviar_relatorio;
	private: System::Windows::Forms::Button^  bt_divulgar_vaga;
	private: System::Windows::Forms::Button^  bt_cadastrar_aluno;
	private: System::Windows::Forms::Button^  bt_cadastrar_usuarios;
	private: System::Windows::Forms::Button^  bt_editar_perfis_do_usuario;
	private: System::Windows::Forms::Button^  bt_importar_alunos_de_arquivo;




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
			this->bt_registrar_estagio = (gcnew System::Windows::Forms::Button());
			this->bt_avaliar_estagio = (gcnew System::Windows::Forms::Button());
			this->bt_mostrar_pendencias = (gcnew System::Windows::Forms::Button());
			this->bt_historico_estagio = (gcnew System::Windows::Forms::Button());
			this->bt_historico_empresa = (gcnew System::Windows::Forms::Button());
			this->bt_enviar_avaliacao = (gcnew System::Windows::Forms::Button());
			this->bt_solicitar_registro_estagio = (gcnew System::Windows::Forms::Button());
			this->bt_preencher_plano = (gcnew System::Windows::Forms::Button());
			this->bt_enviar_relatorio = (gcnew System::Windows::Forms::Button());
			this->bt_divulgar_vaga = (gcnew System::Windows::Forms::Button());
			this->bt_cadastrar_aluno = (gcnew System::Windows::Forms::Button());
			this->bt_cadastrar_usuarios = (gcnew System::Windows::Forms::Button());
			this->bt_editar_perfis_do_usuario = (gcnew System::Windows::Forms::Button());
			this->bt_importar_alunos_de_arquivo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bt_registrar_estagio
			// 
			this->bt_registrar_estagio->Enabled = false;
			this->bt_registrar_estagio->Location = System::Drawing::Point(12, 51);
			this->bt_registrar_estagio->Name = L"bt_registrar_estagio";
			this->bt_registrar_estagio->Size = System::Drawing::Size(110, 23);
			this->bt_registrar_estagio->TabIndex = 0;
			this->bt_registrar_estagio->Text = L"Registrar Estágio";
			this->bt_registrar_estagio->UseVisualStyleBackColor = true;
			// 
			// bt_avaliar_estagio
			// 
			this->bt_avaliar_estagio->Enabled = false;
			this->bt_avaliar_estagio->Location = System::Drawing::Point(12, 80);
			this->bt_avaliar_estagio->Name = L"bt_avaliar_estagio";
			this->bt_avaliar_estagio->Size = System::Drawing::Size(110, 23);
			this->bt_avaliar_estagio->TabIndex = 1;
			this->bt_avaliar_estagio->Text = L"Avaliar Estágio";
			this->bt_avaliar_estagio->UseVisualStyleBackColor = true;
			// 
			// bt_mostrar_pendencias
			// 
			this->bt_mostrar_pendencias->Enabled = false;
			this->bt_mostrar_pendencias->Location = System::Drawing::Point(12, 109);
			this->bt_mostrar_pendencias->Name = L"bt_mostrar_pendencias";
			this->bt_mostrar_pendencias->Size = System::Drawing::Size(178, 23);
			this->bt_mostrar_pendencias->TabIndex = 2;
			this->bt_mostrar_pendencias->Text = L"Mostrar Alunos com Pendências";
			this->bt_mostrar_pendencias->UseVisualStyleBackColor = true;
			// 
			// bt_historico_estagio
			// 
			this->bt_historico_estagio->Enabled = false;
			this->bt_historico_estagio->Location = System::Drawing::Point(12, 139);
			this->bt_historico_estagio->Name = L"bt_historico_estagio";
			this->bt_historico_estagio->Size = System::Drawing::Size(127, 23);
			this->bt_historico_estagio->TabIndex = 3;
			this->bt_historico_estagio->Text = L"Histórico do Estágio";
			this->bt_historico_estagio->UseVisualStyleBackColor = true;
			// 
			// bt_historico_empresa
			// 
			this->bt_historico_empresa->Enabled = false;
			this->bt_historico_empresa->Location = System::Drawing::Point(12, 169);
			this->bt_historico_empresa->Name = L"bt_historico_empresa";
			this->bt_historico_empresa->Size = System::Drawing::Size(127, 23);
			this->bt_historico_empresa->TabIndex = 4;
			this->bt_historico_empresa->Text = L"Histórico da Empresa";
			this->bt_historico_empresa->UseVisualStyleBackColor = true;
			// 
			// bt_enviar_avaliacao
			// 
			this->bt_enviar_avaliacao->Enabled = false;
			this->bt_enviar_avaliacao->Location = System::Drawing::Point(207, 139);
			this->bt_enviar_avaliacao->Name = L"bt_enviar_avaliacao";
			this->bt_enviar_avaliacao->Size = System::Drawing::Size(146, 23);
			this->bt_enviar_avaliacao->TabIndex = 7;
			this->bt_enviar_avaliacao->Text = L"Enviar Avaliação do Gestor";
			this->bt_enviar_avaliacao->UseVisualStyleBackColor = true;
			// 
			// bt_solicitar_registro_estagio
			// 
			this->bt_solicitar_registro_estagio->Enabled = false;
			this->bt_solicitar_registro_estagio->Location = System::Drawing::Point(207, 50);
			this->bt_solicitar_registro_estagio->Name = L"bt_solicitar_registro_estagio";
			this->bt_solicitar_registro_estagio->Size = System::Drawing::Size(157, 23);
			this->bt_solicitar_registro_estagio->TabIndex = 8;
			this->bt_solicitar_registro_estagio->Text = L"Solicitar Registro de Estágio";
			this->bt_solicitar_registro_estagio->UseVisualStyleBackColor = true;
			// 
			// bt_preencher_plano
			// 
			this->bt_preencher_plano->Enabled = false;
			this->bt_preencher_plano->Location = System::Drawing::Point(207, 79);
			this->bt_preencher_plano->Name = L"bt_preencher_plano";
			this->bt_preencher_plano->Size = System::Drawing::Size(157, 23);
			this->bt_preencher_plano->TabIndex = 9;
			this->bt_preencher_plano->Text = L"Preencher Plano de Estágio";
			this->bt_preencher_plano->UseVisualStyleBackColor = true;
			// 
			// bt_enviar_relatorio
			// 
			this->bt_enviar_relatorio->Enabled = false;
			this->bt_enviar_relatorio->Location = System::Drawing::Point(207, 108);
			this->bt_enviar_relatorio->Name = L"bt_enviar_relatorio";
			this->bt_enviar_relatorio->Size = System::Drawing::Size(157, 23);
			this->bt_enviar_relatorio->TabIndex = 10;
			this->bt_enviar_relatorio->Text = L"Enviar Relatório de Estágio";
			this->bt_enviar_relatorio->UseVisualStyleBackColor = true;
			// 
			// bt_divulgar_vaga
			// 
			this->bt_divulgar_vaga->Enabled = false;
			this->bt_divulgar_vaga->Location = System::Drawing::Point(395, 50);
			this->bt_divulgar_vaga->Name = L"bt_divulgar_vaga";
			this->bt_divulgar_vaga->Size = System::Drawing::Size(102, 23);
			this->bt_divulgar_vaga->TabIndex = 11;
			this->bt_divulgar_vaga->Text = L"Divulgar Vaga";
			this->bt_divulgar_vaga->UseVisualStyleBackColor = true;
			// 
			// bt_cadastrar_aluno
			// 
			this->bt_cadastrar_aluno->Enabled = false;
			this->bt_cadastrar_aluno->Location = System::Drawing::Point(530, 49);
			this->bt_cadastrar_aluno->Name = L"bt_cadastrar_aluno";
			this->bt_cadastrar_aluno->Size = System::Drawing::Size(114, 23);
			this->bt_cadastrar_aluno->TabIndex = 12;
			this->bt_cadastrar_aluno->Text = L"Cadastrar Aluno";
			this->bt_cadastrar_aluno->UseVisualStyleBackColor = true;
			// 
			// bt_cadastrar_usuarios
			// 
			this->bt_cadastrar_usuarios->Enabled = false;
			this->bt_cadastrar_usuarios->Location = System::Drawing::Point(530, 78);
			this->bt_cadastrar_usuarios->Name = L"bt_cadastrar_usuarios";
			this->bt_cadastrar_usuarios->Size = System::Drawing::Size(114, 23);
			this->bt_cadastrar_usuarios->TabIndex = 13;
			this->bt_cadastrar_usuarios->Text = L"Cadastrar Usuários";
			this->bt_cadastrar_usuarios->UseVisualStyleBackColor = true;
			// 
			// bt_editar_perfis_do_usuario
			// 
			this->bt_editar_perfis_do_usuario->Enabled = false;
			this->bt_editar_perfis_do_usuario->Location = System::Drawing::Point(530, 108);
			this->bt_editar_perfis_do_usuario->Name = L"bt_editar_perfis_do_usuario";
			this->bt_editar_perfis_do_usuario->Size = System::Drawing::Size(134, 23);
			this->bt_editar_perfis_do_usuario->TabIndex = 14;
			this->bt_editar_perfis_do_usuario->Text = L"Editar Perfis do Usuário";
			this->bt_editar_perfis_do_usuario->UseVisualStyleBackColor = true;
			// 
			// bt_importar_alunos_de_arquivo
			// 
			this->bt_importar_alunos_de_arquivo->Enabled = false;
			this->bt_importar_alunos_de_arquivo->Location = System::Drawing::Point(530, 138);
			this->bt_importar_alunos_de_arquivo->Name = L"bt_importar_alunos_de_arquivo";
			this->bt_importar_alunos_de_arquivo->Size = System::Drawing::Size(178, 23);
			this->bt_importar_alunos_de_arquivo->TabIndex = 15;
			this->bt_importar_alunos_de_arquivo->Text = L"Importar Alunos de Arquivo Excel";
			this->bt_importar_alunos_de_arquivo->UseVisualStyleBackColor = true;
			// 
			// TelaDoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(742, 261);
			this->Controls->Add(this->bt_importar_alunos_de_arquivo);
			this->Controls->Add(this->bt_editar_perfis_do_usuario);
			this->Controls->Add(this->bt_cadastrar_usuarios);
			this->Controls->Add(this->bt_cadastrar_aluno);
			this->Controls->Add(this->bt_divulgar_vaga);
			this->Controls->Add(this->bt_enviar_relatorio);
			this->Controls->Add(this->bt_preencher_plano);
			this->Controls->Add(this->bt_solicitar_registro_estagio);
			this->Controls->Add(this->bt_enviar_avaliacao);
			this->Controls->Add(this->bt_historico_empresa);
			this->Controls->Add(this->bt_historico_estagio);
			this->Controls->Add(this->bt_mostrar_pendencias);
			this->Controls->Add(this->bt_avaliar_estagio);
			this->Controls->Add(this->bt_registrar_estagio);
			this->Name = L"TelaDoUsuario";
			this->Text = L"TelaDoUsuario";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
