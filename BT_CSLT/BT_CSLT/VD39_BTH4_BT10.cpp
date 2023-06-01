//Viết chương trình nhận vào 1 số nguyên n > 0. Xuất ra màn hình các giá trị thừa
//số nguyên tố của n.Ví dụ n = 126 thì các thừa số nguyên tố là 2, 3, 3, 7.
#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Nhap n = ";
    cin >> n;  // n=126
    int dem;

    for (int i = 2; i <= n; i++) 
    {
        dem = 0;
        while (n % i == 0) // 126 % 2 == 0 ; 63 % 2 != 0 ; 63%3==0 ; 21%3==0 ; 7%3!=0 ; 7%7==0
        {
            ++dem; // dem=1; dem=1+1=2 ; dem=1
            n /= i;// n=n/i ; n=126/2=63 ; n=63/3=21 ; n=21/3=7 ; n=7/7=1 
        }
        if (dem) // Nếu có biến đếm
        {
            cout << i; // 2* ; 2*3^2* ; 2*3^2*7
            if (dem > 1) cout << "^" << dem; 
            if (n > i) 
            {
                cout << " * ";
            }
        }
    }
    system("pause");
    return 0;
}
