#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;

    cout << "input three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            cout << "max number: " << n1 << endl;
        }
        else
        {
            cout << "max number: " << n3 << endl;
        }
    }
    else
    {
        if (n2 >= n3)
        {
            cout << "max number: " << n2 << endl;
        }
        else
        {
            cout << "max number: " << n3 << endl;
        }
    }

    return 0;
}