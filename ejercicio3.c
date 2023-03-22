//
// Created by Paul Contreras on 21/03/23.
//
/*
 * principal ()

 inicio

            entero m

m ←3

            mientras ( m < 90 )

   inicio

Imprimir  m

                        m ← m + 3

                fin

 fin
 */

// Incluimos las librerías básicas
#include <stdio.h>
#include <stdlib.h>

int main(){
    // Definimos la variable m
    int m;

    // Iniciamos la variable m con el valor de 3
    m = 3;

    /*
     * Ejecutaremos un ciclo while, mientras m valga menos de 90, el cual hará que m incremente de 3 en 3
     * iniciando en 3 e imprimirá el valor de m hasta que el loop finalice.
     */

    while (m < 90){
        printf("m: %d\n", m);
        m = m + 3;
    }

    system("pause");
    return 0;
}
