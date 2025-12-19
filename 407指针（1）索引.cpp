#include <iostream>
#include <cstring> 
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool found = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int MAX_LENGTH = 9999;  
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];
    cout << "Enter the first string: ";
    cin.getline(s1, MAX_LENGTH);
    cout << "Enter the second string: ";
    cin.getline(s2, MAX_LENGTH);
    int result = indexof(s1, s2);
    cout << "indexof(\"" << s1 << "\", \"" << s2 << "\")is " << result << endl;

    return 0;
}