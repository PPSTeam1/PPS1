#include <stdio.h>
int main() {
   int n;
   printf("Enter Nth natural number : ");
   scanf("%d",&n);


    printf("Sum is : %d\n",sumNaturals(n));

return 0;
}

int sumNaturals(int n) {
  int sum=0;
    for( int i = 0; i <= n;i++){
      sum = sum + i;
      
   }
  return sum;
}
