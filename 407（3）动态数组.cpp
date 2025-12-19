#include <iostream>
using namespace std;
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;  
    int* dynamicArray = nullptr; 
    cout << "请输入数组元素个数: ";
    cin >> n;
    dynamicArray = new int[n];
    cout << "请输入数组元素: ";
    for (int i = 0; i < n; i++) {
        cin >> dynamicArray[i];
    }
    cout << "动态数组的指针地址: " << dynamicArray << endl;
    cout << "指针指向的内容：" << endl;
    for (int i = 0; i < n; i++) {
        cout << "dynamicArray[" << i << "] = " << dynamicArray[i]
            << " (地址: " << &dynamicArray[i] << ")" << endl;
    }
    bubbleSort(dynamicArray, n);
    cout << "排序后：" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(dynamicArray + i) << " ";
    }
    cout << endl;
    delete[] dynamicArray;
    dynamicArray = nullptr; 
    
    return 0;
}