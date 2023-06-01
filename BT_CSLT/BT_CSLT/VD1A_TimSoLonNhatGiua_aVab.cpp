#include <iostream>
using namespace std;
int main() {
	int a, b;
	int max;
	cout << "Nhap so thu nhat : "; cin >> a;
	cout << "Nhap so thu hai : "; cin >> b;
	max = a >= b ? a : b;
	cout << "So lon nhat la : " << max << endl;
	return 0;
}