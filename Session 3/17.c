/*
       remain

       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question: 17.	C program to calculate compound interest (do-while).

*/
#include<stdio.h>

int main(){

       float principal_amount;
       float rate_of_interset;
       int number_of_year;
       float compound_interest=0;
       float total_compound_interest=0;
       int temp;
       printf("Enter principal Amount: ");
       scanf("%f",&principal_amount);

       printf("Enter Rate of Interset: ");
       scanf("%f",&rate_of_interset);

       printf("Enter number of year: ");
       scanf("%d",&number_of_year);
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

       printf("Total compound interest = %f",total_compound_interest);
              
       
       
}