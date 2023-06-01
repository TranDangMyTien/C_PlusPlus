#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << "Nhap 1 so nguyen tu 0 den 9: ";
	cin >> so;
	switch (so)
	{
	case 0:
		cout << "Khong \n ";
		break;
	case 1:
		cout << "Mot \n";
		break;
	case 2:
		cout << "Hai \n";
		break;
	case 3:
		cout << "Ba \n";
		break;
	case 4:
		cout << "Bon \n";
		break;
	case 5:
		cout << "Nam \n";
		break;
	case 6:
		cout << "Sau \n";
		break;
	case 7: 
		cout << "Bay \n";
		break;
	case 8:
		cout << "Tam \n";
		break;
	case 9:
		cout << "Chin \n";
		break;
	default:
		cout << "Ngoai kha nang doc \n";
	}
	return 0;
}