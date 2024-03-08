#include <iostream>
using namespace std;
int main()
{
    int x, y, n;
    for(x = 1, n = 0; n < 9; y=(x+1)*2, x = y, n++)
    {
        cout << "第" << n+1 << "次猴子分桃时有" << x << "个桃子" << endl;
    }

    cout << "猴子分桃时共有" << x << "个桃子" << endl;

    return 0;
}