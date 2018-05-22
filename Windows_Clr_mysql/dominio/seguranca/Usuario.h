#ifndef USUARIO_H
#define USUARIO_H
#include "Perfil.h"
//Begin section for file Usuario.h
//TODO: Add definitions that you want preserved
//End section for file Usuario.h


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Usuario
{

    //Begin section for Usuario
    //TODO: Add attributes that you want preserved
    //End section for Usuario

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        vector <Perfil> perfis;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        string login;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		string senha;

		time_t dataCadastro;

		bool ativo;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario(); 

		void setLogin(string login);
		void setSenha(string senha);
		void setDataCadastro(time_t dataCadastro);
		void setId(int id);
		void setAtivo(bool ativo);
		void setPerfis(vector<Perfil>* perfis);

		string getLogin();
		string getSenha();
		int getId();
		bool isAtivo();
		vector<Perfil> *getPerfis();
		time_t getDataCadastro();


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Usuario(); 



};  //end class Usuario



#endif
