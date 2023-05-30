#include <iostream>
#include "../Sales_item.h"
using namespace std;
/*
Exercise 1.22: Write a program that reads several 
transactions for the same ISBN. Write the sum of 
all the transactions that were read.
*/
int main()
{
    Sales_item book1, book2, book3;
    // read ISBN, number of copies sold, and sales price
    cout << "\nPlease input book1:";
    cin >> book1;
    cout << "\nPlease input book2:";
    cin >> book2;
    cout << "\nPlease input book3:";
    cin >> book3;
    // write ISBN, number of copies sold, total revenue, and average price
    cout << book1 << endl;
    cout << book2 << endl;
    cout << book3 << endl;
    cout << book1 + book2 + book3 << endl;
    return 0;
}