//Viết chương trình nhận vào 1 số nguyên n > 0. 
//Tính và xuất tổng các chữ số lẻ của n.
//Vd : n= 12345 thì tong=9
#include <iostream>
using namespace std;

int main()
{
	int n;
	int tong = 0;
	do
	{
		cout << "Nhap so nguyen : ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai nhap lai (n > 0)";
	} while (n <= 0);
	int tam = n;
	while (tam >0)
	{ // vd n =12345 ; n=1234 ; n=123 ; n=12 ; n=1
		int chuso = tam % 10; // chuso = 5 ; chuso = 4 ; chuso = 3 ; chuso = 2 ; chuso = 1 
		if (chuso % 2 != 0)
		{
			int soLe = chuso; // soLe = 5 // soLe = 3 // soLe = 1
			tong += soLe; // tong = 0 + 5 = 5 ; tong = 5 + 3 = 8; tong = 8 + 1 = 9
		}
		tam /= 10; // tam=1234 ; tam=123 ; tam=12 ; tam=1 
	}
	cout << "Tong cac chu so le cua n la : " << tong << endl;
	system("pause");
	return 0;
}