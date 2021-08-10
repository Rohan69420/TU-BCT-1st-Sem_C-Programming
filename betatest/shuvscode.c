#include <stdio.h>
#include<string.h>

struct word_entry{

    char word[100];
    char meaning[300];
}w;

void add_word(struct word_entry );


int main(){
    printf("\n\t Word: ");
    fgets(w.word,100,stdin);

    printf("\n\t Meaning: ");
    fgets(w.meaning,100,stdin);

    add_word(w);

return 0;
}

void add_word(struct word_entry w){
    FILE *fp;
    fp= fopen("file.txt","a");

   fprintf(fp, "\nWord : %s", w.word);
   fprintf(fp, "\nMeaning : %s", w.meaning);
    
 fclose(fp);

}