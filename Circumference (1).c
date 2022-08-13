#include<stdio.h>

int main()
{ 
// To calculate the circumference
  float r;
  float π;
  int x;
  float c;
  x = 2;
  π = 3.143;
printf("Circumference of the Circle");
printf("\nEnter the radius:");
scanf("%f",&r);

 c = r*x*π;
    printf("Circumference is %f",c);
    return 0;
}