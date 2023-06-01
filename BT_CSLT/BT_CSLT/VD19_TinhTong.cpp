/* Viết chương trình nhập vào một số nguyên dương n.
 Tính: S = 1 + 2 + 3 + … + n */
// FOR
#include <iostream>
using namespace std;
int main()
{
	int n;
	int tong = 0;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			tong += i;
		cout << "Tong cac so tu 1 den " << n << " la " << tong << endl;
	}
	else
		cout << "Nhap n sai\n";
	system("pause");
	return 0;
}
