#include <stdio.h>

int main() {
     float celcius;

     printf("Enter Temperature in Celsius Scale : ");
     scanf("%f",&celcius);

     printf("Temperature In celcius scale is : %f",(9/5)*celcius + 32);

     return 0;
}