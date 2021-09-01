#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void add_contact();
void search_contact();
void delete_contact();
void view_contact();
void modify_contact();
void menu();
int main()
{
 printf("\t\t*****WELCOME TO MONK'S PHONEBOOK*****\n\n");
 menu();
 return 0;
}
void menu()
{
 int choice;
 printf("\t\t\t\tMENU\t\t\t\n");
 printf("\n\t 1. View All Contacts\t");
 printf("\t 2. Search Contact\n");
 printf("\t 3. Add Contact\t");
 printf("\t\t 4. Modify Contact\n");
 printf("\t 5. Delete Contact\t");
 printf("\t 6. Exit\n");
 printf("\n\tEnter Your Choice: ");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
   view_contact();
   break;
  case 2:
   search_contact();
   break;
  case 3:
   add_contact();
   break;
  case 4:
   modify_contact();
   break;
  case 5:
   delete_contact();
   break;
  case 6:
   printf("\n\tTHANK YOU FOR VISITING!");
   exit(0);
  default:
   printf("\n\tENTER FROM 1 TO 6 ONLY!\n\n");
   menu();
 }
}
void view_contact()
{
 char name[20],address[50],mob[20],mail[50];
 FILE *fp;
 fp=fopen("phonebook.txt","r");
 printf("\n\t*****ALL CONTACTS*****\n\n");
 while(fscanf(fp," %s\n ",name,address,mob,mail)!=EOF && fscanf(fp,"%s %s %s",address,mob,mail)!=EOF)
 {
   printf("\tName    : %s\n",name);
   printf("\tAddress : %s\n",address);
   printf("\tMob No. : %s\n",mob);
   printf("\tMail id : %s\n\n",mail);
 }
 fclose(fp);
 printf("\n\tPRESS ANY KEY TO CONTINUE\n");
 getch();
 menu();
}
void search_contact()
{
 char name[20],name1[20],address[50],mob[20],mail[50];
 FILE *fp;
 fp=fopen("phonebook.txt","r");
 printf("\n\t*****SEARCH CONTACT*****\n\n");
 printf("\t Enter name to be searched: ");
 scanf("%s",name1);
 if(fp==NULL)
 {
   printf("\n\tERROR OPENING FILE!");
   exit(1);
 }
 while(fscanf(fp," %s\n %s %s %s ",name,address,mob,mail)!=EOF)
 {
  if(stricmp(name,name1)==0)
  {
    printf("\n\tDetails of the contact:\n\n");
    printf("\tName    : %s\n",name);
    printf("\tAddress : %s\n",address);
    printf("\tMob No. : %s\n",mob);
    printf("\tMail id : %s\n\n",mail);
    break;
  }
  else
  {
    if(fscanf(fp,"%s%s%s%s",name,address,mob,mail)==EOF)
    {
        printf("\n\tCONTACT NOT FOUND!\n");
    }
  }
 }
 fclose(fp);
 printf("\n\tPRESS ANY KEY TO CONTINUE\n");
 getch();
 menu();
}
void add_contact()
{
 char name[20],address[50],mob[20],mail[50];
 FILE *fp;
 fp=fopen("phonebook.txt","a");
 printf("\n\t*****ADD CONTACT*****\n\n");
 printf("\tName :");
 fflush(stdin); //clearing buffer to prevent issues
 gets(name); //full name taking solved
 printf("\tAddress :");
 fflush(stdin); //clearing buffer to prevent issues
 scanf("%s",address);
 printf("\tMob No. :" );
 fflush(stdin); //clearing buffer to prevent issues
 scanf("%s",mob);
 printf("\tMail id :");
 fflush(stdin); //clearing buffer to prevent issues
 scanf("%s",mail);
 fprintf(fp," %s\n %s %s %s\n ",name,address,mob,mail);
 fclose(fp);
 printf("\n\tCONTACT SAVED!");
 printf("\n\tPRESS ANY KEY TO CONTINUE\n");
 getch();
 menu();
}
void modify_contact()
{
 char name[20],name1[20],address[50],mob[20],mail[50];
 FILE *fp,*tfp;
 fp=fopen("phonebook.txt","r");
 tfp=fopen("temp.txt","w");
 printf("\n\t*****MODIFY CONTACT*****\n\n");
 printf("\t Enter name to be modified: ");
 scanf("%s",name1);
 if(fp==NULL)
 {
   printf("\n\tERROR OPENING FILE!");
   exit(1);
 }
 while(fscanf(fp," %s %s %s %s ",name,address,mob,mail)!=EOF)
 {
  if(stricmp(name,name1)==0)
  {
    printf("\n\tEnter new details of the contact:\n\n");
    printf("\tName :");
    scanf("%s",name);
    printf("\tAddress :");
    scanf("%s",address);
    printf("\tMob No. :" );
    scanf("%s",mob);
    printf("\tMail id :");
    scanf("%s",mail);
    fprintf(tfp,"%s %s %s %s\n",name,address,mob,mail);
  }
  else
   {
    fprintf(tfp,"%s %s %s %s\n",name,address,mob,mail);
   }
 }
 fclose(fp);
 fclose(tfp);
 remove("phonebook.txt");
 rename("temp.txt","phonebook.txt");
 printf("\n\tCONTACT MODIFIED!");
 printf("\n\tPRESS ANY KEY TO CONTINUE");
 getch();
 menu();
}
void delete_contact()
{
 char name[20],name1[20],address[50],mob[20],mail[50];
 FILE *fp,*tfp;
 fp=fopen("phonebook.txt","r+");
 tfp=fopen("temp.txt","w");
 printf("\t*****DELETE CONTACT*****\n");
 printf("\n\t Enter name of contact to be deleted : ");
 scanf("%s",name1);
 while(fscanf(fp,"%s %s %s %s",name,address,mob,mail)!=EOF)
 {
  if(stricmp(name,name1)==0)
   {
    continue;
   }
  else
   {
    fprintf(tfp,"%s %s %s %s\n",name,address,mob,mail);
   }
 }
 fclose(fp);
 fclose(tfp);
 remove("phonebook.txt");
 rename("temp.txt","phonebook.txt");
 printf("\n\tCONTACT DELETED!");
 printf("\n\tPRESS ANY KEY TO CONTINUE");
 getch();
 menu();
}