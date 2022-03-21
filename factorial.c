#include <stdio.h>
int main() {
    int num,fact=1;
    printf("Enter no to find factorial : ");
    scanf("%d",&num);

   for(int i=num;i>=1;i--){
       fact = fact*i;
   }
   printf("The Facotrial of %d is : %d",num,fact);

    return 0;
}