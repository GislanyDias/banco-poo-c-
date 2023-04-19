#ifndef POUPANCA_H
#define POUPANCA_H

#include "../Conta.h"
#include <string>
using std::string;

class Poupanca : public Conta
{

public:

    virtual ~Poupanca(){;}
    Poupanca(const int &numeroConta, Pessoa *p = nullptr);

    string getAniversario();
    virtual void Juros();
    virtual void DadosConta() override;
    virtual void Extrato() override;

    //Função pegar data
    string setData();

private:
    string aniversario;
   
};


#endif