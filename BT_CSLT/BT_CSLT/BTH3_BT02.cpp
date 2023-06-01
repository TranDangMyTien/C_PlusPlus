//2. Viết chương trình tìm số lớn nhất của 2 số nguyên a và b.
#include <iostream>
using namespace std;
int main() {
	int a, b, max;
	cout << "Nhap so thu nhat : ";
	cin >> a;
	cout << "Nhap so thu hai : ";
	cin >> b;
	if (a >= b)
		max = a;
	else
		max = b;
	cout << "So lon nhat la : " << max << endl;
	return 0;
}