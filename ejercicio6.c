//
// Created by Paul Contreras on 22/03/23.
//
/*
 * sumar los 50 primeros números enteros positivos (1-50). Mostrar el resultado de la suma.
 */

// Importamos las librerías estandar
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Definimos las variables a usar
    int i, sumador;

    // iniciamos las variables
    i = 1;
    sumador = 0;

    /*
     * Ejecutamos un ciclo while hasta el 50 para sumar todos los valores
     */
    while (i <= 50){
        sumador = sumador + i;
        i = i + 1;
    }

    /*
     * El resultado lo podemos comprobar mediante la fórmula de Gauss
     * x = n(n+1)/2, donde n es la cantidad de números en una sucesión a sumar, y x la suma total
     */
    printf("La suma total es: %d \n", sumador);

    system("pause");
    return 0;
}
