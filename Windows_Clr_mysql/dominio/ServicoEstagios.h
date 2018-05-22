#ifndef SERVICOESTAGIOS_H
#define SERVICOESTAGIOS_H
//Begin section for file ServicoEstagios.h
//TODO: Add definitions that you want preserved
//End section for file ServicoEstagios.h
#include "../dao/AlunoDAO.h" //Dependency Generated Source:ServicoEstagios Target:AlunoDAO
#include "../dao/EstagioDAO.h" //Dependency Generated Source:ServicoEstagios Target:EstagioDAO





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class ServicoEstagios
{

    //Begin section for ServicoEstagios
    //TODO: Add attributes that you want preserved
    //End section for ServicoEstagios



    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ServicoEstagios(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        virtual ~ServicoEstagios(); 



        //<p>Caso o aluno tenha terminado o estágio, atualiza o estágio do aluno com a nota indicada.</p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void avaliarEstagio(int idEstagio, double nota); 



        //<p>Recebe o caminho do arquivo excel com a lista de alunos organizada por número USP, nome e turma.</p><p></p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void importarAlunos(string arquivoExcel); 



        //<p>Retorna o caminho do PDF gerado.</p>
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        string salvaEstagioEmPDF(int idEstagio); 



};  //end class ServicoEstagios



#endif
