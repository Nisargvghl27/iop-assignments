//read two arrays and store addition of those into third array.
#include<stdio.h>
int main(){
    int a[10],b[10];
    printf("Enter array a: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array b: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&b[i]);
    }
    int c[10];
    for(int i=0;i<=9;i++){
        c[i]=a[i]+b[i];
    }
    printf("array c is: ");
    for(int i=0;i<=9;i++){
        printf("%d ",c[i]);
    }
    return 0;
}