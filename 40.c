// C program to find LCM of two numbers 
#include <stdio.h> 
 
// Recursive function to return gcd of a and b 

int gcd(int a, int b) 
{ 

    if (a == 0)

        return b; 

    return gcd(b % a, a); 
} 
 
// Function to return LCM of two numbers 

int lcm(int a, int b) 
{ 

    return (a / gcd(a, b)) * b;
} 
 
// Driver program to test above function 

int main() 
{ 

    int a = 15, b = 20; 

    printf("LCM of %d and %d is %d ", a, b, lcm(a, b)); 

    return 0; 
} 

// GDC of two numbers 

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
