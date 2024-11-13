//read an array and count total number of odd and even numbers.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers: \n");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<=9;i++){
        if(arr[i]%2==0){
            even++;
        }
        else if(arr[i]%2!=0){
            odd++;
        }
    }
    printf("even numbers is %d and odd numbers is %d.\n",even,odd);
    return 0;
}