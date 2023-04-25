/*
Author: Nicholas Eby
Date: 4.21.2023
Title: Rock Paper Scissors
Purpose: This program lets the user play a game of rock-paper-scissors against the computer.
*/

// NOTE: BEWARE! Program may break if giving undesired inputs. UPDATED: Maybe not?? Not confident here haha but the while loops seem to help

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Welcome to Rock Paper Scissors!\n");

    // initialize necessary variables
    char user1_name[25];
    int user1_choice;
    int cpu_choice;
    int user1_score = 0;
    int cpu_score = 0;

    // seed time
    srand(time(NULL));

    printf("Please enter your name: \n");
    scanf("%24s", user1_name);

    printf("Let's Play!\n");

    // game loop
    do {
        // display current score
        printf("%s : %d\n", user1_name, user1_score);
        printf("CPU : %d\n", cpu_score);

        // prompt user, get user1_choice
        printf("Please choose 1 for Rock, 2 for Paper, or 3 for Scissors... Press 4 to exit...\n");
        
        while ((scanf("%d", &user1_choice)) != 1) {
            printf("Invalid input");
            while (getchar() != '\n');
        }

        // break out of loop to avoid displaying extranneous round below
        if (user1_choice == 4) {
            break;
        }

        // randomize computer choice
        cpu_choice = rand() % 3 + 1;

        printf("%s chooses ", user1_name);
        if (user1_choice == 1) {printf("ROCK\n");}
        else if (user1_choice == 2) {printf("PAPER\n");}
        else if (user1_choice == 3) {printf("SCISSORS\n");}
        printf(" and CPU chooses ");
        if (cpu_choice == 1) {printf("ROCK\n");}
        else if (cpu_choice == 2) {printf("PAPER\n");}
        else if (cpu_choice == 3) {printf("SCISSORS\n");}

        // compare choices -> rock is 1, paper is 2, scissors is 3
        if ( ((cpu_choice == 1) && (user1_choice == 2)) || ((cpu_choice == 2) && (user1_choice == 3)) || ((cpu_choice == 3) && (user1_choice == 1)) ) { // user wins
            user1_score += 1;
        } else if ( ((cpu_choice == 3) && (user1_choice == 2)) || ((cpu_choice == 1) && (user1_choice == 3)) || ((cpu_choice == 2) && (user1_choice == 1)) ) { // cpu wins
            cpu_score += 1;
        } else { // draw

        }
    } while (user1_choice != 4);

    printf("Thanks for playing Rock, Paper, Scissors!\n");
    
    return 0;
}