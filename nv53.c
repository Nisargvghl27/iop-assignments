//printf       *
//            ***
//           *****
//          *******
//           *****
//            ***
//             *
#include<stdio.h>
int main(){
    int n;
    printf("number of lines for petern: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--){
        for(int k=n;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}