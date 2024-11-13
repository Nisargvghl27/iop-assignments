#include<stdio.h>
#include<limits.h>

int main(){
    int arr1[10],arr2[10],sum[20];
    int min;
    printf("Getting array 1 from the user.\n");
    for(int i=0;i<10;i++) {
        scanf("%d",&arr1[i]);
    }
    printf("Getting array 2 from the user.\n");
    for(int i=0;i<10;i++) {
        scanf("%d",&arr2[i]);
    }
    printf("Array 1:\n");
    printf("[");
    for(int i=0;i<10;i++) {
        printf("%d  ",arr1[i]);
    }
    printf("]\n");

    printf("Array 2:\n");
    printf("[");
    for(int i=0;i<10;i++) {
        printf("%d  ",arr2[i]);
    }
    printf("]");
    for(int i=0;i<10;i++) {
        sum[i] = arr1[i];
    }
    for(int i=0;i<10;i++) {
        sum[i+10] = arr2[i];
    }
    printf("\nThe sum:\n");
    printf("[");
    for(int i=0;i<20;i++) {
        printf("%d  ",sum[i]);
    }
    printf("]\n");

    for(int i=0;i<20;i++) {
        min = INT_MAX;
        for(int j=19;j>i;j--) {
            min = (min<sum[j] && min<sum[j-1]) ? min : ((sum[j]<sum[j-1]) ? sum[j] : sum[j-1]);
        }
        for(int k=19;k>i;k--) {
            if(min==sum[k]) {
                min = sum[i];
                sum[i] = sum[k];
                sum[k] = min;
            }    
        }
    }
     printf("\nThe sorted sum:\n");
    printf("[");
    for(int i=0;i<20;i++) {
        printf("%d  ",sum[i]);
    }
    printf("]");
    return 0;
}