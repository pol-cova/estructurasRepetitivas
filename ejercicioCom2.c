//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Realice un programa que permita adivinar si el número entero que contiene la memoria de la computadora
 * es igual al que introduce el usuario. Si al usar todas las oportunidades el usuario adivinó,
 * imprimir el mensaje correspondiente. El número que almacena la computadora está entre 0 y 100.
 */

// Incluimos las librerías estándar
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Definimos el numero de oportunidades
const int oportunidades = 3;

int main(){

    // Definimos el idioma a usar
    setlocale(LC_CTYPE,"SPANISH");
    // Declaramos e iniciamos las variables
    int userNumber, machineNumber;

    machineNumber = rand() % 100 + 1;


    for (int i=0; i < oportunidades; i++){
        printf("Ingrese un número: ");
        scanf("%d", &userNumber);

        if(userNumber == machineNumber){
            printf("Has ganado! :3 \n");
        } else{
            printf("Has perdido :) \n");
        }
    }
    printf("___________________________________________________________\n");
    printf("Has perdido todas tus oportunidades intenta luego jajaja...\n");
    printf("___________________________________________________________\n");

    system("pause");
    return 0;
}