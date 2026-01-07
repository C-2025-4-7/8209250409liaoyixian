#include <iostream>
using namespace std;
class Student 
{
public:
    int id;       
    float score;
};
void max(Student p[], int n) 
{
    int maxIndex = 0;  
    for (int i = 1; i < n; i++) {
        if (p[i].score > p[maxIndex].score) {
            maxIndex = i;
        }
    }
    cout << "成绩最高的学生的学号是：" << p[maxIndex].id << endl;
}
int main() 
{
    Student s[5];
    for (int i = 0; i < 5; i++) {
        cout << "请输入第" << i + 1 << "个学生的学号和成绩：";
        cin >> s[i].id >> s[i].score;
    }
    max(s, 5);
    return 0;
}
