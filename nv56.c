//print positive, negative and zero elements.
#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 integers:\n");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    int pove=0;     //pove=positive value
    int neve=0;     //neve=negative value
    int zero=0;
    for(int i=0;i<=9;i++){
        if(arr[i]>0){
            pove++;
        }
        else if(arr[i]<0){
            neve++;
        }
        else{
            zero++;
        }
    }
    printf("number of positive elements is %d, negative is %d and zero is %d.\n",pove,neve,zero);
    return 0;
}