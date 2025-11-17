#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r, h;
	cout << "请输入圆锥底面半径：";
	cin >> r;
	cout << "请输入圆锥的高：";
	cin >> h;
	double v = (1.0 / 3.0) * pi * r * r * h;
	cout << "圆锥的体积是：" << v << endl;
	return 0;
}