//
// Created by Paul Contreras on 23/03/23.
//
/*
 *  Imprimir todas las letras del alfabeto español.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void alphabetMayus(){
    for(int i=65; i <= 74; ++i){
        printf(" %c ", i);
    }
    printf(" Ll ");
    printf(" Ñ ");
    for(int i=79; i <= 90; ++i){
        printf(" %c ",i);
    }
}

int main(){

    setlocale(LC_CTYPE,"SPANISH");

    alphabetMayus();
    system("pause");
    return 0;
}