#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> a;
	cout << "Nhap so nguyen thu hai: ";
	cin >> b;
	if (a > b)
		cout << "So thu nhat lon hon so thu hai\n";
	else
		if (a < b)
			cout << "So thu nhat nho hon so thu hai\n";
		else
			cout << "Hai so bang nhau\n";
	return 0;
}