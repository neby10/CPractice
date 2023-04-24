/*
Author: Nicholas Eby
Date: 4.21.2023
Title: Sorting
Purpose: This program sorts an array of integers in ascending order.
*/

// NOTE: I chose to use a sort of version of Bubble Sort for this program which has time complexity of O(n^2).

void bubbleSort(int integers[], int len) {
    // i is used for iterating, temp is used for temporary storing the value to be swapped, counter is used to check when array is finally sorted
    int i, temp, counter = 0;
    while (counter < len) {
        for (i = 0; i < len; i++) {
            // check if elements need to be switched
            if (integers[i] > integers[i+1]) {
                temp = integers[i];
                integers[i] = integers[i+1];
                integers[i+1] = temp;

                counter = 0;
            } else {
                counter += 1;
            }
        }
    }
}

#include <stdio.h>

int main() {
    printf("Welcome to my Sorting program! (Very much similar to The Sorting Hat. 'GRYFFINDOR!!!')\n");

    int my_integers_list[] = {49, 16, 2, 33, 53, 47, 34, 20, 28, 120, 171, 11, 165, 174, 76, 12, 18, 57, 79, 73};

    int length = sizeof(my_integers_list) / sizeof(my_integers_list[0]);

    bubbleSort(my_integers_list, length);

    // display the sorted array to the screen
    int i;
    printf("NEW ARRAY: ");
    for (i = 0; i < length; i++) {
        printf("%d ", my_integers_list[i]);
    }
    printf("\n");

    return 0;
}