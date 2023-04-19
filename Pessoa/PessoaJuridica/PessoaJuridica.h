#ifndef PESSOAJ_H
#define PESSOAJ_H

#include "../Pessoa.h"
#include <string>
using std::string;

class PessoaJuridica : public Pessoa
{

public:
    PessoaJuridica(){};

    PessoaJuridica(string &, string &, string &);

    void setCnpj(string &);
    void setRazaoSocial(string &);

    string getNome() override;
    string getCpnj();
    string getRazaoSocial();


protected:
    string CNPJ;
    string razaoSocial;

};


#endif
