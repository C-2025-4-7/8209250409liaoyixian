#include <iostream>
using namespace std;

int main() {
float a, b;
char op;
cout << "请输入正确的表达式（形如a+b，支持+-*/%运算）";
cin >> a >> op >> b;
switch (op)
{
case'+':
    float c = a + b;
    cout << a << '+' << b << '=' << c << endl;
    break;
case'-':
    float c = a - b;
    cout << a << '-' << b << '=' << c << endl;
    break;
case'*':
    float c = a * b;
    cout << a << '*' << b << '=' << c << endl;
case'/':
    if (b != 0) {
        float c = a / b;
        cout << a << '/' << b << '=' << c << endl;
    }
    else
        cout << "请输入正确的表达式！" << endl;
    break;
case '%':
    if (b== 0) {
        cout << "除数不能为0！" << endl;
    }
    else if (static_cast<int>(a) != a || static_cast<int>(b) != b) {
        cout << "请输入整数！" << endl;
    }
    else {
        int result = static_cast<int>(a) % static_cast<int>(b);
        cout << static_cast<int>(a) << " % " << static_cast<int>(b) << " = " << result << endl;
    }
    break;

default:
    cout << "不支持运算符 '" << op << "'" << endl;
    cout << "请使用以下运算符: +, -, *, /, %" << endl;
    break;
}

return 0;
}