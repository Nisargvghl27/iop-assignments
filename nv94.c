//WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS.FOR EXAMPLE, 
//ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”
#include <stdio.h>

int main() {
    char str[100], reversed[100];
    char *ptr1, *ptr2;
    
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    
    for (int i=0;str[i]!='\0';i++) {
        if (str[i]=='\n') {
            str[i]='\0';
            break;
        }
    }

    ptr1 = str;
    ptr2 = reversed;

    while(*ptr1!='\0') {
        ptr1++;
    }
    ptr1--;

    while(ptr1>=str) {
        *ptr2=*ptr1;
        ptr1--;
        ptr2++;
    }
    *ptr2 ='\0';
    printf("Reversed string: %s\n",reversed);
    return 0;
}