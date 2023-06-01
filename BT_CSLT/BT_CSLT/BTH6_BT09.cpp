//9. Viết hàm tính tổng các chữ số của số nguyên n;
//và chương trình để kiểm tra hàm đã viết
// vd n=234 thi tong=2+3+4=9
#include <iostream>
using namespace std;
int tinhTong(int x);
int main()
{
	int n;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	if (n < 0)
		cout << "Nhap sai nhap lai !\n";
	else if (n == 0)
		cout << "Tong cac chu so cua " << n << " la : 0 \n";
	else
	    cout << "Tong cac chu so cua " << n << " la : " << tinhTong(n) << endl;
	system("pause");
	return 0;
}
int tinhTong(int x)
{
	int tong = 0;
	while (x > 0)
	{
	/*int soChuSo = 0;*/
	// vd x=345  ; x=34 ; x=3
	int chuso = x % 10; // chuso = 5 ; chuso = 4 ; chuso=3
	tong += chuso; // tong = 5 ; tong = 5 + 4  ;  tong = 5 + 4 + 3
	/*soChuSo++; // =1 ;= 2 ;= 3*/
	x /= 10;  // tam = 34 ; tam = 3 ; tam = 0 dung
	}
	return tong;
} 
