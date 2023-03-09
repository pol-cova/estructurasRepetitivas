//
// Created by Paul Contreras on 09/03/23.
//
/*
 * Este programa imprime los 10 primeros números enteros utilizando la instrucción while
 */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    //Definir el idioma a trabajar
    setlocale(LC_CTYPE,"SPANISH");

    /* Definir una variable de control
     * Esta sera i la cual se inicia en 1 puesto que es el primer número
    */

    int i = 1;

    /*
     * Usamos un while para imprimir los números desde el 1 hasta el 10 con la condición de que
     * i valga 10 no más, y este tendrá un incremento de 1 en 1 para imprimir los números.
     */
    while (i <= 10){
        printf("\n %d \n", i);
        i++;
    }


    //system("pause");
    return 0;
}
