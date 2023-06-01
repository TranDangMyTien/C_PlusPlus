#include <iostream>
using namespace std;
int main() {
	int thang,nam ;
	cout << "Nhap thang tai day : "; cin >> thang;
	cout << "Nhap nam tai day : "; cin >> nam;
	switch (thang)
	{
	case 1:
		cout << "Thang " << thang << " nam " << nam << " co 31 ngay ";
		break;
	case 2:
		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
			cout << "Thang " << thang << " nam " << nam << " co 29 ngay ";
		else
			cout << "Thang " << thang << " nam " << nam << " co 28 ngay ";
		break;
	case 3:
		cout << "Thang " << thang << " nam " << nam << " co 31 ngay ";
	case 4: 
		cout << "Thang " << thang << " nam " << nam << " co 30 ngay";
	case 5:
		cout << "Thang " << thang << " nam " << nam << " co 31 ngay ";
	case 6:
		cout << "Thang " << thang << " nam " << nam << " co 30 ngay";
	case 7:
		cout << "Thang " << thang << " nam " << nam << " co 31 ngay";
	case 8: 
		cout << "Thang " << thang << " nam " << nam << " co 31 ngay";
	case 9:
		cout << " Thang " << thang << " nam " << nam << " co 30 ngay ";
	case 10:
		cout << " Thang " << thang << " nam " << nam << " co 31 ngay ";
	case 11:
		cout << " Thang " << thang << " nam " << nam << " co 30 ngay ";
	case 12:
		cout << " Thang " << thang << " nam " << nam << " co 31 ngay ";
	default :
		cout << " Nhap thang khong hop le ket thuc chuong trinh ";

	}
	return 0;

}