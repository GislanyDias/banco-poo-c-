#ifndef CONTA_H
#define CONTA_H

#include "../Pessoa/Pessoa.h"
#include "../Transacao/Transacao.h"
#include <string>
#include <list>
using std::string;
using std::list;


class Conta
{
    
public:
   
    virtual ~Conta(){;}

    Conta(const int &numeroConta, Pessoa * = nullptr);

    //Get's
    double getSaldo();
    int getNumConta();
    string getCorrentista(); 

    //Operadores de Saque e Depósito 
    virtual void operator >> (double);
    virtual void operator << (double);

    //Funções da Conta
    virtual void DadosConta();
    virtual void Transferencia(double, Conta);
    virtual void Extrato() ;
    void addTransacao(const Transacao obj);
    

protected:
    double saldo;
    int numeroConta;
    Pessoa* correntista;
    list <Transacao> Transacoes;
    
};


#endif