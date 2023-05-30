#include <iostream>
using namespace std;

int main()
{
    cout << "\nExercise 1.17: What happens in the program presented in this section if the input values are all equal? What if there are no duplicated values?";
    cout << "If the input values are all equal, it will stuck in the while loop.";
    cout << "\nWhat if there are no duplicated values? It will never show occur times.";

    cout << "Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p. 13) that printed a range of numbers so that it handles input in which the first number is smaller than the second.";

    cout << "\n\n§ 1.4.1 (p. 13) Exercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.";
    cout << "\nPlease input a range:";
    int head = 0, tail = 0;
    cout << "\nStarts from:";

    if (cin >> head)
    {
        cout << "\nEnds with:";
        cin >> tail;
        while (tail <= head)
        {
            cout << "\nValid ends with:";
            cin >> tail;
        }
        while (head < tail)
        {
            cout << "\n"
                 << head;
            head++;
        }
    }

    return 0;
}