#include <iostream>
using namespace std;

int main()
{
    cout << "\nExercise 1.9: Write a program that uses a while to sum the numbers from 50 to 100.";
    int count = 50, sum = 0;
    while (count <= 100)
    {
        sum += count;
        count++;
    }
    cout << "\nThe sum of the numbers from 50 to 100 is " << sum;

    cout << "\n\nExercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.";
    int start = 10;
    while (start >= 0)
    {
        cout << "\n"
             << start;
        start--;
    }

    cout << "\n\nExercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.";
    cout << "\nPlease input a range:";
    int head = 0, tail = 0;
    cout << "\nStarts from:";
    cin >> head;
    cout << "\nEnds with:";
    cin >> tail;

    while (head < tail)
    {
        cout << head;
        head++;
    }

    return 0;
}