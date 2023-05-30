#include<iostream>
using namespace std;

int main(){
    cout<<"\nExercise 1.3: Write a program to print Hello, World on the standard output.";
    cout<<"\nHello, World";

    cout<<"\n\nExercise 1.4: Our program used the addition operator, +, to add two numbers.\n Write a program that uses the multiplication operator, *, to print the product instead.";
    int num_1, num_2;
    cout<<"\nInput Number 1:";
    cin>>num_1;
    cout<<"Input Number 2:";
    cin>>num_2;
    cout<<"The product of "<< num_1 << " and " << num_2 << " would be " << num_1 * num_2;

    cout<<"\n\nExercise 1.5: We wrote the output in one large statement. Rewrite the program to use a separate statement to print each operand.";
    cout<<"\nExercise 1.5:";
    cout<<"\nWe wrote the output in one large statement. ";
    cout<<"\nRewrite the program to use a separate statement to print each operand.";

    cout<<"\n\nExercise 1.6: Explain whether the following program fragment is legal.";
    /***
     std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
     ***/
    cout<<"\nNo, it should be like";
    cout<<"\nstd::cout << \"The sum of \" << v1"
        <<"\n<< \" and \" << v2"
        <<"\n<< \" is \" << v1 + v2 << std::endl;";

    cout<<"\nTo fix it and run:";
    int v1=2, v2=3;
    std::cout << "\nThe sum of " << v1
          << " and " << v2
          << " is " << v1 + v2 << std::endl;
    
    return 0;
}
