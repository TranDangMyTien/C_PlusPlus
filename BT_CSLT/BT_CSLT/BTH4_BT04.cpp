//Viết chương trình nhận vào 1 số nguyên dương n.Xuất ra màn hình số chữ số và
//tổng các chữ số của n.Ví dụ : n = 3523 thì kết quả là n có 4 chữ số và tổng các
//chữ số là 13.
#include <iostream>
using namespace std;
int main()
{
	int n, tam, tong = 0 ;
	do
	{
		cout << "Nhap so nguyen duong tai day : ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai nhap lai (n > 0)";
	} while (n <= 0);
	int soChuSo = 0;
	tam = n;
	while (tam > 0)
	{
		// vd n=345  ; n=34 ; n=3
		int chuso = tam % 10; // chuso = 5 ; chuso = 4 ; chuso=3
		tong += chuso; // tong = 5 ; tong = 5 + 4  ;  tong = 5 + 4 + 3
		soChuSo++; // =1 ;= 2 ;= 3
		tam /= 10;  // tam = 34 ; tam = 3 ; tam = 0 dung
	}
	cout << "Tong cac chu so cua " << n << " la : " << tong << endl;
	cout << "So cac chu so cua " << n << " la : " << soChuSo << endl;
	system("pause");
	return 0;
}


