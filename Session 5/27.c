/*
       remain
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question:27.	C program to generate the patterns. a)1	              b)	1
                                                        1	2	              2	2
                                                        1	2	3	       3	3	3
                                                        1	2	3	4	4	4	4	4
                                                        1	2	3	       3	3	3
                                                        1	2	2	       2	2
                                                        1	                     1





*/
#include<stdio.h>




int main(){

       int num;
       printf("Enter number: ");
       scanf("%d",&num);

       // Option A
       printf("option A\n");
         for(int i=1;i<=num;i++)
              {
                     for(int j=1;j<=i;j++)
                     {
                            printf("%d ",j);
                     }
                     printf("\n");
              }

        for(int i=num;i>0;i--)
              {
                     for(int j=i-1;j>0;j--)
                     {
                            printf("%d ",i-j);
                     }
                     printf("\n");
              }
       

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

        for(int i=num;i>0;i--)
              {
                     for(int j=i-1;j>0;j--)
                     {
                            printf("%d ",i-1);
                     }
                     printf("\n");
              }
       
       
}
