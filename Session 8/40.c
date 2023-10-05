/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:40.	C program to sort a list of numbers using Bubble sort.



*/
#include<stdio.h>

int main(){

       int n;
       int max,min;
       int temp;
       printf("Please Enter Number:");
       scanf("%d",&n);
       
       int arr[n];
       for (int  i = 0; i < n; i++)
       {
             printf("\n Enter Value of arr[%d] : ",i);
             scanf("%d",&arr[i]);
       }
       printf("\nBefore Sort\n");
       
       for (int i = 0; i < n; i++)
       {
             printf("arr[%d]= %d \n",i,arr[i]);
       }
       
       //Bubble sorting starts here
       for (int  i = 0; i < n; i++)
       {
             for (int  j = i; j <= n-1; j++)
             {
                     if(arr[i]>arr[j])
                     {
                            
                            temp=arr[i];
                            arr[i]=arr[j];
                            arr[j]=temp;
                     }
             }
             
       }
       
       printf("\nAfter  Sort\n");

       for (int i = 0; i < n; i++)
       {
             printf("arr[%d]= %d \n",i,arr[i]);
       }
              
       
       
}