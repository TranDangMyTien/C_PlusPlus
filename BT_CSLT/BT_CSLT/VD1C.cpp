#include <iostream>
using namespace std;
int main() {
	int x, y, z, max;
	cout << " Nhap cac so nguyen tai day : ";
	cin >> x >> y >> z;
	max = x;
	if (max < y) max = y;
	if (max < z) max = z;
	cout << "So lon nhat la : " << max << endl;
	return 0;
}