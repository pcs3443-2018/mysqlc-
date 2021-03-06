#include "UsuarioDAO.h"
#include "PerfilDAO.h"
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
	try {
		
		//Pegar conex�o
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		string seed = "seedmuitosegura(ou variavel)";
		preparedStatement = connection->prepareStatement("SELECT id, login, data_cadastro, ativo FROM usuarios where login = ? and senha = AES_ENCRYPT(?,?)");
		//preparedStatement = connection->prepareStatement("SELECT id, login, data_cadastro, ativo FROM usuarios where login = ? ");
	
		preparedStatement->setString(1, login.c_str());
		preparedStatement->setString(2, senha.c_str());
		preparedStatement->setString(3, seed.c_str());
		//TODO Auto-generated method stub
	
		//Escrever consulta
	
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			// You can use either numeric offsets...
			usuario = new Usuario();
			usuario->setId(resultSet->getInt(1)); // getInt(1) returns the first column
			usuario->setLogin(resultSet->getString(2).c_str());
			string tempo = resultSet->getString(3).c_str();
			int mes = 0;
			int dia = 0;
			int ano = 0;
			int hora = 0;
			int minuto = 0;
			int segundo = 0;
			struct tm t = { 0 };
			sscanf(tempo.c_str(), "%d-%d-%d %d:%d:%d", &ano, &mes, &dia, &hora, &minuto, &segundo); //tomar cuidado com os const char*
			t.tm_year = ano - 1900; 
			t.tm_mon = mes-1; //desde janeiro
			t.tm_mday = dia;
			t.tm_hour = hora;
			t.tm_min = minuto;
			t.tm_sec = segundo;

			usuario->setDataCadastro(mktime(&t));

			usuario->setAtivo(resultSet->getBoolean(4));
		}
	}catch(sql::SQLException e)
	{
		connection->close();
		log = e.what();
	}
	//Avaliar resultado
	return usuario;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
Usuario* UsuarioDAO::carregarUsuario(Usuario * usuario) 
{
	string log;
	Perfil * perfil = nullptr;
	vector<Perfil*>* perfis = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {

		//Pegar conex�o
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("select nome_perfil from usuario_perfis where id_usuario = ?");
		preparedStatement->setInt(1, usuario->getId());
		//usuario = new Usuario();
		resultSet = preparedStatement->executeQuery();		
		perfis = new vector<Perfil*>();
		while (resultSet->next()) {
			perfil = new Perfil();
			perfil->setNome(resultSet->getString(1).c_str());
			perfis->push_back(perfil);
		}
		usuario->setPerfis(perfis);
	}
	catch (sql::SQLException e)
	{
		connection->close();
		log = e.what();
		perfis= nullptr;
		usuario = nullptr;
	}
	return usuario;
}
