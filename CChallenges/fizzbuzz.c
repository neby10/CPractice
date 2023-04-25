/*
Author: Nicholas Eby
Date: 4.19.2023
Title: FizzBuzz
Purpose: Print numbers 1-100, for multiples of 3 print 'fizz' instead, for multiples of 5 print 'buzz' instead, for multiples of 3 and 5 print 'fizzbuzz' instead
*/ 

#include <stdio.h>

int main() {
    printf("Welcome to FizzBuzz Program!\n");

    int i;

    for (i = 0; i <= 100; i++) {
        if ((i % 3 != 0) && (i % 5 != 0)) { // printing number if not multiple of three or five
            printf("%d", i);
        }
        if (i % 3 == 0) { // multiple of three
            printf("fizz");
        }
        if (i % 5 == 0) { // multiple of five
            printf("buzz");
        }  
        printf("\n");
    }

    return 0;
}