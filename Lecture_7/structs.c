// STRUCT

#include <stdio.h>

#include <string.h>

struct Books
{

    char title[50];

    char author[50];

    char subject[100];

    int book_id;
};

int main()
{

    struct Books Book1; /* Declare Book1 of type Book */

    struct Books Book2; /* Declare Book2 of type Book */

    /* book 1 specification */

    strcpy(Book1.title, "C Programming");

    strcpy(Book1.author, "Nuha Ali");

    strcpy(Book1.subject, "C Programming Tutorial");

    Book1.book_id = 6495407;

    /* book 2 specification */

    strcpy(Book2.title, "Telecom Billing");

    strcpy(Book2.author, "Zara Ali");

    strcpy(Book2.subject, "Telecom Billing Tutorial");

    Book2.book_id = 6495700;

    /* print Book1 info */

    printf("Book 1 title : %s\n", Book1.title);

    printf("Book 1 author : %s\n", Book1.author);

    printf("Book 1 subject : %s\n", Book1.subject);

    printf("Book 1 book_id : %d\n", Book1.book_id);

    /* print Book2 info */

    printf("Book 2 title : %s\n", Book2.title);

    printf("Book 2 author : %s\n", Book2.author);

    printf("Book 2 subject : %s\n", Book2.subject);

    printf("Book 2 book_id : %d\n", Book2.book_id);

    return 0;
}

// // Pointer to Struct

// #include <stdio.h>

// #include <string.h>

// struct Books
// {

//     char title[50];

//     char author[50];

//     char subject[100];

//     int book_id;
// };

// /* function declaration */

// void printBook(struct Books *book); // INPUT a pointer

// int main()
// {

//     struct Books Book1; /* Declare Book1 of type Book */

//     struct Books Book2; /* Declare Book2 of type Book */

//     /* book 1 specification */

//     strcpy(Book1.title, "C Programming");

//     strcpy(Book1.author, "Nuha Ali");

//     strcpy(Book1.subject, "C Programming Tutorial");

//     Book1.book_id = 6495407;

//     /* book 2 specification */

//     strcpy(Book2.title, "Telecom Billing");

//     strcpy(Book2.author, "Zara Ali");

//     strcpy(Book2.subject, "Telecom Billing Tutorial");

//     Book2.book_id = 6495700;

//     /* print Book1 info by passing address of Book1 */

//     printBook(&Book1);

//     /* print Book2 info by passing address of Book2 */

//     printBook(&Book2);

//     return 0;
// }

// void printBook(struct Books *book)
// {

//     printf("Book title : %s\n", book->title);

//     printf("Book author : %s\n", book->author);

//     printf("Book subject : %s\n", book->subject);

//     printf("Book book_id : %d\n", book->book_id);
// }

// *************************************************************************

// // Struct as Function Argument

// #include <stdio.h>

// #include <string.h>

//                                                                         struct Books
// {

//     char title[50];

//     char author[50];

//     char subject[100];

//     int book_id;
// };

// /* function declaration */

// void printBook(struct Books book);

// int main()
// {

//     struct Books Book1; /* Declare Book1 of type Book */

//     struct Books Book2; /* Declare Book2 of type Book */

//     /* book 1 specification */

//     strcpy(Book1.title, "C Programming");

//     strcpy(Book1.author, "Nuha Ali");

//     strcpy(Book1.subject, "C Programming Tutorial");

//     Book1.book_id = 6495407;

//     /* book 2 specification */

//     strcpy(Book2.title, "Telecom Billing");

//     strcpy(Book2.author, "Zara Ali");

//     strcpy(Book2.subject, "Telecom Billing Tutorial");

//     Book2.book_id = 6495700;

//     /* print Book1 info */

//     printBook(Book1);

//     /* Print Book2 info */

//     printBook(Book2);

//     return 0;
// }

// void printBook(struct Books book)
// {

//     printf("Book title : %s\n", book.title);

//     printf("Book author : %s\n", book.author);

//     printf("Book subject : %s\n", book.subject);

//     printf("Book book_id : %d\n", book.book_id);
// }

//  ***************************************************************************

// // UNION

// // only one data type can exist at any given time in a union

// // The size allocated for a union will be the largest type.

// #include <stdio.h>

// #include <string.h>

//     // size allocated is 20 bytes. Regardless of which data you use. This way computer can change it at runtime

//     union Data
// {

//     int i; // 4 bytes

//     float f; // 4 bytes

//     char str[20]; // 20 bytes
// };

// int main()
// {

//     union Data data;

//     printf("Memory size occupied by data : %d\n", sizeof(data));

//     return 0;
// }

// // accessing variable in union. NOTE: only one can exist

// #include <stdio.h>

// #include <string.h>

// union Data
// {

//     int i;

//     float f;

//     char str[20];
// };

// int main()
// {

//     union Data data;

//     data.i = 10;

//     data.f = 220.5; // writes over i

//     strcpy(data.str, "C Programming"); // writes over f

//     printf("data.i : %d\n", data.i); // print out garbage will read 4 bytes interpret as whole number

//     printf("data.f : %f\n", data.f); // print out garbage will read 4 bytes intrepret as

//     printf("data.str : %s\n", data.str); // print out "C Programming"

//     return 0;
// }

// // another example

// #include <stdio.h>

// #include <string.h>

// union Data
// {

//     int i;

//     float f;

//     char str[20];
// };

// int main()
// {

//     union Data data;

//     data.i = 10;

//     printf("data.i : %d\n", data.i);

//     data.f = 220.5;

//     printf("data.f : %f\n", data.f);

//     strcpy(data.str, "C Programming");

//     printf("data.str : %s\n", data.str);

//     return 0;
// }