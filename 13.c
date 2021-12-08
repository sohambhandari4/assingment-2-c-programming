#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("\n %c",&ch);
    if((ch>=65 && ch<=90 )|| (ch>=97 && ch<=122))
    {
        printf("\nIt is an Alphabet.:");
   if(isupper(ch))
   {
    ch=tolower(ch);
    printf("%c",ch);
   }
   else
   {
    ch=toupper(ch);
    printf("%c",ch); 
   }
    }
    if(ch>=48 && ch<=57)
    {
        printf("\n'%c' is Digit.",ch);
    }
    if((ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=33 && ch<=47) || (ch>=123 && ch<=126))
    {
        printf("\n'%c' is Punctuation Symbol.",ch);
    }
    return 0;
}
