//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Escribe un programa que pida desde el teclado 4 números enteros y por cada número ingresado si este es par desplegar
 * el símbolo “*” las veces que represente ese número y por cada número impar desplegar el símbolo “!”
 * las veces que represente ese número.
 */

// Incluimos las librerías estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Configuramos el idioma
    setlocale(LC_CTYPE, "SPANISH");
    // Definimos e iniciamos las variables
    int numeros[4], num;

    printf("Ingrese un número: \n");
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &num);
        numeros[i] = num;
    }

    for (int i = 0; i < 4; ++i) {
        if (numeros[i] % 2 == 0){
            for (int j = 0; j <= i; ++j) {
                printf("*");
            }
            printf("\n");
        } else {
            for (int j = 0; j <= i; ++j) {
                printf("!");
            }
            printf("\n");
        }
    }

    system("pause");
    return 0;
}