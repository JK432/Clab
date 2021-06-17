// WRITE A PROGRAME TO SWAP TWO NUMBERS USING TEMPORARY VARIABLES

#include<stdio.h>
int main(){

int a=4 ;
int b=5;
int temp;

printf("\n variyable a before swaping : %d \n",a);
printf(" variyable b before swaping : %d \n",b);
printf(" swaping variyables...");
temp=a;
a=b;
b=temp;
printf("\n variyable a after swaping : %d \n",a);
printf(" variyable b after swaping : %d \n",b);
return 0;
}