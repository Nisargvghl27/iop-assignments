//WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n],brr[n];
    int *ptr1=arr;
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",(ptr1+i));
    }
    int *ptr2=brr;
    for(int i=0;i<n;i++){
        *(ptr2+i)=*(ptr1+n-i-1);
    }
    printf("Second array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr2+i));
    }
    return 0;
}