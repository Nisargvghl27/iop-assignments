//print A
//      BB
//      CCC
//      DDDD
#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char a='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("%c",a);
        }
    a++;
    printf("\n");
    }
    return 0;
}