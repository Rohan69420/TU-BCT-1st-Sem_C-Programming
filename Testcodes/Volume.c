#include <stdio.h> //including the header files that helps to perform the input and output functions
int V,l,b,h; //predefining the value types of volume length,breadth and height
int main(){ //defining a function to find the volume
printf("Enter the length, breadth and height of the cube\n"); //telling user what to do
scanf("\n %d%d%d",&l,&b,&h);
V=l*b*h;
printf("The volume of the cube is: %d ",V); //outputting answer
return 0; //a value needs to be returned if we use int function, because the compiler expects a numeric value to be returned upon the execution of the function
}