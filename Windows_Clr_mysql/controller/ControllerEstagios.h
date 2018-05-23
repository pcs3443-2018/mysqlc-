#ifndef CONTROLLERESTAGIOS_H
#define CONTROLLERESTAGIOS_H
//Begin section for file ControllerEstagios.h
//TODO: Add definitions that you want preserved
//End section for file ControllerEstagios.h
#include "../dominio/seguranca/Usuario.h"
#include "../dominio/ServicoEstagios.h" //Dependency Generated Source:ControllerEstagios Target:ServicoEstagios
/*
#include "../view/TelaDeAvaliacaoDoAluno.h" //Dependency Generated Source:ControllerEstagios Target:TelaDeAvaliacaoDoAluno
#include "../view/FormularioDeCarregamentoDeArquivoExcel.h" //Dependency Generated Source:ControllerEstagios Target:FormularioDeCarregamentoDeArquivoExcel
#include "../view/TelaDeGeracaoDePDF.h" //Dependency Generated Source:ControllerEstagios Target:TelaDeGeracaoDePDF
#include "../view/TelaOpcoes.h" //Dependency Generated Source:ControllerEstagios Target:TelaOpcoes
*/


class ValidadorDeFormulario; //Dependency Generated Source:ControllerEstagios Target:ValidadorDeFormulario


class GerenciadorDePerfisDeUsuario; //Dependency Generated Source:ControllerEstagios Target:GerenciadorDePerfisDeUsuario





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class ControllerEstagios
{

    //Begin section for ControllerEstagios
    //TODO: Add attributes that you want preserved
    //End section for ControllerEstagios

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ValidadorDeFormulario * class1;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        GerenciadorDePerfisDeUsuario * gerenciadorPerfis;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void inicializarAplicacao(); 




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ControllerEstagios(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~ControllerEstagios(); 



        //<p>Caso o usuário seja o coordenador, apresenta a tela tela de avaliação do aluno.</p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void mostrarTelaDeAvaliacaoDoAluno(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void mostrarFormularioDeCarregamentoDeArquivoExcel(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void mostrarTelaDeGeracaoDePDF(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void mostrarTelaDoUsuario(Usuario * u); 



};  //end class ControllerEstagios



#endif
