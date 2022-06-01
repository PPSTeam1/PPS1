#include <stdio.h>

int main()
{
    float DA,HRA,basic_pay,gross_salary;

    printf("Enter DA, HRA, Basic pay : ");
    scanf("%f %f %f",&DA,&HRA,&basic_pay);

    gross_salary = basic_pay + (DA/100)*basic_pay + (HRA/100)*basic_pay;
    printf("\nGross Salary = %f",gross_salary);

    return 0;
}
