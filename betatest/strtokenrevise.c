#include <stdio.h>
 #include <string.h>
 int main(){
    char *token,*temp,s[2]= " ";
    char str[200] = "Hello we are going to try and seperate this sentence into individual words and find longest word.";
    temp=strtok(str,s);
    token=strtok(NULL,s);
    while(token!=NULL){
        if (strlen(token)>strlen(temp)){
        temp=token;
        }
        token=strtok(NULL,s);
        
    }
    printf("\nThe longest word is: %s",temp);
 }