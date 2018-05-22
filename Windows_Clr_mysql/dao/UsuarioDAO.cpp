#include "UsuarioDAO.h"
#include <time.h>
#include <stdio.h>
//Begin section for file UsuarioDAO.cpp
//TODO: Add definitions that you want preserved
//End section for file UsuarioDAO.cpp


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
UsuarioDAO::UsuarioDAO() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
UsuarioDAO::~UsuarioDAO() 
{
    //TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* UsuarioDAO::selecionarPeloId(int id) 
{
	Usuario * usuario = nullptr;
    //TODO Auto-generated method stub
	return usuario;
	
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* UsuarioDAO::selecionarPeloLogin(string login)
{
	Usuario * usuario = nullptr;
    //TODO Auto-generated method stub
	return usuario;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* UsuarioDAO::selecionarPeloLoginESenha(string login, string senha)
{
	string log;
	Usuario * usuario = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	//Pegar conexão
	MySQLDAO* mysqldao = MySQLDAO::getInstance();
	connection = mysqldao->getConnection();
	string seed = "seedmuitosegura(ou variavel)";
	preparedStatement = connection->prepareStatement("SELECT id, login, data_cadastro, ativo FROM usuarios where login = ? and senha = AES_ENCRYPT(?,?)");
	//preparedStatement = connection->prepareStatement("SELECT id, login, data_cadastro, ativo FROM usuarios where login = ? ");
	
	preparedStatement->setString(1, "um_coordenador");
	preparedStatement->setString(2, "12345");
	preparedStatement->setString(3, seed.c_str());
	//TODO Auto-generated method stub
	
	//Escrever consulta
	try {
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			// You can use either numeric offsets...
			usuario = new Usuario();
			usuario->setId(resultSet->getInt("id")); // getInt(1) returns the first column
			usuario->setLogin(resultSet->getString("login"));
			string tempo = resultSet->getString("data_cadastro");
			int mes, dia, ano, hora, minuto, segundo;
			struct tm t = { 0 };
			sscanf(tempo.c_str(), "%d %d %d %d %d %d", &ano, &mes, &dia, &hora, &minuto, &segundo);
			t.tm_year = ano - 1900;
			t.tm_mon = mes;
			t.tm_hour = hora;
			t.tm_min = minuto;
			t.tm_sec = segundo;

			usuario->setDataCadastro(mktime(&t));

			usuario->setAtivo(resultSet->getBoolean(4));
		}
	}catch(sql::SQLException e)
	{
		log = e.what();
	}
	
	



	//Avaliar resultado


	return usuario;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* UsuarioDAO::carregarUsuario(Usuario* id) 
{
	Usuario * usuario = nullptr;
    //TODO Auto-generated method stub
	return usuario;
}
