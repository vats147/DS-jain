/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:   33.	C program using functions to calculate compound interest.

*/
#include<stdio.h>
float compound_interest(float principal_amount,float rate_of_interset,int number_of_year)
{
       float compound_interest=0;
       float total_compound_interest=0;
       int temp;
       temp=number_of_year;
        do
       {
              compound_interest=((principal_amount)*rate_of_interset/100);
              // printf("%f",compound_interest);
              total_compound_interest+=compound_interest;
              // compound_interest=(((principal_amount)*rate_of_interset/100)*number_of_year);
              principal_amount+=compound_interest;
              temp--;
             
       } while (temp!=0);
       return total_compound_interest;
}

int main(){

       float principal_amount;
       float rate_of_interset;
       int number_of_year;

       printf("Enter principal Amount: ");
       scanf("%f",&principal_amount);

       printf("Enter Rate of Interset: ");
       scanf("%f",&rate_of_interset);

       printf("Enter number of year: ");
       scanf("%d",&number_of_year);
       

       printf("Total compound interest = %f",compound_interest(principal_amount,rate_of_interset,number_of_year));
              
       
       
}