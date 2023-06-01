//Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất tích các số lẻ
//trong phạm vi từ 1 đến n.

#include <iostream>
using namespace std;
int main()
{
	int n, i = 1, tichLe = 1;
	do
	{
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (n <= 1)
		cout << "Nhap sai nhap lai (n > 1) "<< endl;
	} while (n <= 1);
	while (i <= n)
	{
		tichLe *= i;
		i = i + 2;
	}
	cout << "Tich cac so le tu 1 den " << n << " la = " << tichLe << endl;
	system("pause");
	return 0;
}