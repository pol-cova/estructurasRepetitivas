//
// Created by Paul Contreras on 09/03/23.
//
/*
 * principal ()

 inicio

            entero cont

cont ← 5

            mientras ( cont < 20 )

   inicio

Imprimir “prueba”

                        cont ← cont + 2

                fin

 fin
 */

// Incluimos las librerías principales
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos e iniciamos el contador

    int count = 5;

    /*
     * Esta parte imprime el mensaje de prueba hasta que el contador vale 20, iniciado con 5 y
     * con un incremento de 2
     */
    while (count < 20){
        printf("Prueba\n");
        count = count + 2;
    }

    system("pause");
    return 0;

}