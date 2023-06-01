//6. Viết các hàm sau đây :
//a. void menu() : hiển thị menu gồm 4 phép tính cộng, trừ, nhân, chia
//b. int cong(int a, int b) : cộng hai số nguyên
//c. int tru(int a, int b) : trừ hai số nguyên.
//d. double chia(int a, int b) : chia hai số nguyên.
//e.Chương trình in ra menu, yêu cầu người dùng nhập vào hai số nguyên và chọn
//phép toán.Sau đó in ra kết quả.Giao diện chương trình có dạng như sau :
//1. Cong
//2. Tru
//3. Nhan
//4. Chia
//Nhap 2 so nguyen : 4 5
//Chon(1 - 4) : 1
//4 + 5 = 9
//Tiep tuc(C / K) : c
//Nhap 2 so nguyen : 5 2
//Chon(1 - 4) : 4
//5 / 2 = 2.5
//Tiep tuc(C / K) : k
#include <iostream>
#include<iomanip>
void displaymenu();
int Cong(int a, int b);
int Tru(int a, int b);
int Nhan(int a, int b);
double Chia(int a, int b);
using namespace std;


int main()
{
    //hien thi menu
    displaymenu();
    int luachon;
    int a;
    int b;
    char confirm;
    do
    {
        system("cls");
        cout << "Nhap lua chon cua ban (1-5) :";
        cin >> luachon;
        cout << "Nhap hai so nguyen :";
        cin >> a >> b;
        switch (luachon)
        {
        case 1: cout << "Ket qua:" << Cong(a, b); break;
        case 2: cout << "Ket qua:" << Tru(a, b); break;
        case 3: cout << "Ket qua:" << Nhan(a, b); break;
        case 4: cout << "Ket qua:" << endl;
            /*double kq = Chia(a, b);*/
            if (Chia(a,b) != double(INT_MAX))
                cout << Chia(a, b);
            else
                cout << "Loi chia cho 0";
            break;
        default: cout << "Khong hop le";
            break;
        }
        cout << "\nNhan C / K de tiep tuc:";
        cin >> confirm;
    } while (confirm == 'C' || confirm == 'c' || confirm == 'K' || confirm == 'k');
    system("pause");
}
void displaymenu()
{
    cout << "===================================================" << "\n";
    cout << "                         MENU                                  " << "\n";
    cout << "===================================================" << "\n";
    cout << "1. Cong" << "\n";
    cout << "2. Tru" << "\n";
    cout << "3. Nhan" << "\n";
    cout << "4. Chia" << "\n";
}
int Cong(int a, int b)
{
    return(a + b);
}

int Tru(int a, int b)
{
    return(a - b);
}

int Nhan(int a, int b)
{
    return(a * b);
}
double  Chia(int a, int b)
{
    if (b != 0)
        return (double)a / b;
    else
        return (double)INT_MAX; // Giá tri lớn nhất số nguyên
}


