// Viết chương trình tính tổng các số từ 1 đến n
//  (n là số nguyên dương)
#include <iostream>
using namespace std;
int tinhTong(int x);
int main()
{
	int n;
	cout << "Nhap so: ";
	cin >> n;
	cout << "Tong tu 1 den " << n << " la " <<
		tinhTong(n) << endl;
	return 0;
}
int tinhTong(int x)
{
	int tong = 0;
	for (int i = 1; i <= x; i++)
		tong += i;
	return tong;
} //dinh nghia ham tinhTong