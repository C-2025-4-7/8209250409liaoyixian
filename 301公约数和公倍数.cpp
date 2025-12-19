#include <iostream>
using namespace std;
int gys(int a, int b) {
    while (b != 0) {
        int result = b;
        b = a % b;
        a = result;
    }
    return a;
}
void compute(int a, int b, int& gys_result, int& gbs_result) {
    int m = a, n = b;
    while (b != 0) {
        int result = b;
        b = a % b;
        a = result;
    }
    gys_result = a;
    gbs_result = m / gys_result * n;
}

int main() {
    int m, n;
    cout << "请输入两个自然数m和n: ";
    cin >> m >> n;
    if (m <= 0 || n <= 0) {
        cout << "请输入正整数" << endl;
        return 1;
    }
    int gys1 = gys(m, n);
    cout << "(1)结果：" << endl;
    cout << m << "和" << n << "的最大公约数是：" << gys1 << endl;
    int gys_result, gbs_result;
    compute(m, n, gys_result, gbs_result);
    cout << "\n(2)结果：" << endl;
    cout << m << "和" << n << "的最大公约数是：" << gys_result << endl;
    cout << m << "和" << n << "的最小公倍数是：" << gbs_result << endl;
    return 0;
}