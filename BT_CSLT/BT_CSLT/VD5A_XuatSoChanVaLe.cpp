#include <iostream >
using namespace std;
int main() {
	int a;
	cout << "Nhap so nguyen tai day :";
	cin >> a;
	if (a % 2 == 0)
		cout << " a la so chan ";
	if (a % 2 != 0)
		cout << " a la so le ";
	return 0;
}