#include <iostream>
#include "../Sales_item.h"
/*
Exercise 1.20: http://www.informit.com/title/0321714113 contains a copy of 
Sales_item.h in the Chapter 1 code directory. Copy that file to your working 
directory. Use it to write a program that reads a set of book sales transactions, 
writing each transaction to the standard output.
*/
int main()
{
    Sales_item book;
    // read ISBN, number of copies sold, and sales price
    std::cin >> book;
    // write ISBN, number of copies sold, total revenue, and average price
    std::cout << book << std::endl;
    return 0;
}