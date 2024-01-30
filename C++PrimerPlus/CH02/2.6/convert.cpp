// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetoIb(int); // function prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetoIb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetoIb(int sts)
{
    return 14 * sts;
}