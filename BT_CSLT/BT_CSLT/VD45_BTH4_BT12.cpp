#include <iostream>
using namespace std;

int main() 
{
	int n, du = 0, tam = 0, kq;
	cout << "Nhap so n (n>0): ";
	cin >> n;
	if (n > 0) {
		while (n != 0) {
			du = n % 10;
			n /= 10;
			tam = tam * 10 + du;
		}
		while (tam > 0) {
			kq = tam % 10;
			tam /= 10;
			cout << kq << " ";
		}
	}
	else cout << "Nhap lai.";
	system("pause");
	return 0;
}