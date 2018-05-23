#ifndef PERFIL_H
#define PERFIL_H
#include <vector>
#include <iostream>
#include "Funcionalidade.h"
using namespace std;
//Begin section for file Perfil.h
//TODO: Add definitions that you want preserved
//End section for file Perfil.h

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Perfil
{

    //Begin section for Perfil
    //TODO: Add attributes that you want preserved
    //End section for Perfil

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        vector<Funcionalidade*> * funcionalidades;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;
		string nome;




    public:
		vector<Funcionalidade*> * getFuncionalidaes();
		void setFuncionalidades(vector<Funcionalidade*>* funcionalidades);

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Perfil(); 
		void setNome(string nome);
		string getNome();


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Perfil(); 



};  //end class Perfil



#endif
