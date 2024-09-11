//findout max and second max from n numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if(n<2){
        printf("At least two numbers are required.\n");
        return 1;
    }
    int num[n];
    printf("Enter %d numbers: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max=num[0];
    int smax=-2147483648;
    for(int i=1;i<n;i++){
        if(num[i]>max){
            smax=max;
            max=num[i];
        }
        else if(num[i]>smax && num[i]<max){
                smax=num[i];
            }
        }
        if(smax==-2147483648){
            printf("There is no second maximum value.\n");
        }
        else{
            printf("Maximum value is %d\n",max);
            printf("Second maximum value is %d\n",smax);
        }
        return 0;
    }