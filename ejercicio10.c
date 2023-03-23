//
// Created by Paul Contreras on 23/03/23.
//
/*
 * 1)Leer una lista de números y al final mostrar el producto acumulado de los primeros 5 múltiplos de 5
 * (similar al Ejercicio I).
 */

// Incluimos las librerías estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Configuramos el idioma
    setlocale(LC_CTYPE, "SPANISH");
    // Definimos e iniciamos las variables
    int cont = 1, num;
    double prod = 1;


    while(cont <= 5){
        printf("Ingrese un número: \n");
        scanf("%d", &num);

        if (num % 5 == 0){
            prod = prod * num;
            cont++;
        }
    }

    printf("El producto total es: %.0lf \n", prod);

    system("pause");
    return 0;
}