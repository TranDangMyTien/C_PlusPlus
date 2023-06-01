/* Viết chương trình nhận vào một số nguyên dương n.Tính tổng
các chữ số của số nguyên đó.*/
#include <iostream>
using namespace std;
int main()
{
	int n, tam, tong = 0;
	cout << "Nhap so nguyen duong : ";
	cin >> n;	if (n > 0)
	{
		tam = n;
		while (tam > 0)
		{
			int chuso = tam % 10;
			tong += chuso;
			tam /= 10;
		}
		cout << "Tong cac chu so cua " << n << " la "
			<< tong << endl;
	}
	else
		cout << "Nhap sai\n";
	return 0;
}