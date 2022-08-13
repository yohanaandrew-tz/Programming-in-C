#include<stdio.h>

int main()
{
   char z = 'M';
   if(z == 'A'||z == 'E'||z == 'I'||z== 'O'||z== 'U'||z == 'a'||z== 'e'||z=='i'||z=='o'||z=='u')
    {
    printf("%c is a Vowel",z);
    }
    
    else
    {
    printf("%c is consonant",z);
    }
    return 0;
}