/*
Author: Nicholas Eby
Date: 4.24.2023
Title: Library Management System
Purpose: This project is mean to mock a library management system in order for me to better practice C programming.
*/


#include <stdio.h>
#include <sqlite3.h>


int main() {

    printf("Welcome to The County Library Management System!\n");

    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "Opened database successfully.\n");
    }
    sqlite3_close(db);


    return 0;
}