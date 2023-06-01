//Viết chương trình nhận vào chiều cao h của một hình tam giác (h > 0). Xuất ra màn hình tam giác có chiều cao h dưới dạng các dấu *.
#include <iostream>
#include <iomanip>
using namespace std;
void cauA(int h);
void cauB(int h);
void cauC(int h);
void cauD(int h);
void cauE(int h);
void cauF(int h);
int main() {
    int h, dem;
    cout << "Nhap chieu cao: ";
    cin >> h;
    cauA(h);
    cauB(h);
    cauC(h);
    cauD(h);
    cauE(h);
    cauF(h);
    return 0;
}
void cauA(int h) {
    if (h < 1) return;
    cout << "*\n";
    for (int i = 2; i <= h - 1; i++) {
        cout << "*" << setw(i) << "*\n";
    }
    for (int i = 1; i <= h; i++) {
        cout << "*";
    }
    cout << endl;
}

void cauB(int h) {
    if (h < 1) return;
    for (int i = 0; i < h; i++)
    {
        cout << setw(h - i);
        for (int j = h - i; j <= h; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;
}
void cauC(int h) {
    if (h < 1) return;
    for (int i = h; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;
}
void cauD(int h) {
    if (h < 1) return;
    for (int i = h; i >= 1; i--) {
        cout << setw(h - i + 1);
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;
}
void cauE(int h) {
    if (h < 1) return;
    for (int i = 1; i <= h; i++)
    {
        cout << setw(h - i + 2);
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
void cauF(int h) {
    if (h < 1) return;
    for (int i = 1; i <= h; i++)
    {
        cout << setw(h - i + 2);
        if (i == 1) {
            cout << "* ";
        }
        else if (i > 1 && i < h) {
            cout << "* " << setw(2 * i - 2) << "* ";
        }
        else {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;
}