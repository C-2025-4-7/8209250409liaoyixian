#include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;          
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;

    cout << "Ç°200¸öËØÊý£º" << endl;

    while (count < 200) {
        if (is_prime(num)) {
            cout << setw(6) << num;
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }

    return 0;
}
