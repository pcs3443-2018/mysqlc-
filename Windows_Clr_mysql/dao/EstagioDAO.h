#ifndef ESTAGIODAO_H
#define ESTAGIODAO_H
//Begin section for file EstagioDAO.h
//TODO: Add definitions that you want preserved
//End section for file EstagioDAO.h
#include "../dominio/dto/Estagio.h" //Dependency Generated Source:EstagioDAO Target:Estagio
#include "../dominio/dto/Aluno.h" //Dependency Generated Source:EstagioDAO Target:Aluno
#include "MySQLDAO.h" //Dependency Generated Source:EstagioDAO Target:MySQLDAO





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class EstagioDAO
{

    //Begin section for EstagioDAO
    //TODO: Add attributes that you want preserved
    //End section for EstagioDAO



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        EstagioDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~EstagioDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void criar(Estagio * estagio); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void atualizar(Estagio * estagio); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Estagio * recuperar(int id); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        vector<Estagio>* recuperar(Aluno* aluno); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void deletar(Estagio *estagio); 



};  //end class EstagioDAO



#endif
