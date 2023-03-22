//
// Created by Paul Contreras on 22/03/23.
//
/*
 *  Imprimir todos los múltiplos de 6, entre el 20 y el 200.
 */

// Importamos las librerías estandar
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Definimos la variable i
    int i;

    // La iniciamos en 20
    i = 20;

    /*
     * Ejecutamos un ciclo while y dentro un if para validar si es multiplo de 6, mientras i se incrementa de 20 + 1
     * hasta llegar a 200, lo hice con if para que me quede más claro.
     */
    while (i <= 200){
        if(i % 6 == 0){
            printf("i: %d \n", i);
        }
        i = i + 1;
    }
    system("pause");

    return 0;
}