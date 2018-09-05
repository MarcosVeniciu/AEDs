/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "TADPessoa.h"


void setNome(structPessoa* Pessoa, char* nome)
{
    strcpy(Pessoa->nomePessoa, nome);
}

void InicializaPessoa(structPessoa* Pessoa)
{
    Pessoa->nomePessoa[0] = '\0';
}