#include <iostream>
#include <cstring>   
using namespace std;
int parseHex(const char* const string) {
    int result = 0;
    int length = strlen(string);

    for (int i = 0; i < length; i++) {
        char c = string[i];
        int digit = 0;

        if (c >= '0' && c <= '9') {
            digit = c - '0';  
        }
        else if (c >= 'A' && c <= 'F') {
            digit = 10 + (c - 'A');  
        }
        else if (c >= 'a' && c <= 'f') {
            digit = 10 + (c - 'a'); 
        }
        else {
            return 0;
        }
        result = result * 16 + digit;
    }

    return result;
}

int main() {
    const int MAX_LENGTH = 9999;
    char string[MAX_LENGTH];
    cout << "请输入一个十六进制数字： ";
    cin >> string;

    int value = parseHex(string);
    cout << string<< " 转换成十进制是 " << value << endl;
    return 0;
}