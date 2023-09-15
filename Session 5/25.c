/*
       
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question: 25.	C program to generate the patterns.
              a)1	              b)	1
              1	2      	       2	2
              1	2      	       3	3	3	3
              1	2	3	4	4	4	4	4



*/
#include<stdio.h>

void right_half_pyramid(int num);


int main(){

       int num;
       printf("Enter number: ");
       scanf("%d",&num);

       // Option A
       printf("option A\n");
       right_half_pyramid(num);
       
       // Option B
       printf("option B\n");
       for(int i=1;i<=num;i++)
              {
                     for(int j=1;j<=i;j++)
                     {
                            printf("%d ",i);
                     }
                     printf("\n");
              }
       
       
}

void right_half_pyramid(int num){

       for(int i=1;i<=num;i++)
              {
                     for(int j=1;j<=i;j++)
                     {
                            printf("%d ",j);
                     }
                     printf("\n");
              }
}