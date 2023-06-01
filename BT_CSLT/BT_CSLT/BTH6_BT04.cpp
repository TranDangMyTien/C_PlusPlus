//4. Viết các hàm sau đây và viết chương trình kiểm tra các hàm đã viết :
//a.Hàm tính tổng các số từ 1 đến n(n là số nguyên dương).
//b.Hàm tính n!(n là số nguyên dương). // 0!= 1
#include <iostream>
using namespace std;
int tinhTong(int n);
bool ktSoNguyenDuong(int n);
long giaiThua(int n);
int main()
{
	int n;
	cout << "Nhap so nguyen duong n (n > 0) : ";
	cin >> n;
	if (ktSoNguyenDuong(n) == true)
	{
		cout << "Tong cac so tu 1 den " << n << " la : " << tinhTong(n) << endl;
		cout << "Giai thua " << n << " la: " << giaiThua(n)<< endl;
	}
	else
		cout << "Nhap so nguyen duong n khong hop le ! ";
	system("pause");
	return 0;
}
int tinhTong(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		tong += i;
	return tong;
}
bool ktSoNguyenDuong(int n)
{
	if (n <= 0)
		return false; // return 0;
	return true;
}
long giaiThua(int n)
{
	long giai_thua = 1;
	for (int i = 1; i <= n; i++)
		giai_thua *= i;
	return giai_thua;
}