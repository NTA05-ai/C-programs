#include<stdio.h>
#include<string.h>
int main(){
    char correctpass[]="anika1945";
    char enterpass[20];
    do{
        printf("enter the password:");
        scanf("%s",&enterpass);
        if(strcmp(correctpass,enterpass)==0){
            printf("correctpassword!access granted");
        break;
        }
        else
        {
            printf("try again\n");
        }
    }while(1);
    return 0;
}
