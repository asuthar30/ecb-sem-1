#include<stdio.h>
#include<conio.h>
int main()
{
    int length, width, area;
    printf("enter the lenght of triangle: ");
    scanf("%d", &length);
    printf("enter the width of traingle: ");
    scanf("%d",&width);
    area=length*width;
    printf("area of triangle is : %d", area);
    getch();
}