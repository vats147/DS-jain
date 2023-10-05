/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question: 50.	C program to find the frequency of a character in a string.



*/
#include <stdio.h>
#include <string.h>
int main()
{
       char str[20];
       char ch;
       int count = 0;
       printf("Enter a string: ");
       scanf("%s", str);

       printf("Enter a character to find its frequency: ");
       scanf("%c", &ch);
       for (int i = 0; i < strlen(str); i++)
       {
              if (ch == str[i])
              {
                     count++;
              }
       }
       printf("Frequency of '%c' in the string is: %d\n", ch, count);

       // printf("%s", str);
       return 0;
}
