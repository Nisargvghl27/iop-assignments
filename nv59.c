//read two arrays and swap values of these.
#include<stdio.h>
int main(){
    int a[10];
    printf("Enter 10 integers for array a: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    int b[10];
    printf("Enter 10 integers for array b: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&b[i]);
    }
    printf("\nBefore swapping:\n");
    for(int i=0;i<=9;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<=9;i++){
        printf("%d ",b[i]);
    }
    int c[10];
    for(int i=0;i<=9;i++){
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("\nAfter swapping\narray a: ");
    for(int i=0;i<=9;i++){
        printf("%d ",a[i]);
    }
    printf("\narray b: ");
    for(int i=0;i<=9;i++){
        printf("%d ",b[i]);
    }
    return 0;
}