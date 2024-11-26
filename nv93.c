//WRITE A C PROGRAM  USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    char *ptr;
    ptr=str;
    int word=0;
    for(int i=1;i<=sizeof(str);i++){
        if(*ptr==' '){
            word++;
        }
        ptr++;
    }
    printf("number of words is: %d",word+1);
    return 0;
}