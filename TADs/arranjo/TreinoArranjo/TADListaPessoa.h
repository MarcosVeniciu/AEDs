/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TADListaPessoa.h
 * Author: Martins
 *
 * Created on 3 de Setembro de 2018, 19:30
 */

#include "TADPessoa.h"

typedef struct{
    
    structPessoa Pessoa[MAXTAM];
    int Primeiro, Ultimo;
    
}ListaPessoa;



void FLVazia(ListaPessoa* nomeLista);
int LEhVazia(ListaPessoa* nomeLista);
int LInsere(ListaPessoa* nomeLista, structPessoa x);
int LRetira(ListaPessoa* nomeLista, int p, structPessoa *pX);
void LImprime(ListaPessoa* nomeLista);