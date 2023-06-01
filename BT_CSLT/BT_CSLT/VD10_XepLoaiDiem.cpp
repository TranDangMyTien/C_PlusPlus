#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double diem, toan, van, anh;
	cout << "Nhap diem toan : "; cin >> toan;
	cout << "Nhap diem van : "; cin >> van;
	cout << "Nhap diem anh : "; cin >> anh;
	diem = (toan * 2 + van + anh) / 4;
	if (diem >= 8)
		cout << "Gioi \n";
	else if (diem >= 7)
		cout << "Kha \n";
	else if (diem >= 5)
		cout << "Trung binh \n";
	else
		cout << "Yeu \n";
	return 0;
}