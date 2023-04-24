/*
Author: Nicholas Eby
Date: 4.21.2023
Title: Fibonacci
Purpose: This program prints the first 20 numbers in the Fibonacci sequence.
*/

#include <stdio.h>

int getFibonacci(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return getFibonacci(num - 1) + getFibonacci(num - 2);

    }
}

int main() {
    printf("Welcome to my Fibonacci Sequence Program!\n");

    // total numbers based on desired output
    int total_nums = 20;

    // display to screen
    int i;
    for (i = 0; i < total_nums; i++) {
        printf("%d - ", getFibonacci(i));
    }
    
    printf("done\n");

    return 0;
}