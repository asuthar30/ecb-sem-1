#include<stdio.h>
int main()
{
    int a,b,c=1,d, num;

    printf(" enter any value : ");
    scanf("%d",&num);

    for (a=1;c<=num;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf(" %d ",c);
            c++;
            if (c==num+1)
            break ;
        }
        printf("\n");
      
    }
    return 0;

}