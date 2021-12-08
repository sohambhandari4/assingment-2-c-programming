//1. Area of circle 
//2. Area of square 
//3. Area of sphere 

#include <stdio.h>
#include<stdlib.h>

int main(void) {
  int choice;
  float rc,ac,pi=3.14,rs,as,ls,asq;

  printf("What calculation you want to perform.\n");
  printf("For calculating area of Circle press 1\n");
  printf("For calculating area of Square press 2\n");
  printf("For calculating area of Sphere press 3\n");
  printf("For terminating the program press 0\n");
  input:
  printf("Your Choice : ");
  scanf("%d",&choice);

  switch(choice)
  {

    case 0:
      exit(0);

    case 1:
      printf("Enter the radius of Circle :");
      scanf("%f",&rc);
      ac=pi*rc*rc;
      printf("The area of circle of radius %.2f unit is %.2f sq. unit.",rc,ac);
      break;

    case 2:
      printf("Enter the Length of side of square :");
      scanf("%f",&ls);
      asq=ls*ls;
      printf("The area of square of length %.2f unit is %.2f sq. unit.",ls,asq);
      break;

    case 3:
      printf("Enter the radius of Sphere :");
      scanf("%f",&rs);
      as=4*pi*rs*rs;
      printf("The area of Sphere of radius %.2f unit is %.2f sq. unit.",rs,as);
      break;

    default :
      printf("Invalid Input.\n");
      goto input;
  }
  return 0;
