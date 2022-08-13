#include<stdio.h>

int main()
{
int i;
char n[10];
int x;
printf("TO DISPLAY THE WORD MANY TIMES");
printf("\nEnter any word:");
scanf("%s",&n);
printf("\nHow many times? ");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
printf("%s\n",n);
}
    return 0;
}