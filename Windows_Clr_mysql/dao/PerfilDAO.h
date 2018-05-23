#ifndef PERFILDAO_H
#define PERFILDAO_H
//Begin section for file PerfilDAO.h
//TODO: Add definitions that you want preserved
//End section for file PerfilDAO.h
#include "../dominio/seguranca/Perfil.h"
#include "MySQLDAO.h"
#include "FuncionalidadeDAO.h" //Dependency Generated Source:PerfilDAO Target:FuncionalidadeDAO

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class PerfilDAO
{

    //Begin section for PerfilDAO
    //TODO: Add attributes that you want preserved
    //End section for PerfilDAO



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        PerfilDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~PerfilDAO(); 



        //<p>Carrega as funcionalidades do Perfil</p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Perfil * selecionarPeloNome(string nome); 



};  //end class PerfilDAO



#endif
