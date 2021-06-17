/* WRITE A C PROGRAME TO PERFORM ALL ARITHAMATIC OPPERATIONS.
(GIVEN NUMBERS AS USER INPUT.)
A.ADD TWO NUMBERS.
B.DIFFERENCE OF TWO NUMBERS.
C.PRODUCT OF TWO NUMBERS.
D.QUOTIENT OF TWO NUMBERS.
E.REMINDER OF TWO NUMBERS.
F.EXPONENT OF A NUMBER.*/  

#include<stdio.h>
int main()
{

double num1,num2;

printf(" Enter two numbers\n");
scanf("%lf %lf", &num1, &num2);

printf("\n 1.Addition %.1lf + %.1lf = %.1lf",num1,num2,num1 + num2);
printf("\n 2.Subtraction  %.1lf - %.1lf = %.1lf",num1,num2,num1 - num2);
printf("\n 3.Multiplication %.1lf * %.1lf = %.1lf",num1,num2,num1 * num2);
printf("\n 4.Divition  %.1lf / %.1lf = %.1lf \n",num1,num2,num1 / num2);




return 0;

}