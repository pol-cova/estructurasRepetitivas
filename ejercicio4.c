//
// Created by Paul Contreras on 22/03/23.
//
/*
 * principal ()

 inicio

            entero i ←1

            mientras ( i < 25 )

   inicio

Imprimir  i

                        i ← i + 1

                fin

 fin
 */

// Importamos las librerías estandar
#include <stdlib.h>
#include <stdio.h>

int main(){
    // Definimos e iniciamos la variable i en 1
    int i=1;

    /*
     * Ejecutamos un ciclo while mientras que i sea menor qu 25, con un incremento de 1,
     * mientras se ejecuta se imprime el valor que toma i.
     */
    while (i < 25){
        printf("i: %d \n", i);
        i = i + 1;
    }

    system("pause");
    return 0;
}