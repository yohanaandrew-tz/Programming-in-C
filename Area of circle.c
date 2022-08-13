#include<stdio.h>

int main()
{
//To calculate the area of circle
  float r;
  float π;
  float a;
  π = 3.143;
    printf("AREA OF THE CIRCLE");
    printf("\nEnter radius:");
    scanf("%f",&r);
    
    a = π*r*r;
    printf("The area is %f",a);
    return 0;
}