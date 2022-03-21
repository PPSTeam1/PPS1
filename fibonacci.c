#include <stdio.h>
int main() {
    int a =0;
    int b =1;
    int num,fib;
    printf("Enter no. of Fibonacci number you want : ");
    scanf("%d",&num);

    if (num == 1){
        printf("%d ",a);
    }
    else if(num == 2){
        printf("%d",b);
    }
    else{
        printf("%d\n%d\n",a,b);
        for(int i = 2;i<num;i++){
            fib = a + b;
            printf("%d \n",fib);
            a = b;
            b = fib;
        }
    }

    

    return 0;
}