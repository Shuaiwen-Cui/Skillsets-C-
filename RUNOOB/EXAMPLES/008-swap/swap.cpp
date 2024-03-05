#include <iostream>
using namespace std;

int main(void)
{
    int a, b, temp;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Before swapping, a = " << a << " and b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping, a = " << a << " and b = " << b << endl;

    return 0;
}