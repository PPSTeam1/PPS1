#include <stdio.h>

int Fibonacci(int n);

int main() {
    int n;
    printf("Enter which element of Fibobnacci you want : ");
    scanf("%d",&n);

    printf("%d \n",Fibonacci(n));

    return 0;
}

int Fibonacci(int n){
    if (n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int fibo = Fibonacci(n-1)+Fibonacci(n-2);
    return fibo;
}
