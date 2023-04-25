/*
Author: Nicholas Eby
Date: 4.20.2023
Title: Palindrome
Purpose: This program takes input as a string and tells the user whether it is a palindrome or not.
*/ 

// NOTE #1: This program does not compute strings with whitespace correctly.
// NOTE #2: This program does not dynamically allocate memory for the palindrome and instead only uses a variable with 50 bytes of memory.
//          This is suitable for a small program like this. Please dont enter words greater than 50 characters.

#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to Palindrome Calculator\n");
    printf("Please enter a word:\n");

    char palindrome[50];
    int is_palindrome = 0; // for storing whether the word entered is a palindrome: only 0 or 1 (false or true); defaulted to false
    
    // get user input
    scanf("%s", palindrome);

    // initialize variables for determining if string is a palindrome
    int len = strlen(palindrome);
    int i;
    int j = len;

    // iterate through half of word to determine is_palindrome
    for (i = 0; i < (len / 2); i++) {
        if (palindrome[i] == palindrome[j-1]) {
            j--;
            // if check is good up until halfway, then it is a palindrome
            if (i == (len / 2) - 1) {
                is_palindrome = 1;
            }
        } else {
            is_palindrome = 0;
            break;
        }
    }

    // displays result to user
    if (is_palindrome) {
        printf("%s is a palindrome!\n", palindrome);
    } else {
        printf("%s is NOT a palindrome.\n", palindrome);
    }

    return 0;
}