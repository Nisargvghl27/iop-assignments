//read an array and find max.
#include<stdio.h>
int findmax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main(){
    int arr[]={10,25,45,85,96};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Maximum value: %d\n",findmax(arr,size));
    return 0;
}