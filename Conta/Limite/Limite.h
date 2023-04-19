#ifndef LIMITE_H
#define LIMITE_H

#include "../Conta.h"

class Limite : public Conta
{
    
public:

    Limite(const int &numeroConta, double &limite, Pessoa *p = nullptr);

    virtual void DadosConta() override;
    virtual void setLimite(double &limite);
    double getLimite();
    virtual void operator>>(double) override;

private:
    double limite;
    
};


#endif