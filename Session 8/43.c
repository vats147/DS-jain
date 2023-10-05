/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:42.	C program to sort a list of numbers using Insertion sort.



*/
#include <stdio.h>
int binarySearch(int arr[],int low,int high,int find_number)
{
       while (low<=high)
       {
              int mid= low + (high-low )/2;
              if(arr[mid]==find_number)
              {
                     return mid;
              }
              if(arr[mid]<find_number)
              {
                     low=mid+1;
              }
              else
              {
                     high=mid-1;
              }
       }
       return -1;
       
}
int main()
{

       // Declare variables
       int n;
       int max, min, minindex = 0;

       int find_number;

       // Get the number of elements in the array
       printf("Please Enter Number:");
       scanf("%d", &n);

       // Declare the array
       int arr[] = {2, 10, 30, 40, 50};

       printf("Please enter number which you want to change");
       scanf("%d", &find_number);
       n = sizeof(arr) / sizeof(arr[0]);
       int result = binarySearch(arr, 0, n - 1, find_number);

       (result == -1) ? printf("Element is not present in array")
                      : printf("Element is present at index %d", result);

       return 0;
}
