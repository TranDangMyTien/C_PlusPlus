#include <iostream>
using namespace std;
int main()
{
	int a[] = { 35, 12, 27, 18, 45, 16, 38 };
	int n = sizeof(a) / sizeof(a[0]);
	int x, vitri;
	cout << "Nhap so can tim : ";
	cin >> x;
	vitri = 0;
	while (vitri <= n - 1 && a[vitri] != x)
		vitri++;
	if (vitri <= n - 1)
		cout << "Tim thay tai vi tri " << vitri << endl;
	else
		cout << "Khong tim thay" << endl;
}