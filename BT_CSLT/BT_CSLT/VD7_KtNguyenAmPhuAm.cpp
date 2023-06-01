#include <iostream>
using namespace std;
int main() {
	char kt;
	cout << "nhap ky tu : ";
	cin >> kt;
	switch (kt)
	{
	case 'a': case 'o': case 'i': case 'u': case 'e':
		cout << "la ky tu nguyen am\n";
		break;
	default:
		cout << "khong la ky tu nguyen am\n";
	}
	return 0;
}