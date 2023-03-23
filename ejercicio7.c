//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Diseña el diagrama de flujo que calcule el producto (multiplicación) de los múltiplos de 5, entre 0 y 100.
 * En pantalla se imprimen los múltiplos de 5 y el resultado del producto.
 */

// Incluimos las librerías estandars
#include <stdio.h>
#include <stdlib.h>

int main(){

    // Definimos e iniciamos las variables
    int i=5, prod=1;

    while(i <= 100){
        prod = prod * i;
        i = i + 5;
        printf("%d\n", i);
    }

    // Imprimimos el valor de los productos ¡
    printf("El producto de los primeros multiplos es: %d\n",prod);


    system("pause");
    return 0;
}