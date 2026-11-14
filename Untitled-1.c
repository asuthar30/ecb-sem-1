#include<stdio.h>
int main()
{
    int a,b, sume=0, sumo=0, counte=0, counto=0;

    for(a=1;a<=5;a++)
    {
        if (a%2==0)
       { sume=sume+a;
        counte=counte+1;}
        else
       { sumo=sumo+a;
        counto=counto+1;
        printf("%d", a);
    }

    }
    printf("\n%d", sume);
    printf("\n%d",sumo);
    printf("\neven digit %d", counte);
    printf("\nodd digit %d", counto);
    return 0;
}     


