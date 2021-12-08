// factorial, odd even, exit

#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0, num, res, n, flag=0, i;
    while(c!=4)
    {
        //display menu
        printf("\n1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n");

        //display choice option to the user
        printf("\nEnter your choice:");
        scanf("%d", &c);

        //write case statement for Four options

        switch(c)
        {
            //For factorial block
            case 1:

                //code for factorial functionality
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;
                res=num;
                while(num>1)
                {
                    res = res*(num-1);
                    num = num-1;
                }
                printf("\nFactorial of %d is %d. \n\n",n, res);
                break;

            //For Odd-even block
            case 3:

                //functionality for Odd-even
                printf("Enter an integer: ");
                scanf("%d", &num);
                n=num;

                if(num%2==0)
                    printf("\n%d is Even Number.\n\n",n);
                else
                    printf("\n%d is Odd Number.\n\n",n);
                break;

            //For Exit block
            case 4:
                printf("\nExit");
                break;
        }
    }
}
