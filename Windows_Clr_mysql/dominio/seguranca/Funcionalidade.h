#ifndef FUNCIONALIDADE_H
#define FUNCIONALIDADE_H
//Begin section for file Funcionalidade.h
//TODO: Add definitions that you want preserved
//End section for file Funcionalidade.h
#include <iostream>
using namespace std;




//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Funcionalidade
{

    //Begin section for Funcionalidade
    //TODO: Add attributes that you want preserved
    //End section for Funcionalidade

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        string nome;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int id;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Funcionalidade(); 

		int getId();
		void setId(int id);
		string getNome();
		void setNome(string nome);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~Funcionalidade(); 



};  //end class Funcionalidade



#endif
