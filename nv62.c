//print reverse of an array.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 integers for array a: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=9;
    while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
    }
    printf("Reverse of array is: ");
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}