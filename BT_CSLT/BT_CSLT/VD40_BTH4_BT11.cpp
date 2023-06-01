//Viết chương trình nhận vào 1 số ở dạng nhị phân.Xuất ra màn hình
//kết quả số đó chuyển qua hệ thập phân.
#include <iostream>
#include <cmath>
using namespace std;
int binToDec(long bin);
int main()
{
    long bin;
    cout << "Nhap vao so nhi phan : ";
    cin >> bin;
    cout << "So thap phan la : " << binToDec(bin) << endl;
    system("pause");
    return 0;
}
int binToDec(long bin)
{
    int dec = 0, tam = 0, phanDu;
    while (bin != 0)
    {
        phanDu = bin % 10; 
        bin = bin / 10; 
        dec = dec + phanDu * pow(2, tam);
        tam++;
    }
    return dec;
}