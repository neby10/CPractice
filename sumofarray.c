/*
Author: Nicholas Eby
Date: 4.19.2023
Title: Sum Of Array
Purpose: This program takes an array of integers and calculates the sum of all the elements.
*/ 

#include <stdio.h>

int sumOfArray(int arr[], size_t size) {
    // passing in the size of the array as well because if size is computed in this function, 
    // the sizeof function is returning the size of a pointer rather than desired size which is the size of the array
    int i, sum = 0;
    for (i = 0; i < size; i += 1) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int my_array[] = {81, 62, 53, 64, 76, 97, 88, 83, 72, 100};

    size_t my_array_size = sizeof(my_array) / sizeof(my_array[0]);
    int mySum = 0;
    mySum = sumOfArray(my_array, my_array_size);

    printf("sum = %d\n", mySum);

    return 0;
}