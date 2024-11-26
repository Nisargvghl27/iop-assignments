//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include <stdio.h>

int main() {
    int n;
    int *ptr;
    printf("Enter the number of integers: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter an integers: \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    ptr=arr;
    int max=*ptr;
    for(int i=1;i<n;i++){
        ptr++;
        if(*ptr>max){
            max=*ptr;
        }
    }

    printf("The largest number is: %d\n", max);
    return 0;
}