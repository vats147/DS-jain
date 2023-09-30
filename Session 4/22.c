/*
       
       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question: 22.	C program to calculate x^y 


*/
#include<stdio.h>


int main(){

       int x,y,ans;
       
       ans=1;
       printf("Enter X: ");
       scanf("%d",&x);

       printf("Enter Y: ");
       scanf("%d",&y);
       
       for(int i=1;i<=y;i++)
       {
              ans *=x;
       }
       printf(" %d to the power %d is %d\n", x, y, ans);
       
       
       
       
}