# CPractice
 Practicing my C programming...

Nicholas Eby
Date: 4.19.2023
Purpose: To practice my C programming abilities.

Challenges for Programming in C
1. FizzBuzz: Write a program that prints the numbers from 1 to 100. For multiples of three, print "fizz" instead of the number. 
For multiples of five, print "buzz" instead of the number. For numbers that are multiiples of both three and five, print "fizzbuzz".
2. Sum of Array: Write a program that takes an array of integers and calculates the sum of all the elements.
3. Reverse String: Write a program that takes a string as input and prints it in reverse order.
4. Palindrome: Write a program that takes a string as input and checks whether it is a palindrome or not (i.e., whether it reads the same forwards and backwards).
5. Prime Numbers: Write a program that prints all prime numbers between 1 and 100.
6. Sorting: Write a program that sorts an array of integers in ascending or descending order.
7. Fibonacci Sequence: Write a program that prints the first 20 numbers in the Fibonacci sequence.
8. Rock Paper Scissors: Write a program that lets the user play a game of rock-paper-scissors against the computer.
9. Caesar Cipher: Write a program that encrypts and decrypts messages using the Caesar cipher.
10. Binary Search: Write a program that performs a binary search on a sorted array of integers to find a specific value.


My C Project
Date: 4.24.2023
Project Title: Library Management System
Description: Create a program that manages a library's collection of books. The program should allow librarians to add new books to the collection, 
search for books by title or author, check out books to library patrons, and keep track of due dates and late fees.
Features:
* A database of books and their information (e.g. title, author, ISBN, publication date, etc.).
* A search function to allow patrons to find books by title or author.
* Members can checkout, return, and search books. Member borrowing history is saved.
* Librarians can add new books, delete old books, update book info, view book info, track member book due dates and late fees.
* Administrator can CRUD member, librarian, and book info.
* Updating book availability
Extra:
* A user-friendly interface for librarians and patrons to interact with the system.
* The system can also generate reports on various aspects of the library => Number of books borrowed by a member, Number of books in each category, Number of books borrowed and returned, Overdue books
* An automatic system to send email reminders to patrons whose books are overdue.


Programming skills: data structures, algorithms, file handling, database handling, memory management, and user interface design. 
Experience in creating a practical, real-world application that can be useful for a variety of different organizations.

Tools: C, SQLite3
You can also use a GUI library like GTK or ncurses to create a user-friendly interface for library staff to interact with the system.



Data Models

Book
-Title, Author, ISBN, Genre, Year Published, numCopies, availableCopies, Due Date
<>Update Info

Administrator
-username, password
<>add librarian
<>delete librarian

Librarian
-username, password
<>search books
<>add new book to archive
<>remove book from archive
<>update book from archive

Members
-username, password
<>search books
<>check out book
<>return book


SQLite3
-SQLite3 comes already installed on MacOS
-Just added necessary code in main.c to create a pointer to the database and use that pointer to open and close it
-main.db file is used for SQLite operations

SQLite Data Types -> Null, Integer, Text (string), Real (float), Blob (other form of data)

Compiling with SQLite Command
$gcc main.c -l sqlite3

Running
$./a.out



GTK - [IN PROGRESS]
To activate this project's virtualenv, run pipenv shell.
Alternatively, run a command inside the virtualenv with pipenv run.
Installing jhbuild configuration at /Users/nicholaseby/.config/jhbuildrc
Installing jhbuild custom configuration at /Users/nicholaseby/.config/jhbuildrc-custom










Sample SQL Statements..

    sql = "CREATE TABLE BOOK (" \
        "ISBN TEXT PRIMARY  KEY     NOT NULL," \
        "TITLE              TEXT    NOT NULL," \
        "AUTHOR             TEXT    NOT NULL," \
        "GENRE              TEXT," \
        "YEAR               INT     NOT NULL," \
        "COPIES             INT     NOT NULL," \
        "AVAILABLE          INT     NOT NULL);";

    sql = "DROP TABLE COMPANY;";

    sql = "INSERT INTO BOOK (ISBN, TITLE, AUTHOR, GENRE, YEAR, COPIES, AVAILABLE) " \
        "VALUES ('9781983229282', 'Title Here', 'Nathan Metzler', 'Computer Science', 0, 1, 1);";

    sql = "SELECT * FROM BOOK";

    sprintf(sql, addBook("9781402709876", "Kids Quickest Comebacks", "Phillip Yates and Matt Rissinger", "Kids", 2004, 1, 1));

    sql = addBook("9781402709876", "Kids Quickest Comebacks", "Phillip Yates and Matt Rissinger", "Kids", 2004, 1, 1);