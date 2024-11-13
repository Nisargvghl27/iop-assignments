//Read a character and chack if it's a vowel.
#include<stdio.h>
int isVowel(char c){
    char vowels[]="ariouAEIOU";
    for(int i=0;vowels[i]!='\0';i++){
        if(c==vowels[i])
        return 1;
    }
    return 0;
}
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isVowel(ch)){
        printf("%c is a vowel.\n",ch);
    }
    else{
        printf("%c is not a vowel.\n",ch);
    }
    return 0;
}