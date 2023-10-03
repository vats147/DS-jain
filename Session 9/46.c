/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question:46.	C program to find the product of two matrices.



*/
#include <stdio.h>

int main()
{

       int row1, col1, row2, col2;
       printf("\nEnter Row of 1st matics : ");
       scanf("%d", &row1);
       printf("\n Enter Column of first matrix  : ");
       scanf("%d", &col1);

       printf("\nEnter Row of 2nd matics : ");
       scanf("%d", &row2);
       printf("\n Enter Column of second matrix  : ");
       scanf("%d", &col2);
       if (col1 == row2)
       {
              int arr1[row1][col1];
              int arr2[row2][col2];
              int product[row1][col2];

              printf("\n\tMatrix-1:\n");
              for (int i = 0; i < row1; ++i)
              {
                     for (int j = 0; j < col1; ++j)
                     {
                            printf("Enter arr1[%d][%d] : ", i, j);
                            scanf("%d", &arr1[i][j]);
                     }
              }
              printf("\n\tMatrix-2:\n");
              for (int i = 0; i < row2; ++i)
              {
                     for (int j = 0; j < col2; ++j)
                     {
                            printf("Enter arr2[%d][%d] : ", i, j);
                            scanf("%d", &arr2[i][j]);
                     }
              }

              for (int i = 0; i < row1; i++)
              {
                     for (int j = 0; j < col1; j++)
                     {
                            product[i][j] = 0; 
                            for (int  k = 0; k < col2; k++)
                            {
                                   product[i][j] += arr1[i][k] * arr2[k][j];    
                                   /* code */
                            }
                            
                     }
              }

              printf("\n\tproduct of matix is :\n");
              for (int i = 0; i < row2; ++i)
              {
                     for (int j = 0; j < col2; ++j)
                     {
                            printf("%d ", product[i][j]);
                     }
                     printf("\n");
              }
       }
       else
       {

              printf("M x n must be same ");
              return 1;
       }
}
