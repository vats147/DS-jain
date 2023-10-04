/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question: 59.	C program to concatenate two strings using pointers and functions.



*/
#include <stdio.h>
#include <string.h>

void conctination( char *str1,char *str2)
{
       while (*str1) {
        str1++;
    }

    // Copy characters from str2 to str1
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    // Null-terminate the concatenated string
    *str1 = '\0';
       
}
int main() {
    
    char string1[100];
    char string2[100];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    conctination(string1,string2);
    printf("Concatenated string: %s\n", string1);
}
