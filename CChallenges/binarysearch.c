/*
Author: Nicholas Eby
Date: 4.24.2023
Title: Binary Search
Purpose: This program performs a binary search on a sorted array of integers to find a specific value.
*/

// NOTE #1: Array must be presorted in order that binarySearch function works!

#include <stdio.h>
#include <string.h>

int binarySearch(int *numbers, size_t length, int item) {
    // function returns the position of the item in the given array, returns -1 if item not found
    // Begin with an interval that covers the entire array
    // If the search key value is less than the middle-interval item, narrow the interval to that lower half. Otherwise, narrow the interval to the upper half.
    // Keep checking the chosen interval until either the value is found or the interval’s empty

    int low = 0, high = length - 1, mid;

    while (low < high) {
        mid = (low + high) / 2;
        if (numbers[mid] == item) { // item found, woohooooo!
            printf("Found Item!\n");
            return mid;
        } else if (numbers[mid] > item) { // need to search lower in array
            printf("Item Lower\n");
            high = mid - 1;
        } else if (numbers[mid] < item) { // need to search higher in array
            printf("Item Higher\n");
            low = mid + 1;
        }
    }
    printf("Item Not Found\n");

    return -1;
}

int main() {
    printf("Welcome to Binary Search!\n");

    // sample list of pre-sorted integers
    int nums[20] = {234, 255, 267, 278, 290, 300, 321, 333, 389, 399, 402, 425, 466, 467, 488, 529, 580, 581, 584, 589};
    size_t length = sizeof(nums) / sizeof(nums[0]);
    int val = 425;

    // storing search return value as result to be used later
    int result = binarySearch(nums, length, val);

    printf("returned value: %d\n", result);

    if (result >= 0) {
        printf("Value %d was successfully found in the array at position %d\n", val, result);
    } else if (result == -1) {
        printf("Value %d could not be found in the array...\n", val);
    } else {
        printf("Something went very wrong with this program...\n");
    }

    return 0;
}