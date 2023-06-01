#include <iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 5;
	double a[MAXSIZE];
	cout << "Nhap " << MAXSIZE << " so double: ";
	for (int i = 0; i <= MAXSIZE - 1; i++)
		cin >> a[i];
	for (int i = 0; i <= MAXSIZE - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}