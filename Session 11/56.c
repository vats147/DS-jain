/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question: 56.	C program to swap the values of two variables using pointers.



*/
#include <stdio.h>
void swap(int *num1, int *num2)
{
       int  temp;
       temp= *num1;
       *num1=*num2;
       *num2=temp;

       
}
int main()
{

       int num1, num2;
       printf("Enter number1: ");
       scanf("%d", &num1);

       printf("Enter Number 2: ");
       scanf("%d", &num2);

       printf("NUmber before swap\n");
       printf("Num 1: %d\n", num1);
       printf("Num 2: %d\n", num2);

       printf("\n ***** \n");
       printf(" After Swapping ( Using pointer Variable )\n");

       swap(&num1,&num2);

       printf("Num 1: %d\n", num1);
       printf("Num 2: %d\n", num2);

       return 0;
}
