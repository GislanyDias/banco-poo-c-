#include "Poupanca.h"
#include <iostream>
using std::cout;
using std::endl;

Poupanca::Poupanca(const int &num, Pessoa *p): Conta(num,p), aniversario(setData()){
    
};

string Poupanca::getAniversario(){
    return this->aniversario;
};


void Poupanca::Juros(){
    this->saldo *= 1.20;
};


void Poupanca::DadosConta(){
    cout<< "⊱─────── Poupamax® ───────⊰" << endl;
    cout<< "Seja bem-vindo(a) a sua conta!ッ" << endl;
    cout<< endl;
    cout<< "Nome do Cliente: " << getCorrentista() << endl;
    cout<< "Número da Conta: " << getNumConta() << endl;
    cout<< "Saldo: R$ " << getSaldo() << endl;
    cout<< "Aniversário: " << getAniversario() << endl;
    cout<< "⊱─────────────────────────⊰" << endl;
};

void Poupanca::Extrato(){

};