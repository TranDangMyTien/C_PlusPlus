//Viết chương trình nhận vào 1 số nguyên n > 0. Xuất ra màn hình các giá trị thừa
//số nguyên tố của n.Ví dụ n = 126 thì các thừa số nguyên tố là 2, 3, 3, 7.
#include<iostream>
using namespace std;
int main() {
    int n;
    int i = 2;
    cout << "Nhap vao so nguyen n (n > 1): ";
    cin >> n;
    while (n <= 1)
    {
        cout << "Nhap sai! Moi ban nhap lai :";
        cin >> n;
    }
    while (n > 1)
    {
        while (n % i == 0) // Vd n=126
        {
            n /= i;  // n=n/i  ; n=126/2=63 ; n=63/3=21 ; n=21/3=7 ; n=7/7
            cout << i << " , ";    // 2; 3 ; 3 ; 7
        }
        i++;
    }cout << endl;
    system("pause");
    return 0;
}