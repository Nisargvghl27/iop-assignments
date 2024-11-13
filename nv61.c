//Bubble sort an array.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter elements of an array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before bubble sorting: \n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The bubble sorted array in assending order: \n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}