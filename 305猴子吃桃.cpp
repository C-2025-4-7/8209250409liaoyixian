#include <iostream>
using namespace std;
int peach(int day) {
    if (day == 10) { 
        return 1;
    }
    else {
        return 2 * (peach(day + 1) + 1);
    }
}

int main() {
    int first_day = peach(1);  
    cout << "第一天猴子共摘" << first_day << "个桃子。" << endl;

    return 0;
}