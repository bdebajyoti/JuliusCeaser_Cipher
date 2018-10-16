#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int i,l,j;
clrscr();
cout<<"\nEnter Sentence:";
cin.getline(str1,100);
l=strlen(str1);
j=0;
for(i=0;i<l;i++)
{
if(str1[i]!=' ')
{
str2[j]=str1[i]+1;
}
if(str1[i]==' ')
{
str2[j]=' ';
}
j++;
}
str2[j]='\0';
cout<<"\nJulius Ceasar Cipher Is:"<<str2;
getch();
}