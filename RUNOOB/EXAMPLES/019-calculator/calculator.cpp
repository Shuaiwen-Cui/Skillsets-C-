#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "input operator either + or - or * or /: ";
    cin >> op;

    cout << "input two numbers: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}