#include<stdio.h>
#include<string.h>
int main(){
    char email[50];
    int flag = 0;
    int i,length;
    printf("Enter Your Email\n");
    scanf("%s",email);
    if((email[0]>='a'&&email[0]<='z')||(email[0]>='A'&&email[0]<='Z')){
        flag = 1;
    }
    length = strlen(email);
    int at = -1;
    int dot = -1;
    for( i=0;i<email[i]!='\0';i++){
        if(email[i]=='@'){
            at = i;
        }
        else if(email[i]=='.'){
            dot=i;
        }
    }
    if(at>dot){
         flag = 0;
    }
    if(at==-1||dot==-1){
         flag = 0;
    }
    if(dot>=(email[i]!='\0')-1){
        flag = 0;
    }
    if(flag ==1){
        printf("Email syntax is valid");
    }
    else{
        printf("Email syntax is invalid");
    }
    return 0;
}
