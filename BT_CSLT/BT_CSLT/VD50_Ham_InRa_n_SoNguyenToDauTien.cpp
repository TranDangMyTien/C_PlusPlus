// In ra n số nguyên tố đầu tiên 
#include<iostream>
using namespace std;
bool timSoNT(int n);
int main ()
{
	int n, k = 0;
	cout << "Nhap so n (n>0) : ";
	cin >> n;
	if (n > 0)
	{
		for (int i = 2; k < n; i++)
		{
			if (timSoNT(i) == true)
			{
				cout << i << " ";
				k++;
			}
		}
	}
	else
		cout << "Nhap sai ";
	system("pause");
	return 0;
}

bool timSoNT(int n)
{
	if (n < 2)
		return 0;
	else 
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
				return 0;// cung la return false
		}
	}
	return 1; // cung la return true
}
