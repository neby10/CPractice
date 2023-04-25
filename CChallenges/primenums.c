/*
Author: Nicholas Eby
Date: 4.21.2023
Title: Prime Nums
Purpose: This program prints all prime numbers between 1 and 100.
*/ 

// NOTE: By definition, a prime number is a positive integer greater than 1 that has no positive integer divisors other than 1 and itself. 

#include <stdio.h>
#include <time.h>

int isPrime(int prime) {
    // returns false for negatives as well as 0 and 1
    if (prime <= 1) {
        return 0;
    }
    
    // checks until halfway for all possible divisors of number
    int i;
    for (i = 2; i < (prime / 2); i++) {
        if (prime % i == 0) {
            return 0;
        }
    }

    // if no divisors found, return true
    return 1;
}

int main() {
    printf("Welcome to Prime Nums Program where all your favorite prime nums get displayed!\n");

    int i;

    // loop through each number
    for (i = 0; i <= 100; i++) {
        if (isPrime(i) == 1) {
            printf("%d - ", i);
        }
    }
    printf("done\n");

    return 0;
}