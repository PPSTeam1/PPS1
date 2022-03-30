/*Q . Calculating the insurance of the Driver on the basis of Gender,Age and Marital Status ???*/

#include <stdio.h>
int main(void){
char ge,ms;
int age;

printf ("Enter marital status(M/N):\n");
scanf (" %c", &ms);
printf ("Enter Gender(M/F):\n");
scanf (" %c", &ge);
printf ("Enter Age:\n");
scanf (" %d", &age);

if (ms=='M'){
    printf ("The driver is insured");
}

else if (ge=='M' && age>30 && ms=='N'){
    printf ("Driver is insured");
}

else if (ge=='F' && age>25 && ms=='N'){
    printf ("Driver is insured");
}
else{
    printf ("Driver is not insured");
}

return 0;
}
