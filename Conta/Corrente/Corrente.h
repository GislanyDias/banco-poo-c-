#ifndef CORRENTE_H
#define CORRENTE_H

#include <iostream>
#include "../Conta.h"

class Corrente : public Conta
{

public:
    virtual ~Corrente(){;}

    Corrente(const int &numeroConta, Pessoa *p = nullptr);

};



#endif