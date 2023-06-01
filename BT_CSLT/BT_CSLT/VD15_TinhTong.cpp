/*Viết chương trình tính tổng các số nguyên khác 0 được nhập
vào, khi muốn kết thúc sẽ nhập 0. */
#include <iostream>
using namespace std;
int main()
{
	int n;
	int tong = 0;
	cout << "Nhap so nguyen (nhap 0 de ket thuc): ";
	cin >> n;
	while (n != 0)
	{
		tong += n;
		cout << "Nhap so nguyen (nhap 0 de ket thuc): ";
		cin >> n;
	}
	cout << "Tong cac so vua nhap la: " << tong <<endl;
	return 0;
}