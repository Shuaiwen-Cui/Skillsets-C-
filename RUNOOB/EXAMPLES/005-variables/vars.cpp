/**
 * @file vars.cpp
 * @author your name (you@domain.com)
 * @brief about different types of variables
 * @version 0.1
 * @date 2024-03-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    int myNum = 5;
    float myFloatNum = 5.99;
    double myDoubleNum = 9.98;
    char myLetter = 'D';
    bool myBoolean = true;
    string myString = "Hello";

    cout << "int: " << myNum << endl;
    cout << "float: " << myFloatNum << endl;
    cout << "double: " << myDoubleNum << endl;
    cout << "char: " << myLetter << endl;
    cout << "bool: " << myBoolean << endl;
    cout << "string: " << myString << endl;

    return 0;
}