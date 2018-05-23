#ifndef FUNCIONALIDADEDAO_H
#define FUNCIONALIDADEDAO_H
//Begin section for file FuncionalidadeDAO.h
//TODO: Add definitions that you want preserved
//End section for file FuncionalidadeDAO.h
#include "../dominio/seguranca/Funcionalidade.h"
#include "MySQLDAO.h"





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class FuncionalidadeDAO
{

    //Begin section for FuncionalidadeDAO
    //TODO: Add attributes that you want preserved
    //End section for FuncionalidadeDAO



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        FuncionalidadeDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~FuncionalidadeDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Funcionalidade* selecionarPeloId(int id); 



};  //end class FuncionalidadeDAO



#endif
