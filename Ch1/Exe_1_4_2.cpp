#include<iostream>
using namespace std;

int main(){
    cout<<"\nExercise 1.12: What does the following for loop do? What is the final value of sum?";
    cout<<"\nThe sum of the numbers from -100 to 100.";
    int sum = 0;
    for (int i = -100; i <= 100; ++i){
        sum += i;
    }
    cout << "The final value of sum is " << sum;

    cout << "\n\nExercise 1.13: Rewrite the first two exercises from § 1.4.1 (p. 13) using for loops.";

    cout << "\n\nExercise 1.10: In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.";
    int start = 10;
    for(int i=start; i>0; i--){
        cout << "\n"
             << i;
    }

    cout << "\n\nExercise 1.11: Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.";
    cout << "\nPlease input a range:";
    int head=0, tail=0;
    cout << "\nStarts from:";
    cin >> head;
    cout << "\nEnds with:";
    cin >> tail;

    if(head >= tail){
        cout << "\nInvalid.";
    }
    else{
        for(int i=head; i<tail; i++){
            cout << i;
        }
    }

    cout << "\n\nExercise 1.14: Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?";
    cout << "\nI think while loop is more readable sometimes.";
    return 0;

}