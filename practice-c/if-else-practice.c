#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

void main()

{

     system("cls"); 

    int a, b;

        printf("a= ");

    scanf("%d", &a);

    printf("b= ");

    scanf("%d", &b);

    if (a > b)

        printf("a is max");

    else

        printf("b is max");

    getch();
}