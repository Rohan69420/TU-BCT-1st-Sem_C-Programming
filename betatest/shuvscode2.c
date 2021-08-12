#include <stdio.h>
#include<string.h>
#include<stdlib.h>


struct word_entry{

    char word[100];
    char meaning[300];
}w;


void add_word();
void search_word();


int main(){
    int choice;
    int loop=1;

    while(loop==1)
    {
        printf("\n\t\t CUSTOM WORD ADDER");
        printf("\n\n\t\t 1.Add a Word");
        printf("\n\n\t\t 2.Search for a Word");
        printf("\n\n\t\t 3.Exit");
        printf("\n\n\t\t Your choice:");
        scanf("%d", &choice);
        getchar();
        

        switch(choice)

        {
            case 1:
            add_word();
            loop=0;
            break;

            case 2:
            search_word();
             loop=0;
            break;

            case 3:
            exit(0);

            default:
            printf("Enter 1, 2 or 3");
        }
    }
   

return 0;
}

void add_word(){

    FILE *fp;

    fp= fopen("file.txt","a");

    printf("\n\t Word: ");
    fgets(w.word,100,stdin);
    

    printf("\n\t Meaning: ");
    fgets(w.meaning,100,stdin);

  
   fprintf(fp, "\n\nWord : %s", w.word);
   fprintf(fp, "\nMeaning : %s", w.meaning);
    
 fclose(fp);

}

void search_word(){

    	char wrd[256], buffer[256],mean[256];
	int n, m, i, j, line;
	
	FILE* fp;
	fp = fopen("file.txt", "r");	// open file

	printf("Enter the word you want to search in the file: ");
	gets(wrd);

	m = strlen(wrd); // length of input word

	//printf("All positions of word \"%s\" in the file\n", wrd);

	line = 0;
	// the following loop the file fp line by line
	// each line is stored in buffer
	while (fgets(buffer, 256, fp) != NULL) {

		i = 0;
		n = strlen(buffer);
		// the followinf loop find position of the input word in the current line and
		// print the position of the word on the screen
		// the loop basically reads each word of the file and compare it with the input word
		while (i < n) {

			// comparing current word with input word
			j = 0;
			while (i < n && j < m && buffer[i] == wrd[j]) {
				++i, ++j;
			}

			// the following condition implies that the current word of buffer
			// is equal to input word
			if ((i == n || buffer[i] == ' ' || buffer[i] == '\n') && j == m) {
                //fgets(mean,256,fp);
                //printf("\nMeaning: %s",mean);
                //inserting the same code;
                m = strlen("meaning"); // length of input word

	//printf("All positions of word \"%s\" in the file\n", wrd);

	line = 0;
	// the following loop the file fp line by line
	// each line is stored in buffer
	while (fgets(buffer, 256, fp) != NULL) {

		i = 0;
		n = strlen(buffer);
		// the followinf loop find position of the input word in the current line and
		// print the position of the word on the screen
		// the loop basically reads each word of the file and compare it with the input word
		while (i < n) {

			// comparing current word with input word
			j = 0;
			while (i < n && j < m && buffer[i] == wrd[j]) {
				++i, ++j;
			}

			// the following condition implies that the current word of buffer
			// is equal to input word
			if ((i == n || buffer[i] == ' ' || buffer[i] == '\n') && j == m) {
                fgets(mean,256,fp);
                printf("\nMeaning: %s",mean);
                //inserting the same code;
				//printf("Line: %d ", line);
				//printf("Column: %d\n", i - m);
			}

			// moving to next word
			while (i < n && buffer[i] != ' ') {
				++i;
			}
			++i;

		}

				printf("Line: %d ", line);
				printf("Column: %d\n", i - m);
			}

			// moving to next word
			while (i < n && buffer[i] != ' ') {
				++i;
			}
			++i;

		}

		++line;

	}

	fclose(fp);

    }
}