//program to rotate an array by N positions.
#include<stdio.h>
void rotate(int arr[],int a,int b){
    int i=a;
    int j=b;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    printf("Enter number of element: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);
    printf("rotated array :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}