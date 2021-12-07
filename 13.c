#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter the character");
scanf("\n %c",&ch);

if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
{
printf("\n the given character is alphabet");
if(ch>=65 && ch<=90)
{
 printf("\n character is uppercase");
}
else
{
   printf("\n character is lowercase");
 }
 }
 if(ch>=48 && ch<=57)
 {
printf(" the given character is digit");
}
if(ch>=58 && ch<=64 || ch>=91 && ch<=96)
{
printf("\n the given character is symbol");
 }
  getch();
  }