#include <iostream>
#include "../Sales_item.h"
/*
Exercise 1.23: Write a program that reads several 
transactions and counts how many transactions occur for each ISBN.
*/
int main()
{
    // currBook is the transactions we're counting; we'll read new values into val
    Sales_item currBook, book;
    // read first book and ensure that we have data to process
    if (std::cin >> currBook) {
        int cnt = 1;  // store the count for the current book we're processing
        while (std::cin >> book) { // read the remaining books
            if (book.isbn() == currBook.isbn())   // if the books are the same
                {++cnt;            // add 1 to cnt
                currBook += book;}
            else { // otherwise, print the count for the previous book
                std::cout << currBook << " occurs "
                          << cnt << " times" << std::endl;
                currBook = book;    // remember the new book
                cnt = 1;          // reset the counter
            }
        }  // while loop ends here
        // remember to print the count for the last book in the file
        std::cout << currBook <<  " occurs "
                  << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}