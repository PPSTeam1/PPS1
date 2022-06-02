// CALCULATOR
#include <stdio.h>
int main() {
    float x,y,sum,sub,mul,divide;
    int op;
    


    printf("Enter a number : ");
    scanf("%f",&x);

    printf("Enter second number : ");
    scanf("%f",&y);

    printf("\nPlease type the oprations as given\n");
    printf("\nEnter the Operation from the following -->\n1 for Add\n2 for Sub\n3 for Multiply\n4 for Divide : ");
    scanf("%d",&op);


    switch (op)
    {
    case 1:
        sum = x+y;
        printf("The Sum of %f and %f is : %f",x,y,sum);
        break;
    
    case 2:
        if (x > y){
            sub = x-y;
            printf("The Difference of %f and %f is : %f",x,y,sub);
        }
        else{
            sub = y - x;
            printf("The Difference of %f and %f is : %f",y,x,sub);
        }

    case 3:
        mul = x*y;
        printf("The Product of %f and %f is : %f",x,y,mul);
        break;

    case 4:
        divide = x/y;
        printf("The Division of %f and %f is : %f",x,y,divide);
        break;

    default:printf("Its not a valid operation");
        break;
    }
    return 0;
  }
