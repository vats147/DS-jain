/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:42.	C program to sort a list of numbers using Insertion sort.



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

       // Insertion sort algorithm starts here
       for (int i = 0; i < n; i++)
       {
              for (int i = 1; i < n; i++)
              {
                     temp = arr[i];
                     int j = i - 1;
                     while (j >= 0 && arr[j] > temp)
                     {
                            arr[j + 1] = arr[j];
                            j--;
                     }
                     arr[j + 1] = temp;
              }
       }

       // Print the array after sorting
       printf("\nAfter  Sort\n");
       for (int i = 0; i < n; i++)
       {
              printf("arr[%d]= %d \n", i, arr[i]);
       }

       return 0;
}
