/*  Q.Find the Average of three numbers?  */


#include <stdio.h>
 int main() {
     float a,b,c;

     printf("Enter a number : ");
     scanf("%f",&a);

     printf("Enter second number : ");
     scanf("%f",&b);

     printf("Enter Third number : ");
     scanf("%f",&c);

     float avg = (a+b+c)/3 ;
     printf("The Average of %f , %f , %f is: %f",a,b,c,avg);

     return 0;
 }
