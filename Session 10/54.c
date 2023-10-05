/*


       Author: Vatsal Mangukiya
       Date: 4th October,2023

       Question: 54.	C program to remove all blank spaces and punctuation
symbols from a string.




*/
#include <stdio.h>
#include <string.h>

int isPunctuation(char ch) {
    // Define a list of punctuation symbols to be removed
    char punctuation[] = ".,;!?";

    // Check if the character is in the list of punctuation symbols
    for (int i = 0; punctuation[i]; i++) {
        if (ch == punctuation[i]) {
            return 1; // It's a punctuation symbol
        }
    }

    return 0; // It's not a punctuation symbol
}

int main() {
    char input[100];
    char output[100];
    int outputIndex = 0;

    printf("Enter a string: ");
    gets(input);

    for (int i = 0; input[i]; i++) {
        if (!isspace(input[i]) && !isPunctuation(input[i])) {
            output[outputIndex++] = input[i];
        }
    }

    output[outputIndex] = '\0';

    printf("String after removing blank spaces and punctuation symbols: %s\n", output);

    return 0;
}
