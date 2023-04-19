#ifndef PESSOAF_H
#define PESSOAF_H

#include "../Pessoa.h"
#include <string>
using std::string;


class PessoaFisica : public Pessoa
{
public:
    virtual ~PessoaFisica(){};
    PessoaFisica(string &,string &);

    void setCpf(string &);

    string getNome() override;
    string getCpf();
    
protected:
    string CPF;
    
};


#endif