//Recursion Lab - April 3rd, 2017

#include <iostream>
#include <iomanip>

using namespace std;

//Function prototypes
int factorial(int n);
int secondFactorial(int n);

int main()
{
    cout << "Please enter a number for the first factorial: ";
    int number;
    cin >> number;
    cout << endl;
    
    cout << "Please enter a number for the second factorial: ";
    int secondNumber;
    cin >> secondNumber;
    cout << endl;
    
    
    int answer = factorial(number);
    int secondAnswer = secondFactorial(secondNumber);
    
    cout << "The factorial of " + to_string(number) + " = " + to_string(answer) << endl;
    cout << "The factorial of " + to_string(secondNumber) + " = " + to_string(secondAnswer) << endl;
    
    return 0;
}



// Tail-end recursion?
int factorial(int n)
{
    if (n == 1)
    {
        return n;
    }
    return n * factorial(n - 1);
}



int secondFactorial(int n)
{
    while(n != 1)
    {
        return n *= factorial(n - 1);
    }
    return n;
    
}






