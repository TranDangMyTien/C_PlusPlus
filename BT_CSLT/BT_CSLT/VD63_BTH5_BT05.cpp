#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n1, n2;
	int dem = 0;
	bool a = true;
	cout << "Moi ban nhap so nguyen duong n1: ";
	cin >> n1;
	cout << "Moi ban nhap so nguyen duong n2: ";
	cin >> n2;
	while (n1 <= 0 || n2 <= 0 || n2 <= n1)
	{
		cout << "Ban da nhap sai" << endl;
		cout << "Moi ban nhap lai" << endl;
		cout << "Moi ban nhap so nguyen duong n1: ";
		cin >> n1;
		cout << "Moi ban nhap so nguyen duong n2: ";
		cin >> n2;
	}
	for (int i = n1; i <= n2; i++)
	{
		bool a = true;
		if (i < 2)
			a = false;
		else
		{
			for (int j = 2; j <= sqrt(i * 1.0); j++)
			{
				if (i % j == 0)
				{
					a = false;
					break;
				}
			}
		}
		if (a)
		{
			dem++;
		}
	}
	cout << "Tu n1 den n2 co " << dem << " so nguyen to" << endl;
	return 0;
}