#include<stdio.h>
int main(){
    int n,j,a,fact,sum,digit,i;
    printf("enter a number:");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        sum=0;
        a=j;
        while(a>0){
        digit=a%10;
        fact=1;
            for(i=1;i<=digit;i++){
                fact=fact*i;
            }
        sum=sum+fact;
        a=a/10;
        }
    if(sum==j){
        printf("%d\n",j);
    }
    }
    return 0;
}




