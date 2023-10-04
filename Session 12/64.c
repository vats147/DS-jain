/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question:64.	C program to write a sentence in a file and convert all lower case alphabets to uppercase and vice versa.




*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
       char str[100];
       float salary;
         int j = 0;
         char ch;
       printf("Enter Small sentence : ");

       gets(str);

      
        while (str[j]) {
        ch = str[j];
        str[j]=islower(str[j]) ? toupper(str[j]) : tolower(str[j]);
        
        j++;
    }

       // creating an object for class File
       FILE *f;
       f = fopen("employee.txt", "w+");

       if (f == NULL)
       {
              printf("File handling error");
              exit(1);
       }
       
       fputs(str, f);
       

       printf("File written succesfully");

       fclose(f);
}
