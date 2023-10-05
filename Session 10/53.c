/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question: 51.	C program to reverse a string.



*/
#include <stdio.h>
#include <string.h>
int main()
{
       char str1[20];
       char str2[20];
       printf("Enter a string: ");
       scanf("%s", str1);
       int length = strlen(str1);

       for (int i = 0; i < length; i++)
       {
              str2[i] = str1[length - i - 1];
       }

       // Null-terminate the reversed string
       str2[length] = '\0';
       

       for(int i=0;i<strlen(str1);i++)
       {
              if(str1[i]!=str2[i])
              {
                     printf("String are not palindrome");
                     return 0;
              }
       }

      
                     printf("String is palindrome");

       return 0;
}
