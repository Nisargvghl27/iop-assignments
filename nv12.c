//Print ASCII code of any character
#include<stdio.h>
int main()
{
    char character;
    printf("Enter character: ");
    scanf("%c",&character);
    printf("The ASCII code for '%c' is %d\n", character,character);
    return 0;
}