//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Realizar la sumatoria de los números entre 0 y un número dado por el usuario.
 * El número es un entero positivo.
 */

// Incluimos las librerías estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Definimos el idioma a usar
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos e iniciamos las variables
    int sumador = 0, userNumber;

    printf("Ingrese un número(positivo) :");
    scanf("%d", &userNumber);

    for(int i=0; i <= userNumber; i++){
        sumador = sumador + i;
    }

    printf("La suma total desde el 0, hasta el %d es %d \n", userNumber, sumador);


    system("pause");
    return 0;
}