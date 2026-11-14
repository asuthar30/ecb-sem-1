#include<stdio.h>
#include<conio.h>
void main()
{
    float f;
    int i;
    float f_from_i;
    printf("give any number : ");
    scanf("%f", &f);
    
    i = f;
    f_from_i = i;

     printf("f: %f \n", f);
     printf("i: %d \n", i);
     printf("f_from_i: %f \n", f_from_i);
    
        if(f >= 0 && f == f_from_i)
            printf("%f is a whole number", f);
        else
            printf("%f is not a whole number", f);
    //  getch();
     return;
}