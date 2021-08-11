#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
//code need fix
void l_word(char str[],char str1[],int *v,int *c){
    int diff,cmax=0,occ;
    for (int i=0;i<strlen(str);i++){
        for (int j=i+1;j<strlen(str);j++){
        if (str[i]==' ' && str[j]==' '){
            diff=j-i;
            break; //breaking the inner loop upon first encounter
        }

        }
        if (diff>cmax){
            occ=i;
        cmax=diff;
        }   
    }
 for (int i=0;i<cmax;i++){
     if(str[occ+i]=='a' || str[occ+i]=='e' || str[occ+i]=='o' || str[occ+i]=='u')
     *v++;
     else{
         if(isalpha(str[occ+i]))
         *c++;
     }
 }
 //str1=sent[occ:(occ+cmax)];
}
int main()
{
    int v,c;
    char sent[200],str1[50];
    printf("\nEnter a sentence to find the longest word ");
    gets(sent);
    l_word(sent,str1,&v,&c);
    printf("\nThe number of vowels is: %d\nThe number of consonants is: %d",v,c);
    getch();
    return 0;
}