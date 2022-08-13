#include<stdio.h>

int main()
{
 int min,hrs;
printf("Enter minutes-");
scanf("%d",&min);
hrs=min/60;
    printf("\nHours-%d",hrs);
min=min%60;
    printf("\nMinutes-%d",min);
    return 0;
}