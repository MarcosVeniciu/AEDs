#include "TADListaVoo.h"


void FLVazia (TLista *pLista){
pLista->pPrimeiro = (TCelula*) malloc(sizeof(TCelula));
pLista->pUltimo = pLista->pPrimeiro;
pLista->pPrimeiro->pProx = NULL;
}


int setVooEmOrdem   (TLista *pLista,TipoVoo *Voo){
  TCelula* pBackup = NULL;
  TCelula* pAux = NULL ;
  int comparador;


  pAux=pLista->pPrimeiro;

  comparador = strcmp(pAux->pProx->Voo.H_decolagem, Voo->H_decolagem);

  while(pAux->pProx!=NULL){

    strcmp(pAux->pProx->Voo.H_decolagem, Voo->H_decolagem);

    if(comparador>=0){
    TCelula* pNovo = NULL;
    pNovo = (TCelula*) malloc(sizeof(TCelula));
    pBackup = pAux->pProx;
    pAux->pProx = pNovo;
    pNovo->pProx = pBackup;
    strcpy(pNovo->Voo.H_decolagem, Voo->H_decolagem);
    free (pBackup);
    printf("\n\n\n O valor inserido é >= Do valor de entrada\n\n\n\n");
    break;
    }
    pAux = pAux->pProx;
  }
  printf("\n\n\n\nO valor Inserido eh menor ou igual o valor de entrada \n\n\n\n\n\n\n");
  if(pAux->pProx == NULL){

      pLista->pUltimo->pProx = (TCelula*) malloc(sizeof(TCelula));
      pLista ->pUltimo = pLista->pUltimo ->pProx;
      strcpy(pLista ->pUltimo ->Voo.H_decolagem , Voo->H_decolagem);
      pLista ->pUltimo ->pProx = NULL;
  }

 return 0;
}

int RemoverVooIdentificador (TLista* pLista,TipoVoo *Voo){




  return 0;
}



































int ProcuraVooPeloIdentificador (TLista *pLista,TipoVoo *Voo);

void ImprimeTeste(TLista *pLista){

    TCelula* pAux = NULL;
    pAux = pLista->pPrimeiro->pProx;


    while (pAux != NULL){

        printf("%s\n",pAux->Voo.H_decolagem);
        pAux = pAux->pProx;
    }
}
