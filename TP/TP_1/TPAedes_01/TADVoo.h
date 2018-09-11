/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TADVoo.h
 * Author: Ethical Hacker
 *
 * Created on 4 de Setembro de 2018, 23:45
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define TAM 50 

typedef struct{
    int Identificador_voo;
    char H_decolagem[TAM];
    char H_pouso[TAM];
    char Aeroporto_Decolagem[TAM];
    char Aeroporto_Pouso[TAM];
    int IdentificadorPistas_Decolagem;
}TipoVoo;

void Inicializar                                (TipoVoo* p_Voo);
int setIdentificador_voo                        (TipoVoo* p_Voo,int I_voo);
void getIdentificador_voo                       (TipoVoo* p_Voo);
int setH_decolagem                              (TipoVoo* p_Voo,char* horarioDecolagem);
void getH_decolagem                             (TipoVoo* p_Voo);
int setH_pouso                                  (TipoVoo* p_Voo,char* horarioPouso);
void getH_pouso                                 (TipoVoo* p_Voo);
int setAeroporto_Decolagem                      (TipoVoo* p_Voo);
void getAeroporto_Decolagem                     (TipoVoo* p_Voo);   
int setAeroporto_Pouso                          (TipoVoo* p_Voo);
void getAeroporto_Pouso                         (TipoVoo* p_Voo);
int setIdentificadorPistas_Decolagem            (TipoVoo* p_Voo);
void getIdentificadorPistas_Decolagem           (TipoVoo* p_Voo);
