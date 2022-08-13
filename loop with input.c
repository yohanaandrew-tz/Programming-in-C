#include<stdio.h>

int main()
{
int i;
int a;
int b;
printf("Enter lower & upper limit as(a,b)");
scanf("%d,%d",&a,&b);
for(i=a;i<=b;i++)
{
printf(" %d",i);
}
    return 0;
}