#include <iostream>
using namespace std;
int main() {
	int date;
	cout << "Nhap ngay tai day : "; cin >> date;
	switch (date)
	{
	case 2: case 3: case 4: case 5: case 6: 
		cout << "Ngay lam viec \n ";
		break;
	case 7:
		cout << "Ngay cuoi tuan \n ";
		break;
	case 8:
		cout << "Ngay nghi \n";
		break;
	default: cout << "Nhap ngay khong hop le \n ";
	}
	return 0;
}