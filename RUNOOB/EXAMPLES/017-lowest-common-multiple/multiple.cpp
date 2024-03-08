#include <iostream>
using namespace std;

int main() {
    int n1, n2, max;
    cout << "输入两个正整数: ";
    cin >> n1 >> n2;

    // 选择两数中的较大数
    max = (n1 > n2) ? n1 : n2;

    do {
        if (max % n1 == 0 && max % n2 == 0) {
            cout << "最小公倍数为: " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;
}
