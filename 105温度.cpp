#include <iostream>
using namespace std;
int main()
{
    double f, c;
    cout << "ÇëÊäÈë»ªÊÏÎÂ¶È: ";
    cin >> f;
    c = (f - 32) * 5 / 9;
    int i = static_cast<int>(c);
    int d = static_cast<int>(c * 100) % 100;
    if (c< 0 && i == 0) {
        cout << "ÉãÊÏÎÂ¶È: -" << abs(i) << "."
            << (abs(d) < 10 ? "0" : "") << abs(d) << "¡ãC" << endl;
    }
    else {
        cout << "ÉãÊÏÎÂ¶È: " << i<< "."
            << (abs(d) < 10 ? "0" : "") << abs(d) << "¡ãC" << endl;
    }
    return 0;
}