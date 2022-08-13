#include<stdio.h>

int main()
{
   int x;
     printf("Enter any number:");
    scanf("%d",&x);
    
// (the program to check numbers if + or -)
    if(x < 0)
    {
    printf("%d is Negative",x);
    }
    
    if(x == 0)
    {
    printf("%d is Zero",x);
    }
    
    if(x > 0)
    {
    printf("%d is Positive",x);
    }
    return 0;
}