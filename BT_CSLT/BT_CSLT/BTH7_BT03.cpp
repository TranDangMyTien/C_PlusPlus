//3. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết :
//a.Hàm tính n!(n là số nguyên không âm).
//b.Hàm tính tổ hợp n chập k theo công thức 
//c.Hàm in tam giác Pascal có chiều cao h
#include<iostream>
#include<iomanip>
using namespace std;
long long gt(int n);
long long C(int k, int n);
int main()
{
    int n;
    cout << "Nhap chieu cao tam giac : ";
    cin >> n;
    cout << "TAM GIAC PASCAL CO DANG \n";
    cout << "  k |  " << setw(6);
    for (int i = 0; i < n; i++)
        cout << i << setw(8);
    cout << endl;
    cout << setw(1);
    for (int i = 0; i < 2 * n; i++)
        cout << "_" << setw(4);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(3) << i << " | ";
        for (int k = 0; k <= i; k++)
            cout << setw(8) << C(k, i);
        cout << endl;
    }
    system("pause");
    return 0;
}
long long gt(int n) 
{
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++)
        giaiThua *= i;
    return giaiThua;
}
long long C(int k, int n) 
{
    return  gt(n) / (gt(k) * gt(n - k));
}

