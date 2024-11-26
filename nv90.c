//WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS.
#include <stdio.h>
int main() {
    char str[100];
    char *ptr = str;
    int length_including_spaces = 0;
    int length_excluding_spaces = 0;

    printf("Enter a string: \n");
    fgets(str,sizeof(str),stdin);

    while(*ptr!='\0'){
        length_including_spaces++;
        if(*ptr!=' '){
            length_excluding_spaces++;
        }
        ptr++;
    }

    printf("Length of the string (including spaces): %d\n", length_including_spaces);
    printf("Length of the string (excluding spaces): %d\n", length_excluding_spaces);

    return 0;
}