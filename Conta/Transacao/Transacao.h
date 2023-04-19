#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <iostream>
#include <string>
using std::string;


class Transacao
{
    
public:

    Transacao(string = "Não informada", double = 0 ) : dataTran(setData()){};

    //Set's
    void setValorTransacao(double);
    void setDescricao(string );

    //Get's
    string getData();
    string getDescricao();
    double getValorTransacao();

    //Função pegar data
    string setData();

    void displayTransacao();
    


private:
    string dataTran;
    string descricao;
    double valor;
    
};


#endif