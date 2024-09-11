//find out max and min from n numbers
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if(n<=0){
        printf("The number of elements must be greater than zero.\n");
        return 1;
    }
    int num[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    int min=num[0];
    for(int i=1; i<n; i++) {
        if(num[i]>max) {
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }
    printf("Maximum value is %d\n",max);
    printf("Minimum value is %d\n",min);
    return 0;
}