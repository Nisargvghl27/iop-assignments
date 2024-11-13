//WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.
#include<stdio.h>
int main(){
    int a[10][1];
    printf("enter marks one by one: ");
    for(int i=0;i<9;i++){
        for(int j=0;j<1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<9;i++){
        for(int j=0;j<1;j++){
           if(a[i][j] >= 500){
                printf("%d",i);
           }  
        }
    }
    return 0;
}