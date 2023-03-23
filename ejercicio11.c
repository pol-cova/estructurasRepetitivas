//
// Created by Paul Contreras on 23/03/23.
//
/*
 *  Leer n números enteros y despliegue cuál es el mayor y cuál es el menor de ellos, (donde n>=1).
 */

// Incluimos las librerías estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Configuramos el idioma
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos e iniciamos las variables
    int n, num, maxVal, minVal;

    // Solicitamos los elementos a comparar
    printf("Ingrese la cantidad de elementos a comparar: \n");
    scanf("%d", &n);
    // Iniciamos el array
    int elementos[n];

    // Solicitamos los elementos
    printf("Ingrese el elemento: \n");
    for (int i=0; i < n; ++i){
        scanf("%d", &num);

        elementos[i] = num;
    }


    // Iniciamos las variables para almacenar los valores máximos y mínimos
    minVal = maxVal = elementos[0];

    // Usamos un for para comparar todos los elementos
    for (int i=0; i < n; ++i){
        if(elementos[i] > maxVal){
            maxVal = elementos[i];
        }
        if(elementos[i] < minVal){
            minVal = elementos[i];
        }
    }

    printf("El número más pequeño de la lista es: %d\n", minVal);
    printf("El número más grande de la lista es: %d\n", maxVal);

    system("pause");
    return 0;
}