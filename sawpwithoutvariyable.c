
// WRITE A C PROGRAME TO SWAP TWO NUMBERS WITHOUT USSING TEMPORARY VARIABLES

#include<stdio.h>
int main()
{

int a=5;
int b=4;


printf("\n variyable a before swaping : %d \n",a);
printf(" variyable b before swaping : %d \n",b);
printf(" swaping variyables...");

a=a+b;
b=a-b;
a=a-b;


printf("\n variyable a after swaping : %d \n",a);
printf(" variyable b after swaping : %d \n",b);
return 0;



}