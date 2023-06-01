//Viết chương trình nhận vào 1 số nguyên n(n > 0).Tính và xuất ra màn hình kết
//quả tổng các số từ 1 đến n.

#include <iostream>
using namespace std;
int main ()
{
	int n;
	int i = 1;
	int tong = 0;
	cout << " Nhap so nguyen duong n : ";
	cin >> n;
	while (i <= n)
	{
		tong += i;
		i++;
	}
	cout << "Tong tu 1 den " << n << " la = " << tong << endl;
	system("pause");
	return 0;
}