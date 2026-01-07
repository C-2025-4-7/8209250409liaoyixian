#include <iostream>
using namespace std;
class Cuboid
{
private:
    double length;
    double width;
    double height;

public:
    void input()
    {
        cin >> length >> width >> height;
    }
    double volume()
    {
        return length * width * height;
    }
    void output()
    {
        cout << "第1，2，3个长方柱的体积分别为：" << volume() << endl;
    }
};

int main()
{
    Cuboid c[3]; 
        cout << "请输入第1个长方柱的长，宽，高：" << endl;
        c[0].input();
        cout << "请输入第2个长方柱的长，宽，高：" << endl;
        c[1].input();
        cout << "请输入第3个长方柱的长，宽，高：" << endl;
        c[2].input();
        c[0].output();
        c[1].output();
        c[2].output();
    return 0;
}
