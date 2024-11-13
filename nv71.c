//WAP a program in C to find the pivot element of a sorted and rotated array using binary search.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10];
    printf("Enter elements of an array : ");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array is : \n");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++){
        int min=INT_MAX;
        for(int j=9;j>i;j--){
            min=(min<arr[j] && min<arr[j-1]) ? min: ((arr[j]<arr[j-1]) ? arr[j]:arr[j-1]);
        }
        for(int k=9;k>i;k--){
            if(min==arr[k]){
                min=arr[i];
                arr[i]=arr[k];
                arr[k]=min;
            }
        }
    }
    printf("The pivot element will be the first element of the sorted array\n");
    printf("The selection sorted array in accending order: \n[\t");
    for(int i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("]");
    return 0;
}