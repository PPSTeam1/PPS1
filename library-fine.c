/*Q.Calculating library Fine on the basis of number of late Days ??*/

#include<stdio.h>

void main()
{
    int days;
    float fine;

    printf("enter the number of late days : ");
    scanf("%d",&days);

    if(days<=30)
    {
        if(days<=30&&days>10)
            fine=7.5+((days-10)*5);
        else if(days<=10&&days>5)
            fine=2.5+((days-5)*1);
        else if(days<6&&days>0)
            fine=days*0.5;
        printf("fine =  %.2f\n\n",fine);

    }
    else printf("your membership is cancelled\n\n");

}
