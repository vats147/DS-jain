/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question: 35.	C program using recursion to find x^y.

*/
#include<stdio.h>
int ans(int x,int y)
{
       
       if(y <= 1)
       {
              return 1;
       }
       else
              return  x * ans(x,y -1);
}
int main(){

       int x,y,ans;
       
       ans=1;
       printf("Enter X: ");
       scanf("%d",&x);

       printf("Enter Y: ");
       scanf("%d",&y);
       
       for(int i=1;i<=y;i++)
       {
              ans =ans * x;
       }
       printf(" %d to the power %d is %d\n", x, y, ans);

       

              
       
       
}