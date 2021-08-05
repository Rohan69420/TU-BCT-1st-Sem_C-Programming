    #include <stdio.h>

void main() {
   FILE *fp;

   fp = fopen("C:\\Users\\acer\\Desktop\\Dictionary project\\test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}
  