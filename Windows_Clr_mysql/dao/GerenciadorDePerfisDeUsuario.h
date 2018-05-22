#ifndef GERENCIADORDEPERFISDEUSUARIO_H
#define GERENCIADORDEPERFISDEUSUARIO_H
//Begin section for file GerenciadorDePerfisDeUsuario.h
//TODO: Add definitions that you want preserved
//End section for file GerenciadorDePerfisDeUsuario.h
#include "../dominio/seguranca/Perfil.h"
#include "../dominio/seguranca/Funcionalidade.h"





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class GerenciadorDePerfisDeUsuario
{

    //Begin section for GerenciadorDePerfisDeUsuario
    //TODO: Add attributes that you want preserved
    //End section for GerenciadorDePerfisDeUsuario



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GerenciadorDePerfisDeUsuario(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~GerenciadorDePerfisDeUsuario(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void autorizar(Perfil *perfil, Funcionalidade *funcionalidade); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void autenticar(); 



};  //end class GerenciadorDePerfisDeUsuario



#endif
