//6. Viết hàm tính số đảo ngược của một số nguyên dương n.Viết chương trình kiểm tra
//hàm đã viết.
#include <iostream>
using namespace std;
int timSoDaoNguoc(int n);
bool ktSoNhapVao(int n);
int main()
{
    int n;
    cout << "Nhap so nguyen n (n > 0) : ";
    cin >> n;
    int soDao = timSoDaoNguoc(n);
    if (ktSoNhapVao(n) == true)
        cout << "So dao nguoc cua " << n << " la :" << soDao << endl;
    else
        cout << "Nhap so nguyen duong n khong hop le !\n";
    system("pause");
    return 0;
}
int timSoDaoNguoc(int n)
{
    int t;
    int r = 0;
    while (n > 0)
    {  // vd n=345
        t = n % 10;    // t=5   ; t=4  ; t=3
        r = r * 10 + t;  // r=5  ; r= 5*10 + 4 = 54 ; r= 54*10 + 3 = 543
        n = n / 10;  // n=34  ; n=3 ; n=0 dừng
    }
    return r;
}
bool ktSoNhapVao(int n)
{
    if (n <= 0)
        return 0;// false
    return 1; // true
}
