#include <stdio.h>


int main() {
    int a,b,c;

    printf("Enter a number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    printf("Enter third number : ");
    scanf("%d",&c);

    if (a > b && a > c){
        printf("%d is greatest of all three number",a);
    }
    else if (b>a && b>c){
        printf("%d is greatest of all three number",b);
    }
    else{
        printf("%d is the greatest of all ",c);
    }

    return 0;
}
