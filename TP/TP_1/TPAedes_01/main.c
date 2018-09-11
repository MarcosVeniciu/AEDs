/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Ethical Hacker
 *
 * Created on 4 de Setembro de 2018, 23:44
 */

#include "TADListaVoo.h"


int main(int argc, char** argv) {

    int Identificador_voo=0,operacao=0,saida=0;
    char H_decolagem[TAM],H_pouso[TAM];
    TipoVoo Voo;
    TLista Lista;






    printf("(*) Escolha uma opcao:\n 1 - Criar uma lista vazia.\n 0 - Sair.\n\n -> ");
    scanf("%d", &operacao);
    getchar();

    if(operacao != 0){
        Inicializar (&Voo);
        if(operacao == 1){
            FLVazia (&Lista);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n**Lista Criada com sucesso!!!**\n\n\n\n\n");
        }


        printf("(*) Escolha uma opcao:\n 1 - Inserir dados na lista\n 0 - Sair.\n\n -> ");
        scanf("%d", &operacao);
        getchar();

        if(operacao!=0){
            if(operacao==1){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

                do{
                    setH_decolagem  (&Voo,&H_decolagem[TAM]);
                    setVooEmOrdem   (&Lista,&Voo);
                    printf("\nDigite 0 para sair ou 1 para continuar a insercao\n");
                    scanf("%d",&saida);
                }while(saida!=0);

            }
        }

        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n**Itens Inseridos com sucesso!!!**\n\n\n\n\n");
        printf("(*) Escolha uma opcao:\n 1 - Retirar elemento da lista\n 2 - Imprimir a lista atual sem retirar elementos\n 0 - Sair.\n\n -> ");
        scanf("%d", &operacao);
        getchar();

         if(operacao!=0){
            if(operacao==1){
//                printf("Digite o nome do livro a ser retirado:\n");
//                scanf(" %[^\n]s",&Livro.nome);
//                LRetira  (&Lista,&Livro);
//                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n**Itens removidos com sucesso!!!*\n\n\n\n\n\n");
//                printf("(*) Escolha uma opcao:\n 1 - Imprimir lista de elementos apos remocao\n 0 - Sair.\n\n -> ");
//                scanf("%d", &operacao);
//                getchar();
//                if(operacao==1){
//                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
//                    LImprime (&Lista);
                }
            }
            if(operacao==2){
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
               ImprimeTeste (&Lista);
            }

    }


    printf("\nVolte sempre!\n");

    getchar();





    return (EXIT_SUCCESS);
}
