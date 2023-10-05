/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:41.	C program to sort a list of numbers using Selection sort.



*/
#include <stdio.h>

int main()
{

       // Declare variables
       int n;
       int max, min, minindex = 0;
       int temp;

       // Get the number of elements in the array
       printf("Please Enter Number:");
       scanf("%d", &n);

       // Declare the array
       int arr[n];

       // Get the elements of the array from the user
       for (int i = 0; i < n; i++)
       {
              printf("\n Enter Value of arr[%d] : ", i);
              scanf("%d", &arr[i]);
       }

       // Print the array before sorting
       printf("\nBefore Sort\n");
       for (int i = 0; i < n; i++)
       {
              printf("arr[%d]= %d \n", i, arr[i]);
       }

       // Selection sort algorithm starts here
       for (int i = 0; i < n; i++)
       {
              // Find the minimum element in the unsorted subarray
              min = arr[i];
              minindex = i;
              for (int j = i + 1; j < n; j++)
              {
                     if (arr[j] < min)
                     {
                            min = arr[j];
                            minindex = j;
                     }
              }

              // Swap the minimum element with the first element of the unsorted subarray
              temp = arr[i];
              arr[i] = min;
              arr[minindex] = temp;
       }

       // Print the array after sorting
       printf("\nAfter  Sort\n");
       for (int i = 0; i < n; i++)
       {
              printf("arr[%d]= %d \n", i, arr[i]);
       }

       return 0;
}
