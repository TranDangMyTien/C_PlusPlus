//Viết chương trình tìm tổng các số lẻ lớn hơn 0 trong mảng.
#include<iostream>

using namespace std;

int main() {
    int n;
    const int MAX = 100;
    int arr[MAX];
    int sum = 0;
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
        if (arr[i] % 2 != 0 && arr[i] > 0) {
            sum += arr[i];
        }
    }
    cout <<"Tong cac so le > 0 trong mang la : " << sum <<endl;
    system("pause");
    return 0;
}