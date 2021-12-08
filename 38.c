//C program to check divisibility of 5 and 7


#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);


    /*
     * If  num modulo division 5 is 0 
     * and num modulo division 7 is 0 then
     * the number is divisible by 5 and 7 both
     */
    if((num % 5 == 0) && (num % 7 == 0))
    {
        printf("Number is divisible by 5 and 7");
    }
    else
    {
        printf("Number is not divisible by 5 and 7");
    }

    return 0;
}
