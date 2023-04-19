#include "Limite.h"
#include <iostream>
using std::cout;
using std::endl;

Limite::Limite(const int &num, double &limite, Pessoa *p = nullptr): Conta(num, p){
    setLimite(limite);
};

void Limite::setLimite(double &limite){
    this->limite =  limite;
};

double Limite::getLimite(){
    return this->limite;
};

void Limite::operator>>(double retirar){
   if(retirar <= this->saldo + this->limite){
    this->saldo -= retirar;
    Transacao t("Saque",-retirar);
    addTransacao(t);
  }
  else{
    cout << "O valor que você deseja retirar está acima do seu limite atual." << endl;
  };
};

void Limite::DadosConta(){
    cout<< "⊱─────── Poupamax® ───────⊰" << endl;
    cout<< "Seja bem-vindo(a) a sua conta!ッ" << endl;
    cout<< endl;
    cout<< "Nome do Cliente: " << getCorrentista() << endl;
    cout<< "Número da Conta: " << getNumConta() << endl;
    cout<< "Saldo: R$ " << getSaldo() << endl;
    cout<< "Limite da Conta: "<< getLimite() << endl;
    cout<< "⊱─────────────────────────⊰" << endl;
};




