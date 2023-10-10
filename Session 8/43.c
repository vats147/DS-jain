/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:42.	43.	C program to find search for a given number using Linear search



*/
#include <stdio.h>
int linersearch(int arr[],int find_number)
{
      for (int i = 0; i < sizeof(arr); i++)
      {
              if(arr[i]==find_number)
              {
                     printf("ARR[%d] == is %d",i,arr[i]);
                     return i;

              }
      }
      
       return -1;
       
}
int main()
{

       // Declare variables
       
       int max, min, minindex = 0;

       int find_number;

       

       // Declare the array
       int arr[] = {2, 10, 30, 40, 50};

       printf("Please enter number which you want to find");
       scanf("%d", &find_number);

       
       int result = linersearch(arr, find_number);
       printf("Value of result is : %d",result);
       
       (result == -1) ? printf("Element is not present in array")
                      : printf("Element is present at index %d", result);

       return 0;
}
