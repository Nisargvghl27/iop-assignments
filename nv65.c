//print transpose of a matrix.
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter element : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Transpose of matrix : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}