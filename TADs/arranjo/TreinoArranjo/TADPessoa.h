/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TADPessoa.h
 * Author: Martins
 *
 * Created on 3 de Setembro de 2018, 18:53
 */

#define MAXTAM 100
#define InicioArranjo 0

#include <string.h>

typedef struct{

    char nomePessoa[50];

}structPessoa;


void InicializaPessoa(structPessoa* Pessoa);

void setNome(structPessoa* Pessoa, char* nome);

