#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0;

    printf(" enter any value : ");
    scanf("%d", &a);

    for (b=1;b<a;b++)
    {
       if (b!=1)
       { 
         if (a%b==0)
         { printf(" given number is not a prime number");
            c=1;
          break;
        }

       }
    }
    if(c==0)
    printf("given number is a prime number ");
}