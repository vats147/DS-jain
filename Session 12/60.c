/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question: 60.	C program to create and use a structure for a student data.



*/
#include <stdio.h>

struct student
{
       int rollno;
       
};


int main(){

       struct student st;
       st.rollno = 542;
    

       printf("Accessing Structer Variable\n");
       printf("Student Roll no is : %d\n",st.rollno);
       
      
       
}
