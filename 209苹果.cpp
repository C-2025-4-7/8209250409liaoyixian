#include <iostream>
using namespace std;
int main()
{
    float price = 0.8;
    int apples = 2;
    float totalCost = 0.0;
    int days = 0;
    while (apples <= 100) {
        float cost = apples * price;
        totalCost += cost;
        days++;
        apples *= 2; 
    }
    float average = totalCost / days;
    cout << "购买天数: " << days << endl;
    cout << "总花费: " << totalCost << "元" << endl;
    cout << "每天平均花费: " << average << "元" << endl;

    return 0;
}
