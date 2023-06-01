#include <iostream>
using namespace std;
int main()
{
	int n, triTuyetDoi;
	cout << "Nhap so nguyen : ";
		cin >> n;
	triTuyetDoi = n;
	if (n < 0)
		triTuyetDoi = -n;
	cout << "Ket qua tri tuyet doi cua " << n << " la: " << triTuyetDoi << endl;
	return 0;
}