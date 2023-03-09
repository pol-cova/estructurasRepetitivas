//
// Created by Paul Contreras on 09/03/23.
//
/*
 *  Este programa imprime los 10 primeros números enteros utilizando la instrucción for
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //Definir el idioma
    setlocale(LC_CTYPE,"SPANISH");

    for(int i=1; i<=10; i++){
        printf("\n %d \n",i);
    }

    system("pause");
    return 0;
}
