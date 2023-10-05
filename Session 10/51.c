/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question: 51.	C program to reverse a string.



*/
#include <stdio.h>
#include <string.h>
int main()
{
       char str[20];
      
       printf("Enter a string: ");
       scanf("%s", str);

      printf("Original String %s\n",str);

      printf("Reverse String %s ",strrev(str));

       // printf("%s", str);
       return 0;
}
