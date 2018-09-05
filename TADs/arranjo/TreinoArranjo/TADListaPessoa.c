/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

#include "TADListaPessoa.h"

/*
PLISTA = nomeLista;
TLISTA = ListaPessoa;
TITEM = structPessoa;
ITEM = Pessoa;
CHAVE = nomePessoa;
*/




void FLVazia(ListaPessoa* nomeLista)
{
    nomeLista->Primeiro = InicioArranjo;
    nomeLista->Ultimo = nomeLista->Primeiro;
}
//
int LEhVazia(ListaPessoa* nomeLista)
{
    if (nomeLista->Ultimo == nomeLista->Primeiro)
    {
        printf("\n\nA lista esta vazia.\n\n");
    }
    else  
        printf("\n\nA lista nao esta vazia.\n\n");
}
//
int LInsere(ListaPessoa* nomeLista, structPessoa x)
{
    if(nomeLista->Ultimo == MAXTAM)
    {
        return 0; //lista cheia;
    }
    nomeLista->Pessoa[nomeLista->Ultimo++] = x;
    return 1;
}
//
int LRetira(ListaPessoa* nomeLista, int p, structPessoa *pX)
{
    int cont;
    if(LEhVazia(nomeLista) || p>= nomeLista->Ultimo || p<0)
    {
        return 0;
    }
    
    *pX = nomeLista->Pessoa[p];
    nomeLista->Ultimo--;
    
    for(cont = p+1; cont <= nomeLista->Ultimo; cont++){
        nomeLista->Pessoa[cont-1] = nomeLista->Pessoa[cont];
    }
    return 1;
       
}
//
void LImprime(ListaPessoa* nomeLista){
    int i;
    for(i = nomeLista->Primeiro; i<nomeLista->Ultimo; i++)
    {
        printf("\n[%d]Nome: %s\n", i, nomeLista->Pessoa[i].nomePessoa);
    }
}