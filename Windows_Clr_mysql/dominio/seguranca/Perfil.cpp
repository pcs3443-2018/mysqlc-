#include "Perfil.h"
//Begin section for file Perfil.cpp
//TODO: Add definitions that you want preserved
//End section for file Perfil.cpp



vector<Funcionalidade*>* Perfil::getFuncionalidaes()
{
	return this->funcionalidades;
}

void Perfil::setFuncionalidades(vector<Funcionalidade*>* funcionalidades)
{
	this->funcionalidades = funcionalidades;
}

//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Perfil::Perfil() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Perfil::~Perfil() 
{
    //TODO Auto-generated method stub
}
