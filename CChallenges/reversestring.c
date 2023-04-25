/*
Author: Nicholas Eby
Date: 4.20.2023
Title: Reverse String
Purpose: This program takes input as a string and prints the reverse of the inputted string
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Enter a string please: \n");

    char *my_string = NULL;
    size_t len = 0;
    ssize_t length;

    // getline dynamically allocates memory to my_string variable, 
    // len is a pointer to a variable that stores the size of the buffer pointed to by my_string
    // stdin is used to keep track of lenth of input, stdin is where the function reads the input from (standard input in this case, can also be a file)
    length = getline(&my_string, &len, stdin);

    char reverse_string[length];
    
    strcpy(reverse_string, my_string);

    // reverse the string
    int i, j;
    j = length - 2;
    for (i = 0; i < length; i++) {
        reverse_string[i] = my_string[j];
        j--;
    }
    reverse_string[length] = '\n';

    // display results to user
    printf("length of string: %zd\n", length);
    printf("reverse string: %s\n", reverse_string);

    // disallocate alotted space
    free(my_string);

    return 0;
}