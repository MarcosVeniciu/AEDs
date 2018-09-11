/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TADListaVoo.h
 * Author: Ethical Hacker
 *
 * Created on 5 de Setembro de 2018, 17:09
 */
#include "TADVoo.h"

typedef struct Celula{
    TipoVoo Voo;
    struct Celula* pProx;
}TCelula;

typedef struct{
    struct Celula* pPrimeiro;
    struct Celula* pUltimo;
}TLista;


void FLVazia (TLista *pLista);
int setVooEmOrdem   (TLista *pLista,TipoVoo *Voo);
int RemoverVooIdentificador (TLista* pLista,TipoVoo *Voo);
int ProcuraVooPeloIdentificador (TLista *pLista,TipoVoo *Voo);


void ImprimeTeste(TLista *pLista);