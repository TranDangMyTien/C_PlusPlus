//Viết chương trình nhận vào chiều cao h của một hình tam giác(h > 0).
// Xuất ra màn hình tam giác có chiều cao h dưới dạng các dấu* .
//Ví dụ h = 3 thì kết quả :
//*
//**
//***
#include<iostream>
using namespace std;
int main()
{
    int h;
    do
    {
        cout << "Nhap chiau cao canh tam giac: ";
        cin >> h;
        if (h <= 0)
        {
            cout << " Nhap sai! Nhap lai chieu cao tam giac (h > 0): ";
            cin >> h;
        }
    } while (h <= 0);
    for (int i = 1; i <= h; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << " "; 
        }
        cout << endl;
    }
    system("pause");
    return 0;
}