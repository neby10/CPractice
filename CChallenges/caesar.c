/*
Author: Nicholas Eby
Date: 4.21.2023
Title: The Caesar Cipher
Purpose: This program encrypts and decrypts messages using the Caesar cipher.
*/

// NOTE #1: Only UPPERCASE LETTERS will be encrypted. (Uppercase ASCII is 65-90)
// NOTE #2: LATER TRY TO FIX COMMENTED OUT LINE IN MAIN...

#include <stdio.h>
#include <string.h>

char* encryptMessage(char msg[], int cipher) {
    int i;
    for (i = 0; i < strlen(msg); i++) {
        // check if capital letter, otherwise do nothing
        if (msg[i] >= 65 && msg[i] <= 90) {
            msg[i] = (msg[i] + cipher) % 26 + 65;
        }
    }
    return msg;
}

char* decryptMessage(char msg[], int cipher) {
    int i;
    for (i = 0; i < strlen(msg); i++) {
        // check if capital letter, otherwise do nothing
        if (msg[i] >= 65 && msg[i] <= 90) {
            msg[i] = (msg[i] - cipher) % 26 + 65;
        }
    }
    return msg;
}

int main() {
    printf("Welcome to The Caesar Cipher!\n");

    char message[] = "HELLO WORLD TUVWXYZ UIGGKG";

    int cipher = 5;

    printf("Here is your encryption: %s\n", encryptMessage(message, cipher));

    printf("Here is your decryption: %s\n", decryptMessage(message, cipher));

    // printf("Whoaaa: %s", decryptMessage(encryptMessage("HELLO WORLD", cipher), cipher));


    return 0;
}