#include "Pessoa.h"

#include <string>
using std::string;


Pessoa::Pessoa(string &nome){
    setNome(nome);
};

void Pessoa::setNome(string &nome){
    this->nome = nome;
};

string Pessoa::getNome(){
    return this->nome;
};