#include<stdio.h>
#include<conio.h>
int main(){
    int choice;
    printf("enter your birthday month=");
    scanf("%d", &choice);

    switch(choice)
    { 
        case 8:
        printf(" august born people are so smart");
        break;

        default:
        printf("you are not born in august, you are useless");
    }

}