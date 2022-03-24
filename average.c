#include <stdio.h>

int avg(int a,int b, int c);

int main() {
    int a,b,c;

    printf("Enter a number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Enter third number : ");
    scanf("%d",&c);
    
    printf("Average is : %d",avg(a,b,c));

    return 0;
}
int avg(int a,int b,int c){
    return (a+b+c)/3;
}