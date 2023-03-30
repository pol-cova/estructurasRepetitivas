//
// Created by Paul Contreras on 30/03/23.
//
/*
 * Realizar un menu
 */

// Include the necessary libraries
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

// Create the menu function
void menu(){
    printf("\n------------------------");
    printf("\n|           MENU       |");
    printf("\n------------------------");
    printf("\n|  a) Samsung          |");
    printf("\n|  b) Hyundai          |");
    printf("\n|  c) Lc               |");
    printf("\n|  d) JVC              |");
    printf("\n|  e) Hisense          |");
    printf("\n|  q) Exit             |");
    printf("\n------------------------");
}



// Define the prices of the tv's

const int Samsung = 7000;
const int Hyundai = 3725;
const int  LG = 4999;
const int  JVC = 3499;
const int  Hisense = 3999;

int main(){

    /*
     * Set the language to work
     */
    setlocale(LC_CTYPE,"SPANISH");

    /* Define and start the variable app, this variable at the start app == TRUE
     * if the user press exit app == False
     */
    int app = 1;
    char myOption;

    printf("-------------------------------------------\n");
    printf("               SUPER MARKET                \n");
    printf("-------------------------------------------\n");
    do {
        menu();
        printf("\n Seleccione un opción: ");
        myOption = getchar();

        switch (myOption) {
            case 'a':
                printf("La tv seleccionada es: Samsung -> Su precio es: %d ", Samsung);
                break;
            case 'b':
                printf("La tv seleccionada es: Hyundai -> Su precio es: %d ", Hyundai);
                break;
            case 'c':
                printf("La tv seleccionada es: LG -> Su precio es: %d ", LG);
                break;
            case 'd':
                printf("La tv seleccionada es: JVC -> Su precio es: %d ", JVC);
                break;
            case 'e':
                printf("La tv seleccionada es: Hisense -> Su precio es: %d ", Hisense);
                break;
            case 'q':
                app = 0;
                printf("Gracias por usar el programa!");
                break;
        }
    } while (app == 1 );
    printf("_________________________________________");

    system("pause");
    return 0;

}
