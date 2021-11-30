/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julian Londono
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number = 0;

    cout << "enter an integer ";
    if (cin >> number)
    {
        if ((number % 2) == 0)
            cout << "the value " << number << " is even";
        else
            cout << "the value " << number << " is odd";
    }
    else
        cout << "the value is invalid";

    return 0;
}