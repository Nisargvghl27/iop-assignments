//subtract values of two matrix and store into third matrix
#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    printf("Enter matrix a: \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix b: \n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[3][3];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("Subtraction of matrix a and b is:\n");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}