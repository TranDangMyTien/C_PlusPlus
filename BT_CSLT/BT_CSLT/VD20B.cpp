﻿// Viết chương trình tính tổng m số nguyên dương nhập vào
// WHILE
#include <iostream>
using namespace std;
int main()
{
	int m, a;
	int tong = 0;
	cout << "Nhap so luong so muon tinh tong : ";
	cin >> m;
	if (m > 0)
	{
		int i = 1;
		while (i <= m )
		{
			cout << "Nhap so thu " << i << ": ";
			cin >> a;
			tong += a;
			i++;
		}
		cout << "Tong " << m << " so vua nhap la " << tong << endl;
	}
	else
		cout << "Nhap sai\n";
	system("pause");
	return 0;
}
