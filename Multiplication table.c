#include<stdio.h>

int main()
{
int n,i;
printf("Enter the Value:");
scanf("%d", &n);

 for (i=1; i<=12; ++i)
   {
    printf("\n%d × %d = %d", n , i , n*i);
    }
    return 0;
}