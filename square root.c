#include<stdio.h>
#include<math.h>

int main()
{
double num,root;
    printf("Enter a number:");
    scanf("%lf",&num);
    root = sqrt(num);
    printf("\nThe square root of %.2lf is %.2lf",num,root);
    return 0;
}