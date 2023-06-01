//Viết chương trình nhận vào 1 số nguyên dương n(n > 0).
//Tính và xuất tổng các số từ 1 đến n.
//Ví dụ : n = 4 thì kết quả là 10.
#include <iostream>
using namespace std;
int main()
{
	int n;
	int tong = 0;
	cout << "Nhap so nguyen duong n : ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			tong += i; // tong = tong + i
		cout << "Tong cac so tu 1 den " << n << " la : " << tong << endl;
	}
	else
		cout << "Nhap sai n !\n";
	system("pause");
	return 0;
}