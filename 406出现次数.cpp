#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = tolower(ch);
            counts[ch - 'a']++;
        }
    }
}

int main() {
    const int size = 9999; 
    char str[size];
    int counts[26];  
    cout << "Enter a string: ";
    cin.getline(str, size);
    count(str, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}