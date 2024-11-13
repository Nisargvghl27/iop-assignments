//print sum of row in 3*3 matrix.
#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter element : \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        int rowsum=0;
        for(int j=0;j<3;j++){
            rowsum+=arr[i][j];
        }
        printf("Sum of row %d is %d.\n",i+1,rowsum);
    }
    return 0;
}