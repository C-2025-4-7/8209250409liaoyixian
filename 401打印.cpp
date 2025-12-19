#include <iostream>
using namespace std;

int main() {
    int distinct[10]; 
    int count = 0;     

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        bool found = false;
        for (int j = 0; j < count; j++) {
            if (distinct[j] == num) {
                found = true;
                break;
            }
        }

        if (!found) {
            distinct[count] = num;
            count++;
        }
    }

    cout << "The distinct numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;

    return 0;
}