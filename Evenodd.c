#include <stdio.h>

int main()
{   int num;
    printf("Enter a number to check even or odd : ");
    scanf("%d",&num);

    if(num == 0){
        printf("\nWe cannot say about %d",num);
    }
    else if(num%2 == 0){
        printf("\n%d is an Even Number.",num);
    }
    else{
        printf("\n%d is Odd numebr.",num);
    }

    return 0;
}
