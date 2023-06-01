//10.Dựa trên hàm hoán đổi giá trị 2 số đã xây dựng ở bài tập 5, viết các hàm sau đây và
//chương trình để kiểm tra hàm :
//a.Sắp xếp 2 số nguyên giảm dần.
//b.Sắp xếp 3 số nguyên tăng dần.
//c.Sắp xếp 3 số nguyên giảm dần
#include <iostream>
using namespace std;
void hoandoi(int& a, int& b);
void nhap(int& a, int& b);
void nhapc(int& c);
void menu();
int main ()
{
    menu();
    system("pause");
    return 0;
}
void menu()
{
    char chon;
    int a = 0, b = 0, c = 0;
    cout << "a. Sap xep 2 so giam dan \n";
    cout << "b. Sap 3 so nguyen tang dan \n";
    cout << "c. Sap 3 so nguyen giam dan \n";
    cout << "Chon chuong trinh : "; cin >> chon;
    system("cls");
    switch (chon)
    {
    case'a':case'A':
    {
        nhap(a, b);
        cout << a << " va " << b << " sap xeo theo thu tu giam dan la : ";
        if (a < b) hoandoi(a, b);
        cout << a << " > " << b << endl;
        return;
    }
    case'b':case'B':
    {
        nhap(a, b);
        nhapc(c);
        cout << a << " va " << b << " va " << c << " sap xeo theo thu tu tang dan la : ";
        while (true)
        {
            if (a >= b) hoandoi(a, b);
            if (b >= c) hoandoi(b, c);
            if (a <= b && b <= c) break;
        }
        cout << a << " < " << b << " < " << c << endl;
        return;
    }
    case 'c':case'C':
    {
        nhap(a, b);
        nhapc(c);
        cout << a << " va " << b << " va " << c << " sap xeo theo thu tu tang dan la : ";
        while (true)
        {
            if (a <= b) hoandoi(a, b);
            if (b <= c) hoandoi(b, c);
            if (a >= b && b >= c) break;
        }
        cout << a << " > " << b << " > " << c << endl;
        return;
    }
    default:
        return;
    }
}
void nhap(int& a, int& b)
{
    cout << "Nhap vao so nguyen a : "; 
    cin >> a;
    cout << "Nhap vao so nguyen b : "; 
    cin >> b;
}
void nhapc(int& c)
{
    cout << "Nhap vao so nguyen c : "; cin >> c;
}
void hoandoi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}