//Read 3*3 matrix and print max and min element.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3];
    printf("Enter element: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("Maximum value : %d \n",max);
    printf("Minimum value : %d \n",min);
    return 0;
}