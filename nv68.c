//multiplication of two matrix and stored into third matrix.
#include<stdio.h>
int main(){
    int a[3][3];
    printf("Enter matrix a: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    printf("Enter matrix a: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of matrix a and b: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}