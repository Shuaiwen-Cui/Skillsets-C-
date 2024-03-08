#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    
    cout << "input two integers:" << endl;
    cin >> n1 >> n2;

    while (n1 != n2)
    {
        if (n1 > n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }
    }

    cout << "HCF = " << n1 << endl;

    return 0;

}