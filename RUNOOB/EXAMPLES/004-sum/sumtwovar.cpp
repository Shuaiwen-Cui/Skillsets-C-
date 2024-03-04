/**
 * @file sumtwovar.cpp
 * @author your name (you@domain.com)
 * @brief sum two variables
 * @version 0.1
 * @date 2024-03-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>

int main()
{
    using namespace std;

    int a, b;
    int sum;

    cout << "Please enter two numbers:";
    cin >> a >> b;

    sum = a + b;

    cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    return 0;
}