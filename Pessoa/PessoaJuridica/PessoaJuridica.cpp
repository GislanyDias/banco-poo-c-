#include <iostream>
#include <string>
#include "PessoaJuridica.h"

using std::cout;
using std::endl;
using std::string;

PessoaJuridica::PessoaJuridica(string &nome, string &cnpj, string &razaos) : Pessoa(nome){
    setCnpj(cnpj);
    setRazaoSocial(razaos);
};

void PessoaJuridica::setCnpj(string &cnpj){
    this->CNPJ =  cnpj;
};

void PessoaJuridica::setRazaoSocial(string &razaos){
    this->razaoSocial = razaos;
};

string PessoaJuridica::getNome() {
    return nome;
};

string PessoaJuridica::getCpnj(){
    return CNPJ;
};

string PessoaJuridica::getRazaoSocial(){
    return razaoSocial;
};

