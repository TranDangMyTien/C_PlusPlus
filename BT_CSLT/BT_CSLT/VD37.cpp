// BTH4_BT10
#include<iostream>
using namespace std;
int main()
{
	int n, t;
	cout << "Nhap so guyen duong: ";
	cin >> n;
	while (n < 0)
	{
		cout << "Ban nhap so am roi, nhap so lon hon 0:  ";
		cin >> n;
	}
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			cout << i << ", ";
			n /= i;
		}
		else
		{
			i++;
		}
	}
	cout << n << endl;
	system("pause");
	return 0;
}
