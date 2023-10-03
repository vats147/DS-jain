/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question:47.	C program to transpose a given matrix.


*/
#include <stdio.h>

int main()
{

       int row1, col1,temp;
       printf("\nEnter Row of 1st matics : ");
       scanf("%d", &row1);
       printf("\n Enter Column of first matrix  : ");
       scanf("%d", &col1);

      
              int arr1[row1][col1];
              int transpose[col1][row1];
              

              printf("\n\tMatrix-1:\n");
              for (int i = 0; i < row1; i++)
              {
                     for (int j = 0; j < col1; j++)
                     {
                            printf("Enter arr1[%d][%d] : ", i, j);
                            scanf("%d", &arr1[i][j]);
                     }
              }


              for (int i = 0; i < row1; i++)
              {
                     for (int j = 0; j < col1; j++)
                     {
                            // temp=arr[i][j];
                           transpose[j][i]=arr1[i][j];
                            
                     }
              }

              printf("\n\t Transpose of matix is :\n");
              for (int i = 0; i < col1; i++)
              {
                     for (int j = 0; j < row1; j++)
                     {
                            printf("%d ", transpose[i][j]);
                     }
                     printf("\n");
              }
     
}
