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
	for (int vt = 0; vt < x; vt++)
	{
		if (a[vt] == x)
			break;
	}
	if (vitri <= n - 1)
		cout << "Tim thay tai vi tri " << vitri << endl;
	else
		cout << "Khong tim thay" << endl;
}