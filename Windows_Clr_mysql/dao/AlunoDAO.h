#ifndef ALUNODAO_H
#define ALUNODAO_H
//Begin section for file AlunoDAO.h
//TODO: Add definitions that you want preserved
//End section for file AlunoDAO.h
#include "../dominio/dto/Aluno.h" //Dependency Generated Source:AlunoDAO Target:Aluno
#include "MySQLDAO.h" //Dependency Generated Source:AlunoDAO Target:MySQLDAO
#include <vector>
#include <iostream>





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class AlunoDAO
{

    //Begin section for AlunoDAO
    //TODO: Add attributes that you want preserved
    //End section for AlunoDAO



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        AlunoDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~AlunoDAO(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void criar(Aluno* aluno); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void atualizar(Aluno* aluno); 



        //<p>Inclui os estágios do aluno</p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Aluno * recuperar(int id); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void deletar(Aluno* aluno); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        vector<Aluno> * listarAlunosEstagiando(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        vector<Aluno> * listarAlunosSemEstagio(); 



};  //end class AlunoDAO



#endif
