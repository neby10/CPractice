/*
Author: Nicholas Eby
Date: 4.24.2023
Title: Library Management System
Purpose: This project is meant to mock a library management system in order for me to better practice C programming.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

#define TRUE 1
#define FALSE 0


static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i=0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}


// char* addBook() {
void addBook() {
    // static char query[250] = "INSERT INTO BOOK (ISBN, TITLE, AUTHOR, GENRE, YEAR, COPIES, AVAILABLE) VALUES ('";

    // char input[50];
    // printf("Please enter necessary book info.\n");

    // printf("ISBN:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, "', '");

    // printf("Title:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, "', '");

    // printf("Author:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, "', '");

    // printf("Genre:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, "', ");

    // printf("Year Published:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, ", ");

    // printf("Total Copies:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, ", ");

    // printf("Available Copies:\n");
    // scanf("%s", input);
    // strcat(query, input);
    // strcat(query, ");");

    // input[0] = '\n';

    // printf("QUERY - %s\n", query);

    // return query;

    printf("BOOK ADDED.\n");
}


int main(int argc, char* argv[]) {

    printf("Welcome to The County Library Management System!\n");


    /* Initialize Database Variables */
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    char *sql;

    /* Open Database */
    rc = sqlite3_open("main.db", &db);
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return(0);
    } else {
        fprintf(stderr, "Opened database successfully.\n");
    }

    /* Initialize Library Interactive System Variables */
    int system_on = TRUE;
    int user_choice = 0;

    while (system_on)
    {
        printf("What would you like to do?\n");
        printf("1. Search Books\n");
        printf("2. Add Book\n");
        printf("3. Delete Book\n");
        printf("4. Update Book\n");
        printf("5. Exit\n");

        scanf("%d", &user_choice);  // must be integer value or program will break

        switch (user_choice)
        {
        case 1:
            printf("You chose to search books.\n");
            break;
        case 2:
            addBook();
            // sql = addBook();
            // rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
            // if (rc != SQLITE_OK) {
            //     fprintf(stderr, "SQL ERROR: %s\n", zErrMsg);
            //     sqlite3_free(zErrMsg);
            // } else {
            //     fprintf(stdout, "No Issue.\n");
            // }
            break;
        case 3:
            printf("You chose to delete a book.\n");
            break;
        case 4:
            printf("You chose to update a book.\n");
            break;
        case 5:
            printf("Exiting system.\n");
            system_on = FALSE;
            break;        
        default:
            printf("Not an option! Try Again!\n");
            break;
        }

    }

    /* Create SQL Statement */

    // sql = "INSERT INTO BOOK (ISBN, TITLE, AUTHOR, GENRE, YEAR, COPIES, AVAILABLE) " \
    //      "VALUES ('003', 'Title Here', 'deasdflete this', 'dumasdfadsf dum', 0, 0, 0);";

    /* Execute SQL Statement */
    // rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);

    // if (rc != SQLITE_OK) {
    //     fprintf(stderr, "SQL ERROR: %s\n", zErrMsg);
    //     sqlite3_free(zErrMsg);
    // } else {
    //     fprintf(stdout, "No Issue.\n");
    // }

    /* Close Database */
    sqlite3_close(db);


    return 0;
}