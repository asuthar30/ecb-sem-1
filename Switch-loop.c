#include<stdio.h>
#include<math.h>

int main()
{
    int a=0,num, comp=0,  rev=0 , rem=0, power=0;
       
    printf(" enter any value : ");
    scanf("%d",&num);
    comp=num;
    a=num;

    while(1)
    {
        power=power+1;
        a=a/10;
        if (a==0)
        break ;

    }
    
      while (num>0)

        { rem=num%10;
         rev = rev + pow(rem, power)+ 0.5;
         num=num/10;
        }
            

         if (comp==rev)
         printf(" this number is a armstrong number ");

         else 
         printf(" this is not a armstrong number ");

        // if (comp==rev)
         //printf(" this is a palindrome number ");

        // else
         //printf(" this is not a palindrome number ");

    
 return 0;
}
