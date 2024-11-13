//print A
//      AB
//      ABC
//      ABCD
#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char a='A';
        for(int j=1;j<=i;j++){
        printf("%c",a);
        a++;
        }
        printf("\n");
    }
    return 0;
}