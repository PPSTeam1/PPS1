#include<stdio.h>
//Forming of pyramid
int main()
{
    int i,j,k=0;
for(i=1;i<=10;i++)
{
    for(j=1;j<=10-i;j++)
{
    printf(" ");
    }
while (k!=(2*i-1 ))
{
    printf("*");
     k++;
}
k=0;
printf("\n");
}return 0;
}

