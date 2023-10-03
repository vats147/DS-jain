/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question:48.	C program to check whether a given matrix is an identity matrix.


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
                            if(i==j)
                            {
                                   if(arr1[i][j]==1)
                                   {
                                          continue;
                                   }else
                                   {
                                          printf("\nMatrix is not identity matixs");
                                          return 0;
                                   }
                            }
                            if(arr1[i][j]!=0)
                            {
                                   printf("\nMatrix is not identity matixs");
                                   return 0;
                            }
                            
                            
                     }
              }

              printf("Matrix is identity matix");
              
     
}
