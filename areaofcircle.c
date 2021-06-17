// WRITE A PROGRAME TO FIND THE AREA OF A CIRCLE

#include<stdio.h>
int main() {

    const float pi = 3.14;
    float radius;
    double area;
    printf("\nEnter the radius \n");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("\nArea of the Circle is : %.2lf sq unit\n",area);

    return 0;

}