// WRITE A C PROGRAME TO CHEACK WHETHER THE GIVEN NUMBER IS EVEN OR ODD

#include<stdio.h>
int main(){

    int a;
    printf("\nEnter the number\n");
    scanf("%d",&a);

    if(a%2==0)
    {

        printf("%d is a Even number \n",a);


    }
    else{
        
        printf("%d is an Odd number\n",a);

    }

return 0;

}