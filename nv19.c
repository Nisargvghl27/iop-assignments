//read a character and check weather it is a small case letter or not using condational operator
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);
    ch>='a' && ch<='z' ? printf("Character is small case"):
    printf("Character is not small case");
    return 0;
}