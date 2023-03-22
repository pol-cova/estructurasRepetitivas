//
// Created by Paul Contreras on 21/03/23.
//
/*
 * principal ()

 inicio

            entero a, b, c

a ← 3

b ← 8

c ← 4

            mientras ( a < 65 )

   inicio

a ← a * c

b ← b + a

c ← c + 1

                fin

            imprimir a,b,c

 fin
 */

// Incluimos las librerías básicas
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Definimos las variables a usar
    int a,b,c;

    // Inicializamos las variables
    a = 3, b = 8, c =4;

    /*
     * Creamos un ciclo while que se ejecutara mientras a<65
     */
    while (a < 65){
        /*
         * Reasignamos los valores que tomaran las variables mientras se ejecute el loop
         */
        a = a * c;
        b = b + a;
        c = c + 1;
    }

    // Imprimimos los valores finales de a,b y c
    printf("a: %d, b: %d, c: %d \n", a,b,c);

    system("pause");

    return 0;
}