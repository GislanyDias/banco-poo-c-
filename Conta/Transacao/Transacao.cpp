#include "Transacao.h"
#include <string>
using std::string;
using std::cout;
using std::endl;


Transacao::Transacao(string des, double valor){
    setValorTransacao(valor);
    setDescricao(des);
};

void Transacao::setValorTransacao(double valor){
    this->valor = valor;
};

void Transacao::setDescricao(string des){
    this->descricao = des;
};

string Transacao::getData(){
    return this->dataTran;
};

double Transacao::getValorTransacao(){
    return this->valor;
};

//-----Função para pegar a data atual do computador 
string Transacao::setData(){
    struct tm *dataTran;
    time_t curr_time;
    time(&curr_time);

    int dia = dataTran->tm_mday, mes = dataTran->tm_mon + 1, ano = dataTran->tm_year + 1900;


    string Dia(std::to_string(dia));
    string Mes(std::to_string(mes));
    string Ano(std::to_string(ano));

    return Dia + "/" + Mes + "/" + Ano;

};

void Transacao::displayTransacao(){
    cout << "⊱─────────────────────────⊰";
    cout << "Data: " << getData() << endl;
    cout << "Valor: " << getValorTransacao() << endl;
    cout << "Tipo: " << getDescricao() << endl;
    cout << "⊱─────────────────────────⊰";
};



