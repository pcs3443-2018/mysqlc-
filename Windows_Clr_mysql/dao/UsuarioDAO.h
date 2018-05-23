#ifndef USUARIODAO_H
#define USUARIODAO_H
//Begin section for file UsuarioDAO.h
//TODO: Add definitions that you want preserved
//End section for file UsuarioDAO.h
#include "../dominio/seguranca/Usuario.h"
#include "PerfilDAO.h" //Dependency Generated Source:UsuarioDAO Target:PerfilDAO
#include "MySQLDAO.h"





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class UsuarioDAO
{

    //Begin section for UsuarioDAO
    //TODO: Add attributes that you want preserved
    //End section for UsuarioDAO



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        UsuarioDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~UsuarioDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* selecionarPeloId(int id); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* selecionarPeloLogin(string login); 



        //<p>Retorna o objeto Usuário junto com os perfis dele.</p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* selecionarPeloLoginESenha(string login, string senha);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* carregarUsuario(int id); 



};  //end class UsuarioDAO



#endif
