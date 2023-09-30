/*
       
       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question:28.	C program to generate the pattern 
              a)1	2	3	4	b)1
              2	3	4	5	2	3
              3	4	5	6	4	5	6
              4	5	6	7	7	8	9	10




*/
#include<stdio.h>




int main(){

       int num;
       int temp=1;
       printf("Enter number: ");
       scanf("%d",&num);

       // Option A
       printf("option A\n");
         for(int i=1;i<num;i++)
              {
                     for(int j=0;j<num;j++)
                     {
                            printf("%d ",j+i);
                     }
                     printf("\n");
              }
       
       // Option B
       printf("option B\n");
       for(int i=1;i<num;i++)
              {
                     for(int j=0;j<i;j++)
                     {
                            printf("%d ",temp);
                            temp++;
                     }
                     
                     printf("\n");
              }
       
       
}



