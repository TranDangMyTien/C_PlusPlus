//Viết chương trình in ra tất cả các số lớn hơn hoặc bằng 0 và nhỏ hơn hoặc bằng 10 in arr.
#include<iostream>
#define MAX 100
using namespace std;

int main() {
    int n;
    int arr[MAX];
    do
    {
        cout << "Nhap so luong phan tu cho mang : ";
        cin >> n;
        if (n <= 0 || n > MAX)
        {
            cout << "Nhap so luong phan tu mang khong hop le !\n";
            /*system("pause");*/
        }
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++) {
        cout << "Nhap gia tri cho phan tu thu " << i + 1 << " : arr[" << i << "] = ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] <= 10) 
        {
                cout << arr[i] << " ";
        }
    }
    system("pause");
    return 0;
}