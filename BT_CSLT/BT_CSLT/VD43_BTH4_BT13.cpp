//Viết chương trình nhận vào một dãy số nguyên liên tục và kết thúc bằng tổ hợp
//phím Ctrl + Z.Sau đó xuất ra màn hình giá trị số lớn nhất, số nhỏ nhất và tổng
//của các số vừa nhập.
#include <iostream>
#include <conio.h>z
using namespace std;

int main()
{
    char key;
    int num;
    int total = 0;
    int min = INT_MAX, max = INT_MIN;

    cout << "- Nhap lien tuc cac so\n(sau moi so nhan phim bat ki, neu la Ctrl + Z thi ket thuc)" << endl;
    do {
        cin >> num;
        cin.ignore();
        if (min > num)
            min = num;
        if (max < num)
            max = num;
        total += num;
        key = _getch();
    } while (int(key) != 26); //Ctrl + Z 

    cout << "- Tong: " << total << endl;
    cout << "- MIN: " << min << endl;
    cout << "- MAX: " << max << endl;

    return 0;
}