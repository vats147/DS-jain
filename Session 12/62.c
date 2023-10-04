/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question: 62.	C program to create and use a union.



*/
#include <stdio.h>

union Student
{
       int rollno;
       
};

int main()
{

       union Student s1;
       printf("Enter the Roll No of student : ");
       scanf("%d", &s1.rollno);
       
       
       printf("\n The value is %d ", s1.rollno);
}
