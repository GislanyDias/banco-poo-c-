#include <iostream>
#include <string>
#include "PessoaFisica.h"

using std::cout;
using std::endl;
using std::string;


PessoaFisica::PessoaFisica(string &nome, string &cpf) : Pessoa(nome){
    setCpf(cpf);
};

void PessoaFisica::setCpf(string &cpf){
    this->CPF = cpf;
};


string PessoaFisica::getNome() {
    return nome;
};

string PessoaFisica::getCpf(){
    return CPF;
};


