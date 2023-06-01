//Viết chương trình nhận vào 2 số nguyên dương n1 và n2(n1 < n2).
//Đếm xem từ n1 đến n2 có bao nhiêu số chẵn ? bao nhiêu số lẻ ? bao nhiêu số là ước của 10 ?
#include<iostream>
using namespace std;
int main() {
    int a, b;
    int  demchan = 0, demle = 0, demuoc = 0;
    do
    {
        cout << " Nhap vao n1, n2 ( n1 < n2) : ";
        cin >> a >> b;
        if (a > b || a == 0 || b == 0)
            cout << " Nhap sai! Hay nhap lai :";
    } while (a > b || a == 0 || b == 0);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            demchan++;
        if (i % 2 == 1)
            demle++;
        if (10 % i == 0)
            demuoc++;

    }
    cout << "So luong cac chu so chan tu" << a << " den " << b << " la: " << demchan << endl;
    cout << "So luong cac chu so le tu  " << a << " den " << b << " la:" << demle << endl;
    cout << "So luong cac chu so uoc cua 10 la: " << demuoc << endl;
    system("pause");
    return 0;
}