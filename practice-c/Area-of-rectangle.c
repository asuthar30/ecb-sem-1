#include<stdio.h>
#include<conio.h>
void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main()
{
    int a=10,b=20;

    printf("before swaping\n");
    printf("a= %d\n b= %d\n ", a,b);
    swap(&a,&b);

    printf("after swaping\n");
    printf("a= %d \n b= %d ",a,b);

    return 0;

}       +