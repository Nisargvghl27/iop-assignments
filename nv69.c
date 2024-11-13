// perform linear search on array.
#include<stdio.h>
int main(){
    int arr[10]={95,45,78,56,21,47,36,28,96,42};
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int k;
    k=n;
    for(int i=0;i<10;i++){
        if(n==arr[i]){
            printf("%d is present in array and its index is %d.\n",arr[i],i);
            k++;
        }
    }
    if(n==k){
        printf("%d is not present in array.\n",n);
    }
    return 0;
}