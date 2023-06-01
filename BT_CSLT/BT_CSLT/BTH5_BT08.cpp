//Viết chương trình nhận vào 1 số nguyên dương n(n > 0).
//Tính và xuất tổng các số lẻ từ 1 đến n.Ví dụ : n = 4 thì kết quả là 4.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int tong = 0;
    do
    {
        cout << "Nhap so nguyen duong n (n > 0) : ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Nhap sai! Nhap lai (n > 0) : ";
            cin >> n;
        }
    } while (n <= 0);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
            tong += i;
    }
    cout << "Tong cac so le tu 1 den " << n << " la : " << tong << endl;
    system("pause");
    return 0;
}