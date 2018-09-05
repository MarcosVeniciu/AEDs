/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Martins
 *
 * Created on 3 de Setembro de 2018, 18:49
 */

#include <stdio.h>
#include <stdlib.h>

#include "TADListaPessoa.h"
/*
 * 
 */
int main(int argc, char** argv) {

    structPessoa Pessoa;
    ListaPessoa Lista;
    
    int remove, escolha, correto = 2, loop=0;
    char nome[50];
    
    
    
    FLVazia(&Lista);
    InicializaPessoa(&Pessoa);
 


    
    
while(loop==0)    
{
    printf("\n>>> O que voce deseja escolher? <<<\n\n[1]Resetar a lista.\n"
            "[2]Checar se a lista esta vazia.\n"
            "[3]Inserir dados na lista.\n"
            "[4]Retirar dados da lista.\n"
            "[5]Imprimir a lista.\n\n");
    scanf("%d", &escolha);
    getchar();
  
  
    switch(escolha)
    {
        case 1: FLVazia(&Lista);  printf("\n\nLista Resetada.\n\n");
            break;
        case 2: LEhVazia(&Lista);
            break;
        case 3: 
                       
            printf("\nDigite o nome da pessoa: ");
            do
            {
                scanf("%[^\n]49", nome);
                getchar();
                printf("\nNome digitado: %s\n", nome);
                printf("Nome correto?\n\n[1]SIM\n[1]NAO\n\n");
                scanf("%d", &correto);
                getchar();
                if(correto==2)
                    printf("Digite o nome novamente: ");
            }
            while(correto==2);
               
            
            setNome(&Pessoa, nome);
            LInsere(&Lista, Pessoa); printf("\n >Nome inserido com sucesso.<\n");
            break;
        case 4: 
            printf("Deseja remover qual posicao? ");
            scanf("%d", &remove);
            LRetira(&Lista, remove, &Pessoa);
            break;
        case 5: LImprime(&Lista);
            break;
        default: printf("\nNumero invalido. Encerrando o programa.\n\n"); loop=1;
            break;

    }
}   
    
    
    return (EXIT_SUCCESS);
}

