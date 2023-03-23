//
// Created by Paul Contreras on 23/03/23.
//
/*
 * Realice la prueba de escritorio o corrida a mano del siguiente programa
 */

#include <stdlib.h>

#include <stdio.h>

int main()

{



    float y=2, x=2,z=3;



    system("clear");



    while (z<25 || x<10)

    {

        if (z<7) z=z+y;

        else  {

            y=2*y-2;

            z=z+y;

            x=y+z;

        }

        y=z/2;

        printf("%f %f %f\n",x,y,z);

    }

    system("pause");

    return 1;

}