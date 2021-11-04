//
// Created by Jan Metzger on 04.11.21.
//

#include <iostream>
#include "main.h"
using namespace std;

double sum(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    if (b != 0){
        return a/b;
    }
    cout << "dividing by 0 is not allowed";
}

int main(void) {
    char arithmetic_type;
    double inputNumberOne, inputNumberTwo;
    double result;

    cout << "This is a c++ calculator" << endl;
    cout << "Enter the calculation type ( + | - | * | / | )";
    cin >> arithmetic_type;

    cout << "Enter the first number: ";
    cin >> inputNumberOne;

    cout << "Enter the second number: ";
    cin >> inputNumberTwo;

    switch(arithmetic_type){
        case '+':
            result = sum(inputNumberOne, inputNumberTwo);
            break;
        case '-':
            result = subtract(inputNumberOne, inputNumberTwo);
            break;
        case '*':
            result = multiply(inputNumberOne, inputNumberTwo);
            break;
        case '/':
            result = divide(inputNumberOne, inputNumberTwo);
            break;
        default:
            cout << "The arithmetic type is not available";
    }
    cout << "The result is: " << result << endl;
}




