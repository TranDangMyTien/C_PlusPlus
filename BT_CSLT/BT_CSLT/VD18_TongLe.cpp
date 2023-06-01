/* Viết chương trình nhập số nguyên dương n. Tính tổng các số
lẻ từ 1 đến n. */
// DO_WHILE
#include <iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	int tongLe = 0;
	cout << "Nhap so nguyen duong: ";
	cin >> n;
	if (n > 0)
	{
		do {
			tongLe += i;
			i = i + 2;
		} while (i <= n);
		cout << "Tong cac so le tu 1 den " << n << " la " <<
			tongLe << endl;
	}
	else
		cout << "Nhap sai\n";
	system("pause");
	return 0;
}
