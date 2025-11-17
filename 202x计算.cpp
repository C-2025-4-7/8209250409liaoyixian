#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "请输入一个值：";
    cin >> x;
    if (0 < x && x < 1)
        cout << "结果为：" << 3 - 2 * x << endl;
    else if (1 <= x && x < 5)
        cout << "结果为：" << 2 / (4 * x) + 1 << endl;
    else if (5 <= x && x < 10)
        cout << "结果为：" << x * x << endl;
    return 0;
}