// Viết chương trình nhập vào một số nguyên dương n lớn hơn 1.
// Tính tích các số chẵn từ 1 đến n.
#include <iostream>
using namespace std;
int main()
{
	int n, i = 2, tichChan = 1;
	cout << "Nhap so nguyen duong n: ";
	cin  >> n;
	if (n > 1)
	{
		while (i <= n)
		{
			tichChan *= i;
			i = i + 2;
		}
		cout << "Tich cac so chan tu 1 den " << n << " la = " <<
			tichChan << endl;
	}
	else
		cout << "Nhap n sai\n";
	return 0;
}