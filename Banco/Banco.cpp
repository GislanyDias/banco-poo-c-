#include "Banco.h"

Banco::Banco(string &nome, string &cnpj, string &razaos) : PessoaJuridica(nome,cnpj,razaos){};

void Banco::cadastro(int numconta, Pessoa *pessoa){

};

void Banco::cadastro(int tipo, Pessoa *pessoa){
    if (tipo == 1){
        contas.push_back(new Poupanca(contas.size(), pessoa));
    }
    else if(tipo == 2) {
        contas.push_back(new Conta(contas.size(), pessoa));
    };
};

void Banco::cadastro(Pessoa *pessoa, double limite){
    contas.push_back(new Limite(contas.size(), limite, pessoa));
};

void Banco::mostrarContas(){
    for (auto *el : contas){
        el->DadosConta();
    }
};

void Banco::consultar(int &num){
    for(auto *g: contas)
        g->Extrato();
};

void Banco::mostrarClientes(Pessoa *pessoa){
    for (auto *el: contas){
        el->getCorrentista();
    }
}