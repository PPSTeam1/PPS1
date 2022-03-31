/*Q.  Calculate Temperature in Fahrenheit scale by entering Temperature in Celcius scale .*/


#include <stdio.h>

int main() {
     float celsius;

     printf("Enter Temperature in Celsius Scale : ");
     scanf("%f",&celsius);

     printf("Temperature In celcius scale is : %f",(9*celsius)/5 + 32));

     return 0;
}
