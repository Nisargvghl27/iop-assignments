//read an array and print sum of numbers.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers: \n");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<=9;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}