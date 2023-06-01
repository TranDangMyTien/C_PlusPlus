#include <iostream>
using namespace std;
int main()
{
	int n, i = 1, tichChan = 1, tichLe = 1 ;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n > 1)
	{
		while (i <= n)
		{
			if (i % 2 == 0)
				tichChan *= i;
			else
				tichLe *= i; 
			i++;
		}
		cout << "Tich cac so chan tu 1 den " << n << " la = " << tichChan << endl;
		cout << "Tich cac so le tu 1 den " << n << " la = " << tichLe << endl;
	}
	else
		cout << "Nhap n sai\n";
	return 0;
}