//secelection sort.
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int arr[10];
    int min;
    printf("Enter elements of an array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before sorting: \n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        min=INT_MAX;
        for(int j=9;j>i;j--){
            min=(min<arr[j] && min<arr[j-1]) ? min:((arr[j]<arr[j-1]) ? arr[j]:arr[j-1]);
        }
        for(int k=9;k>i;k--){
            if(min==arr[k]){
                min=arr[i];
                arr[i]=arr[k];
                arr[k]=min;
            }
        }
    }
    printf("The selection sorted array in accending order: \n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}