//11.Viết hàm kiểm tra một số nguyên n có phải là số đối xứng(Palindrome) hay không ?
//Viết chương trình kiểm tra hàm vừa viết.Biết rằng số đối xứng là số có số đảo ngược
//của nó bằng chính nó.
#include <iostream>
using namespace std;
int check(int);

int main()
{
    int soBanDau, soSau;
    cout << "Nhap vao mot so: ";
    cin >> soBanDau;
    if (soBanDau <= 0)
        cout << "Nhap sai vui long nhap lai ! ";
    soSau = check(soBanDau);
    if (soBanDau == soSau)
        cout << soBanDau << " La so doi xung\n";
    else
        cout << soBanDau << " Khong la so doi xung\n";
    system("pause");
    return 0;
}
int check(int soBanDau) //soBanDau=1221
{
    int soSau = 0, soDu;
    while (soBanDau > 0)
    {
        soDu = soBanDau % 10; //soDu
        soSau = soSau * 10 + soDu;
        soBanDau /= 10;
    }
    return soSau;
}