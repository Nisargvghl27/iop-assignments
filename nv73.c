#include<stdio.h>
int main(){
    int i,n,ballot,c1,c2,c3,c4,c5,spoilt;
    i=n=ballot=c1=c2=c3=c4=c5=spoilt=0;
    printf("This is a type of an EVM with 5 sontestests...\nThis machine can take only 25 input\nThis voiting has a ballot system..\n");
    printf("The candidates are given numbers from 1 to 5..\nAny input other than these 5 digits will considered spoilt ballots\n");
    while(i<25){
        n=i+1;
        printf("Enter the vote number %d: \n",n);
        scanf("%d",&ballot);
        if(ballot==1){
            c1++;
        }
        else if (ballot==2){
            c2++;
        }
        else if (ballot==3){
            c3++;
        }
        else if (ballot==4){
            c4++;
        }
        else if (ballot==5){
            c5++;
        }
        else{
            spoilt++;
        }
        i++;
    }
    printf("candidate 1 got %d votes.\n",c1);
    printf("candidate 2 got %d votes.\n",c2);
    printf("candidate 3 got %d votes.\n",c3);
    printf("candidate 4 got %d votes.\n",c4);
    printf("candidate 5 got %d votes.\n",c5);
    printf("number of spoilt ballots is %d.\n",spoilt);
    return 0;
}