/*
       
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question: 26.	C program to generate the patterns.
              a)4	3	2	1	b)	4	4	4	4
              3	2	1	              3	3	3
              2	1	                     2	2
              1	                            1




*/
#include<stdio.h>




int main(){

       int num;
       printf("Enter number: ");
       scanf("%d",&num);

       // Option A
       printf("option A\n");
         for(int i=num;i>0;i--)
              {
                     for(int j=i;j>0;j--)
                     {
                            printf("%d ",j);
                     }
                     printf("\n");
              }
       
       // Option B
       printf("option B\n");
       for(int i=num;i>0;i--)
              {
                     for(int j=i;j>0;j--)
                     {
                            printf("%d ",i);
                     }
                     printf("\n");
              }
       
       
}
