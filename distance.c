#include <stdio.h>

int main()
{
    int dist;
    printf("Enter the Distance in Km : ");
    scanf("%d \n",&dist);
    
    int m = dist*1000;
    int cm = dist*100000;
    int inch = dist*39370;
    
    printf("Distance in Meter = %d meter \n",m);
    printf("Distance in Centimeter = %d cm \n",cm);
    printf("Distance in inches = %d inches",inch);

    return 0;
}