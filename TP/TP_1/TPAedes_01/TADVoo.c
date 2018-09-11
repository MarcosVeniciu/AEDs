#include "TADVoo.h"

void Inicializar                (TipoVoo* p_Voo){
    p_Voo->Aeroporto_Decolagem[0]                =  '0';
    p_Voo ->Aeroporto_Pouso[0]                   =  '0';
    p_Voo ->H_decolagem[0]                       =  '0';
    p_Voo ->H_pouso[0]                           =  '0';
    p_Voo ->Identificador_voo                    =   0 ;
    p_Voo ->IdentificadorPistas_Decolagem        =   0 ;
}

int setIdentificador_voo        (TipoVoo* p_Voo,int I_voo){
    srand(time(NULL));
    I_voo = rand() % 500;
    p_Voo->Identificador_voo = I_voo;
    return 0;
}

void getIdentificador_voo        (TipoVoo* p_Voo){
    printf("Identificador do Voo -> %d\n",p_Voo->Identificador_voo);
}


int setH_decolagem              (TipoVoo* p_Voo,char* horarioDecolagem){
    printf("Insira o horario de decolagem HH:MM\n");
    scanf(" %[^\n]s",horarioDecolagem);
    strcpy(p_Voo->H_decolagem,horarioDecolagem);
    return 0;
}
void getH_decolagem              (TipoVoo* p_Voo){
    printf("Horario Decolagem ->    %s  \n",p_Voo->H_decolagem);
}
int setH_pouso                  (TipoVoo* p_Voo,char* horarioPouso){
    printf("Insira o horario do pouso HH:MM\n");
    scanf(" %[^\n]s",horarioPouso);
    strcpy(p_Voo->Aeroporto_Pouso,horarioPouso);
    return 0;
}
void getH_pouso                  (TipoVoo*p_Voo){
    printf("Horario Pouso-> %s  \n",p_Voo->Aeroporto_Pouso);
}
int setAeroporto_Decolagem      (TipoVoo* p_Voo){
    int valor;
    printf("**Lista de Aeroportos disponiveis para Decolagem**\n\n");
    printf("Digite:\n [1]Belo Horizonte/Confins\n [2]Rio De Janeiro/Santos Dumont\n [3]Sao paulo/Congonhas\n ->");
    scanf("%d", &valor);
    getchar();
    
    switch ( valor )
    {
    case 1 :
        strcpy(p_Voo->Aeroporto_Decolagem,"Belo Horizonte/Confins");
    break;
    case 2 :
        strcpy(p_Voo->Aeroporto_Decolagem,"Rio De Janeiro/Santos Dumont");
    break;
    case 3 :
        strcpy(p_Voo->Aeroporto_Decolagem,"Sao paulo/Congonhas");
    break;
    default : 
        printf ("Valor invalido!\n");
    } 
    
    return 0;
}
void getAeroporto_Decolagem      (TipoVoo* p_Voo){
    printf("Aeroporto de Decolagem -> %s\n\n",p_Voo->Aeroporto_Decolagem);
} 
int setAeroporto_Pouso          (TipoVoo* p_Voo){
    
    int valor;
    printf("\n\n**Lista de Aeroportos disponiveis para Pouso**\n\n");
    printf("Digite:\n [1]Belo Horizonte/Confins\n [2]Rio De Janeiro/Santos Dumont\n [3]Sao paulo/Congonhas\n ->");
    scanf("%d", &valor);
    getchar();
    
    switch ( valor )
    {
    case 1 :
        strcpy(p_Voo->Aeroporto_Pouso,"Belo Horizonte/Confins");
    break;
    case 2 :
        strcpy(p_Voo->Aeroporto_Pouso,"Rio De Janeiro/Santos Dumont");
    break;
    case 3 :
        strcpy(p_Voo->Aeroporto_Pouso,"Sao paulo/Congonhas"); 
    break;
    default : 
        printf ("Valor invalido!\n");
    } 
    
     if(strcmp(p_Voo->Aeroporto_Decolagem,p_Voo->Aeroporto_Pouso) == 0){
            printf("\n\n\n**Error - Aeroporto de Pouso nao pode ser o mesmo que o Decolagem**\n\n\n");
           strcpy(p_Voo->Aeroporto_Pouso,"ERROR!"); 
        }
    return 0;
}
void getAeroporto_Pouso          (TipoVoo* p_Voo){
    printf("Aeroporto de Pouso-> %s\n",p_Voo->Aeroporto_Pouso);
}

int setIdentificadorPistas_Decolagem         (TipoVoo* p_Voo){
    int valor;
    printf("**Selecione de 1 a 5, o valor da pista de decolagem desejada**\n\n");
    scanf("%d", &valor);
    getchar();
    
    switch ( valor )
    {
    case 1 :
        p_Voo->IdentificadorPistas_Decolagem = 1;
    break;
    case 2 :
        p_Voo->IdentificadorPistas_Decolagem = 2;
    break;
    case 3 :
        p_Voo->IdentificadorPistas_Decolagem = 3;
    break;
    case 4 :
        p_Voo->IdentificadorPistas_Decolagem = 4;
    break;
    case 5 :
        p_Voo->IdentificadorPistas_Decolagem = 5;
    break;
    default : 
        printf ("Valor invalido!\n");
    } 
    
}
void getIdentificadorPistas_Decolagem     (TipoVoo* p_Voo){
    printf("A pista de decolagem esoolhida foi -> %d \n\n",p_Voo->IdentificadorPistas_Decolagem);
}