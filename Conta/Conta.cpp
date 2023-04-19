#include "Conta.h"
#include <iostream>
using std::cout;
using std::endl;


Conta::Conta(const int &nconta, Pessoa *p) : numeroConta(nconta) , saldo(0) {
    correntista =  p;
};


//-----Get's
string Conta::getCorrentista(){
    return correntista->getNome();
};

double Conta::getSaldo(){
    return this->saldo;
};

int Conta::getNumConta(){
    return this->numeroConta;
};

//-----Operadores de Saque e Depósito 
void Conta::operator<<(double deposito){
    this->saldo += deposito;
};

void Conta::operator>>(double saque){
    if( (this->saldo < saque) && (saque > 0)){
        this->saldo -= saque;
    }

    else{
        cout << "Saldo Insuficiente" << endl;
    }
};

//-----Funções
void Conta::Transferencia(double valor, Conta destinatario){
    if((this->saldo < valor) && (valor > 0)){
        this->saldo -= valor;
        destinatario << valor; //deposito usando o operador ja implementado 
    }
    else{
        cout<< "Valor inválido para transferência\n";
    }
};

void Conta::DadosConta(){
    cout<< "⊱─────── Poupamax® ───────⊰" << endl;
    cout<< "Seja bem-vindo(a) a sua conta!ッ" << endl;
    cout<< endl;
    cout<< "Nome do Cliente: " << getCorrentista() << endl;
    cout<< "Número da Conta: " << getNumConta() << endl;
    cout<< "Saldo: R$ " << getSaldo() << endl;
    cout<< "⊱─────────────────────────⊰" << endl;
};  


void Conta::addTransacao(const Transacao obj){
    Transacoes.push_back(obj);
};


void Conta::Extrato()  {
    cout << "⊱─────── Extrato ───────⊰" << endl;
    cout << "Aqui estão as últimas atividades em sua conta!" << endl;
    cout << endl;
    for (int i = 0; i <= 30; i++){
        for(auto x : Transacoes){
            x.displayTransacao();
        };
    };

};