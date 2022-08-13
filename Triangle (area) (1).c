#include<stdio.h>

int main()
{
 float b;
 float h;
 float z;
 int x;
 x = 2;
      printf("AREA OF THE TRIANGLE");
      printf("\nEnter base & height (a,b):");
      scanf("%f , %f",&h,&b);
    
// Program to calculate the area of triangle
    z = (h*b)/x;
    printf("The area is %f",z);
    return 0;
}