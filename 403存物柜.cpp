#include <iostream>
using namespace std;

int main() {
    const int n = 100;
    cout << "开着的柜子编号为：";
    bool lockers[n] = { false }; 
    for (int student = 1; student <= n; student++) {
        for (int locker = student - 1; locker < n; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }
    bool first = true; 
    for (int i = 0; i < n; i++) {
        if (lockers[i]) {
            if (!first) {
                cout << " ";
            }
            cout << i + 1;
            first = false;
        }
    }

    return 0;
}