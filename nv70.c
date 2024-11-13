//program to print occurance of any element.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter number which you want to count: ");
    scanf("%d",&x);
    int count=0;;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            count++;
        }
    }
    printf("elements %d is %d times present in array.\n",x,count);
    return 0;
}