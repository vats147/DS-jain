/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question:63.	C program to create a file to hold the data of employees input and output data from it.



*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
       char name[20];
       float salary;
       printf("Enter Employee name: ");
       gets(name);
       printf("Enter Employee salary: ");
       scanf("%d",&salary);
       
       //creating an object for class File
       FILE* f;
       f = fopen("employee.txt","w+");
       
       if(f==NULL)
       {
              printf("File handling error");
              exit(1);
       }
       fprintf(f,"Employee name : ");
       fputs(name,f);
       fprintf(f,"\n Salary is : %f",salary);

       printf("File written succesfully");

       fclose(f);

       
}
