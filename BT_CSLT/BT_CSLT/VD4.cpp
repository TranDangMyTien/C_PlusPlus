#include <iostream>
using namespace std;
int main() {
	double diem ;
	cout << "Nhap diem tai day : ";
	cin >> diem;
	if (diem >= 0 && diem <= 10)
	{
		cout << "So diem hop le " ;
	}
	else
		cout << " Nhap diem khong hop le ";
	return 0;
}