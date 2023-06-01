//Viết chương trình nhận vào 1 số nguyên dương n(n > 0).Xuất ra màn hình bảng
//cửu chương ứng với số nguyên n.Ví dụ n = 3 thì kết quả xuất ra màn hình :
//3 x 1 = 3
//3 x 2 = 6
//…
//3 x 10 = 30
#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Nhap so nguyen n (n > 0) : ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Nhap sai ! Nhap lai so nguyen n (n > 0) : ";
            cin >> n;
        }
    } while (n <= 0);
    cout << "Bang cuu chuong " << n << " la :" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "   " << n << " x " << i << " = " << n * i << endl;
    }
    system("pause");
    return 0;
}