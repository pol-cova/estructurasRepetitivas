//
// Created by Paul Contreras on 09/03/23.
//
/*
 * Este programa imprime los 10 primeros números enteros utilizando la instrucción do while
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //Definimos el idioma
    setlocale(LC_CTYPE,"SPANISH");

    // Definimos variable de control
    int i=1;

    /*
     * El do ejecuta el código al menos una vez y hasta que se cumpla la condición
     * es decir la ejecuta y la valida con el while
     */
    do {
        printf("\n %d \n", i);
        i++;
    } while (i <= 10);

        system("pause");
        return 0;
}