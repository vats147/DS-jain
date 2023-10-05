/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:39.	C program to find the largest and smallest of “N” numbers using 1-D arrays.



*/
#include<stdio.h>

int main(){

       int n;
       int max,min;
       printf("Please Enter Number:");
       scanf("%d",&n);
       
       int arr[n];
       for (int  i = 0; i < n; i++)
       {
             printf("\n Enter Value of arr[%d] : ",i);
             scanf("%d",&arr[i]);
       }
       max=min=arr[0];
       // min=arr[0];
       for (int i = 0; i < n; i++)
       {
              if(max<arr[i])
              {
                     max=arr[i];
              }
              if(min>arr[i])
              {
                     min=arr[i];
              }
       }
       printf("Maximum number is %d\n",max);
       printf("Minimum number is %d\n",min);

              
       
       
}