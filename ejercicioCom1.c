//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Realizar el programa que muestre el factorial de un número.
 */

// Incluimos las librerías básicas estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //Definimos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos las variables necesarias
    double numFactorial = 1;
    int num;

    // Solicitamos el número a desarrollar
    printf("Ingrese un número: \n");
    scanf("%d" , &num);

    /*
     * Usamos un for para calcular el factorial, inicia en el número y se reduce hasta 1, es decir
     * hace un decremento de 1, para que los desarrollos sean n = n-1 * n-2 * n-m....
     */
    for(int i=num ; i >= 1; i--){
        numFactorial = numFactorial * i;
    }
    // Mostramos el resultado del cálculo
    printf("\nEl resultado del número factorial es %.0lf ", numFactorial);

    system("pause");
    return 0;
}