//
// Created by Paul Contreras on 23/03/23.
//
/*
 *  el cual lee una lista de números,  y realiza la suma de aquellos números de la lista que sean pares.
 *  En la suma se consideran sólo 10  números pares.
 */

//  Incluimos las librerías principales
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    // Configuramos el idioma a trabajar
    setlocale(LC_CTYPE, "SPANISH");
    // Definimos e iniciamos las variables
    int cont = 1,num,sum = 0;

    while (cont <= 10){
        printf("Ingrese un número: \n");
        scanf("%d", &num);

        if (num % 2 == 0){
            sum = sum + num;
            cont = cont + 1;
        }
    }

    printf("La suma de los números pares es: %d \n", sum);

    system("pause");
    return 0;
}