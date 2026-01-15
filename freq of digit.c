#include<stdio.h>
int main(){
    int n,digit;
    int freq[10]={0};
    printf("enter a number:");
    scanf("%d",&n);
    if(n==0){
            freq[0]=1;
    }
    for(;n!=0;n=n/10){
            digit=n%10;
    freq[digit]++;
    }
    printf("digit freq\n");
    for(digit=0;digit<10;digit++){
            printf("%d->%d\n",digit,freq[digit]);
    }
    return 0;
}

