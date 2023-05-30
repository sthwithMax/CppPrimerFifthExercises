#include <iostream>
#include "../Sales_item.h"
using namespace std;
/*
Exercise 1.21: Write a program that reads two Sales_item 
objects that have the same ISBN and produces their sum.
*/
int main()
{
    Sales_item book1, book2;
    // read ISBN, number of copies sold, and sales price
    cout << "\nPlease input book1:";
    cin >> book1;
    cout << "\nPlease input book2:";
    cin >> book2;
    // write ISBN, number of copies sold, total revenue, and average price
    cout << book1 << endl;
    cout << book2 << endl;
    cout << book1 + book2 << endl;
    return 0;
}