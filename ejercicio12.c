//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Imprima la serie de Fibonacci.
 */

// Incluimos las librerías estándar
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    // Configuramos el lenguaje a trabajar
    setlocale(LC_CTYPE, "SPANISH");
    // Iniciamos las variables
    int i,lim, p1 = 0, p2 = 1, nextPos = 1;

    // Solicitamos el número máximo de la sucesión
    printf("Ingrese el límite de la sucesión: \n");
    scanf("%d", &lim);

    // Imprimimos los dos valores iniciales
    printf("La serie es: %d %d ", p1,p2);

    // Usamos un for imprimir la sucesión
    for (i = 0; i < lim - 2; ++i){
        printf("%d ", nextPos);
        p1 = p2;
        p2 = nextPos;
        nextPos = p1 + p2;
    }




    system("pause");
    return 0;
}