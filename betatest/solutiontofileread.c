#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h> //library file for file handling
int main()
{
    char word[256],buffer[256];
    int found=0,i=0,x=0; //loop condition
    FILE *fp; //intializing a file pointer
    fp=fopen("file.txt","r"); //opening the file in read mode
    if (fp==NULL){
        printf("\nCouldn't open the file ");
        exit(1);
    }
    printf("\nEnter the word you want to search for: "); 
    gets(word);
    while(fgets(buffer,256,fp)!=NULL){
        printf("%s",buffer);
        //fgets(buffer,256,fp);
        if(word[0]==buffer[i]){ //first encounter
            for (int j=0;j<strlen(word);j++){
                if (word[j]!=buffer[i+j]){ 
                    break;  //it will exit the loop with first mismatch.
                }
                if (word[j]==buffer[i+j]){
                    if (j==(strlen(word)-1)){ //if it makes it till the end without being kicked out of loop
                        //we have found a match, now to find its meaning
                        //was going to predict a new line but it is risky so going to find ':' and ' '
                    while(1){
                        x++; // ':' wont come sooner so added increment ahead.
                        if (buffer[i+j+x]==':'){ // encountering ':' after "Meaning"
                            x++;
                           // if (buffer[i+j+x]==' '){ //encountering ' ' after meaning [could have skipped this step]
                                   while(buffer[i+j+x]!='\n'){//keep printing character until encountering new line
                                       x++;
                                    printf("%c",buffer[i+j+x]); 
                                    }
                                    exit(0); //terminating program to prevent unwanted behaviours
                           // }
                        }
                    }
                    }
                }
            }
        }
        i++;
    }
    getch();
    return 0;
}