#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("enter any number:");
    scanf("%d",&n);
    for(;n!=0;n=n/10){
            a++;
    }
    printf("number of digit is %d",a);
    return 0;
}
