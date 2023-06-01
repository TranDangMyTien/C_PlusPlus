// Viết chương trình tính tổng m số nguyên dương nhập vào
// WHILE , khi nào đúng mới thoát vòng lập
#include <iostream>
using namespace std;
int main()
{
	int m, a;
	int tong = 0;
	do {
		cout << "Nhap so luong so muon tinh tong ( nhap so > 0 ): ";
		cin >> m;
		if (m <= 0);
		cout << " Nhap sai! Vui long nhap lai so > 0\n";
	} while (m <= 0);
		int i = 1;
		while (i <= m)
		{
			cout << "Nhap so thu " << i << ": ";
			cin >> a;
			tong += a;
			i++;
		}
		cout << "Tong " << m << " so vua nhap la " << tong << endl;
	system("pause");
	return 0;
}
