//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    int arr[n],brr[n];
    int* ptr1=arr;
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr1+i));
    }
    int* ptr2=brr;
    for(int i=0;i<n;i++){
        *(ptr2+i)=*(ptr1+i);
    }
    printf("Copied array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr2+i));
    }
    return 0;
}