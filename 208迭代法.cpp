#include <iostream>
using namespace std;
int main() 
{
    double a;
    cout << "请输入一个非负数a:";
    cin >> a;
    if (a < 0) {
        cout << "不能对负数开平方" << endl;
        return 1;
    }
    if (a == 0) {
        cout << "0的平方是0" << endl;
        return 0;
    }
    double x = a;  
    while (true) {
        double new_x = 0.5 * (x + a / x); 
        double y = (new_x > x) ? (new_x - x) : (x - new_x);
        if (y < 1e-5) {
            cout << a << "的平方近似是 " << new_x << endl;
            break;
        }

        x = new_x;
    }

    return 0;
}
