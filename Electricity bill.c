#include<stdio.h>

int main()
{
int id,unit,a,b,c,d;
char name[20];
a=120,b=150,c=180,d=200;

    printf("Enter your name:");
    scanf("%s",&name);
    
    printf("\nEnter your ID(xxx):");
    scanf("%d",&id);
    
    
    printf("\nEnter unit:");
    scanf("%d",&unit);
    
    if(unit<=199)
    {
    printf("Your bill is Tsh%d",unit*a);
    }
    
    if(unit>=200 && unit<400)
    {
    printf("Your bill is Tsh%d", unit*b);
    }
    
    if(unit>=400 && unit<600)
    {
    printf("Your bill is Tsh%d", unit*c);
    }
    
    if(unit>=600)
    {
    printf("Your bill is Tsh%d", unit*d);
    }
    return 0;
}