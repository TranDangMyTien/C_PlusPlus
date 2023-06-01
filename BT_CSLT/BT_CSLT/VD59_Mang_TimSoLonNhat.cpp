#include <iostream>
using namespace std;
int main()
{
	double a[] = { 12.5,8.35,19.6,25,14,39.43,35.9,
	98.23,66.65,35.64 };
	int n = sizeof(a) / sizeof(a[0]);
	double lonnhat = a[0];
	for (int i = 1; i <= n - 1; i++)
		if (lonnhat < a[i])
			lonnhat = a[i];
	cout << "Gia tri lon nhat = " << lonnhat << endl;
	return 0;
}