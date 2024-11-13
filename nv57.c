//print max and second max.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers: \n");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN;
    int secmax=INT_MIN;
    for(int i=0;i<=9;i++){
        if(max<arr[i]){
            secmax=max;
            max=arr[i];
        }
        else if(max!=arr[i] && secmax<arr[i]){
            secmax=arr[i];
        }
    }
    printf("max is %d.\n",max);
    printf("second max is %d.\n",secmax);
    return 0; 
}