#include "Estagio.h"
#include <ctime>

//Begin section for file Estagio.cpp
//TODO: Add definitions that you want preserved
//End section for file Estagio.cpp


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Estagio::Estagio() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Estagio::~Estagio() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
int Estagio::getId() 
{
    //TODO Auto-generated method stub
    return 0;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
time_t Estagio::getDataInicio() 
{
    //TODO Auto-generated method stub
	time_t agora;
	return agora;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
time_t Estagio::getDataFim()
{
    //TODO Auto-generated method stub
	time_t agora;
	return agora;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
string Estagio::getNomeEmpresa() 
{
    //TODO Auto-generated method stub
    return "";
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Estagio::setId(int id) 
{
    //TODO Auto-generated method stub
    return;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Estagio::setDataInicio(time_t dataInicio) 
{
    //TODO Auto-generated method stub
    return;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Estagio::setDataFim(time_t dataFim) 
{
    //TODO Auto-generated method stub
    return;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Estagio::setNomeEmpresa(string nomeEmpresa)
{
    //TODO Auto-generated method stub
    return;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
double Estagio::getNota() 
{
    //TODO Auto-generated method stub
    return 0;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
void Estagio::setNota(double nota) 
{
    //TODO Auto-generated method stub
    return;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Aluno* Estagio::getAluno() 
{
    //TODO Auto-generated method stub
	Aluno* aluno = new Aluno();
	return aluno;
}
void Estagio::setAluno(Aluno* aluno) {
	this->aluno = aluno;
}

