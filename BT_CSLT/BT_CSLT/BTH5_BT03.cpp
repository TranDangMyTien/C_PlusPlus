//Viết chương trình yêu cầu nhập số nguyên dương n.
//Tính và xuất kết quả các phép tính
#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Nhap vao so nguyen duong n : ";
        cin >> n;
    } while (n <= 0);
    int S1 = 0;
    double S2 = 0, S3 = 0;
    for (int i = 1; i <= n; i++) 
    {
        S1 = S1 + i * i;
    }
    cout << "Ket qua cua S1: " << S1 << endl;
    for (int j = 1; j <= n; j++) 
    {
        S2 = S2 + 1 / j;
    }
    cout << "Ket qua cua S2: " << S2 << endl;
    for (int k = 1; k <= n; k++) 
    {
        S3 = S3 + 1 / (2 * k - 1);
    }
    cout << "Ket qua cua S3: " << S3 << endl;
    system("pause");
    return 0;
}