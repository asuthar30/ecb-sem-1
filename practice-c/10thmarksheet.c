#include<stdio.h>
#include<conio.h>
int main()
{
    float math, hindi, science,social_science,english,sanskrit, total;
    float percentage;

    printf("maths : ");
    scanf("%f", &math);
    printf("\nhindi : ");
    scanf("%f", &hindi);
    printf("\nscience : ");
    scanf("%f", &science);
    printf("\nsocial_science : ");   
    scanf("%f", &social_science);
    printf("\nenglish : ");
    scanf("%f", &english);
    printf("\nsanskrit : ");
    scanf("%f", &sanskrit);

    total=math+hindi+science+social_science+english+sanskrit;
    percentage= (total/600)*100;

    printf(" \npercentage= %f ", percentage);
    return 0;

 
}