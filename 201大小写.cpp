#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "请输入一个字符：";
    cin >> ch;
    if (ch >= 97 && ch <= 122) {
        char upperCh = ch - 32;
        cout << "转换结果: " << upperCh << endl;
    }
    else {
        int nextascll = ch + 1;
        cout << "下一位的ASCLL码是：" << nextascll + 1 << endl;
    }
    return 0;
}