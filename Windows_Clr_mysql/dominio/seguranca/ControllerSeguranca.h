#ifndef CONTROLLERSEGURANCA_H
#define CONTROLLERSEGURANCA_H
//Begin section for file ControllerSeguranca.h
//TODO: Add definitions that you want preserved
//End section for file ControllerSeguranca.h
#include "Usuario.h"
#include "../../dao/UsuarioDAO.h" //Dependency Generated Source:ControllerSeguranca Target:UsuarioDAO





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class ControllerSeguranca
{

    //Begin section for ControllerSeguranca
    //TODO: Add attributes that you want preserved
    //End section for ControllerSeguranca



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ControllerSeguranca(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~ControllerSeguranca(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* logar(string login, string senha);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* deslogar(string login);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Usuario* carregarFuncionalidades(Usuario * usuario); 



};  //end class ControllerSeguranca



#endif
