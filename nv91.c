//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER. 
#include <stdio.h>
int main() {
    int n;
    int *ptr = &n;
    int square,cube;

    printf("Enter a number: ");
    scanf("%d",&n);

    square=(*ptr)*(*ptr);           // Square = num * num
    cube  =(*ptr)*(*ptr)*(*ptr);    // Cube = num * num * num

    printf("Square of %d is: %d\n", n,square);
    printf("Cube of %d is: %d\n", n,cube);

    return 0;
}