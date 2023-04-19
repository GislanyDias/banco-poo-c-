#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa
{
public:
    virtual ~Pessoa(){;}
    Pessoa(){};
    Pessoa(string &);

    virtual void setNome(string &);
    virtual string getNome();

protected:
    string nome;

};


#endif