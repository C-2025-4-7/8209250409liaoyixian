#include <iostream>
using namespace std;
class Point {
private:
    int x; 
    int y;  

public:
    Point(int a = 60, int b = 80) {
        x = a;
        y = b;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() 
{
    Point p;
    cout << "原坐标：";
    p.display();
    int i, j;
    cout << "请分别输入x和y的变化量: ";
    cin >> i >> j;
    p.setPoint(i, j);
    cout << "修改后的坐标：";
    p.display();
    return 0;
}