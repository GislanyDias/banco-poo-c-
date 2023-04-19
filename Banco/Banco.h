#ifndef BANCO_H
#define BANCO_H

#include "../Pessoa/PessoaJuridica/PessoaJuridica.h"
#include "../Conta/Conta.h"
#include "../Conta/Corrente/Corrente.h"
#include "../Conta/Limite/Limite.h"
#include "../Conta/Poupança/Poupanca.h"

#include <list>
#include <string>
using std::string;

class Banco : public PessoaJuridica
{
    
public:

    ~Banco();
    Banco(string &, string &, string &);

    void cadastro(int, Pessoa *pessoa);
    void cadastro(Pessoa *, double);

    void remover(int &);
    void consultar(int &);

    void mostrarClientes(Pessoa *pessoa);
    void mostrarContas();


private:
    string nome;
    list <Pessoa *> clientes;
    list <Conta *> contas;
};


#endif