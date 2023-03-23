//
// Created by Paul Contreras on 23/03/23.
//
#include <stdio.h>

#include <stdlib.h>

int main()

{

    int n;

    printf("Conversion de numero arábigo a numero romano (1-3000)\n");

    printf("Introduzca número arábigo: ");

    scanf("%d",&n);

    while(n>=1000)

    {

        printf("M");      n=n-1000;

    }

    if(n>=900)

    {

        printf("CM");   n=n-900;

    }

    if(n>=500)

    {

        printf("D");      n=n-500;

    }

    while(n>=100)

    {

        printf("C");      n=n-100;

    }

    if(n>=90)

    {

        printf("XC");   n=n-90;

    }

    if(n>=50)

    {

        printf("L");      n=n-50;

    }

    while(n>=10)

    {

        printf("X");      n=n-10;

    }

    if(n>=9)

    {

        printf("IX");     n=n-9;

    }

    if(n>=5)

    {

        printf("V");     n=n-5;

    }

    while(n>=1)

    {

        printf("I");       n=n-1;

    }



    system("pause");

    return 1;

}