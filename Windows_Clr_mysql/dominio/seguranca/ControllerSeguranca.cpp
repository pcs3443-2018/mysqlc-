#include "ControllerSeguranca.h"
//Begin section for file ControllerSeguranca.cpp
//TODO: Add definitions that you want preserved
//End section for file ControllerSeguranca.cpp


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
ControllerSeguranca::ControllerSeguranca() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
ControllerSeguranca::~ControllerSeguranca() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* ControllerSeguranca::logar(string login, string senha)
{
    //TODO Auto-generated method stub
	//Usuário Mock
	Usuario * usuario = nullptr;
	UsuarioDAO* usuarioDao = new UsuarioDAO();

	usuario = usuarioDao->selecionarPeloLoginESenha(login, senha);

	return usuario;
	//fim usuário mock
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* ControllerSeguranca::deslogar(string login)
{
	Usuario * usuario = new Usuario();
	return usuario;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* ControllerSeguranca::carregarFuncionalidades(Usuario* usuario) 
{
	Usuario * u = new Usuario();
	return u;
}
