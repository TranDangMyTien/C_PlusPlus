#include <iostream>
using namespace std;
int main()
{
	double a[] = { 8, 6, 7, 1, 4, 2, 3, 10, 9, 5 };
	int n = sizeof(a) / sizeof(a[0]); // Tính số phần tử
	cout << "\nCac gia tri trong mang:" << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << a[i] << " ";
	double tong = 0;
	for (int i = 0; i <= n - 1; i++)
		tong += a[i];
	cout << "\nTong = " << tong;
	cout << "\nTrung binh = " << tong / n;
	system("pause");
	return 0;
}