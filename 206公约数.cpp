#include <iostream>
using namespace std;
int main() 
{
    int a, b;
    cout << "请输入两个正整数: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "请输入正整数" << endl;
        return 1;
    }
    int gys = 1;
    int smaller = (a < b) ? a : b;
    for (int i = smaller; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
           gys = i;
            break;  
        }
    }
    int gbs;
    int larger = (a > b) ? a : b;
    for (int i = larger; ; i++) {
        if (i % a == 0 && i % b == 0) {
            gbs = i;
            break;
        }
    }
    cout << "最大公约数: " << gys << endl;
    cout << "最小公倍数: " << gbs << endl;
    return 0;
}
