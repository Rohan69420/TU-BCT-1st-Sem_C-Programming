#include <stdio.h> /*This is where the printf function is defined. The printf 
and other functions like scanf cannot be used without including this file*/
 //Similar to previous header file; contains getch()
//#include <conio.h>
int main() { //You can understand void as empty, doesnt return any values
//it is just a place to execute the commands
printf("This is my first C program"); //this tells the computer what to print dont forget to end with ; 
//getch(); 
/*This key prevents the compiler from returning to home screen, which in this case is the editing 
screen. We want this command to make sure that the output remains on the screen until we want it to go away 
which is done by pressing any key which returns a character [i.e, the function of this line will be fulfilled]*/
return 0;
}