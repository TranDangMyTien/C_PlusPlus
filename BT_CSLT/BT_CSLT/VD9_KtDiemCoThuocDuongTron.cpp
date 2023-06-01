#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double R, x, y, a, b;
	cout << "Nhap ban kinh tai day : "; cin >> R;
	cout << "Nhap toa do tam O : "; cin >> x >> y;
	cout << "Nhap tao do mot diem : "; cin >> a >> b;
	double d = sqrt(pow(a - x, 2) + pow(b - y, 2));
	if (d > R)
	{
		cout << "Diem da cho nam ngoai duong tron";
	}
	else if (d = R)
	{
		cout << "Diem da cho nam tren duong tron ";
	}
	else 
	{
		cout << "Diem da cho nam trong duong tron ";
	}
	return 0;
}
