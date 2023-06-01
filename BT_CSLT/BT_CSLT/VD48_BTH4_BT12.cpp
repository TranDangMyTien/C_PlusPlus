#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	while (n <= 1)
	{
		cout << "Nhap sai, Nhap lai: ";
		cin >> n;
	}
	int sochia = 1;
	int dem = 0;
	int tam = n;
	while (tam > 10)
	{
		tam = tam / 10;
		sochia = sochia * 10;
	}
	tam = n;
	while (tam > 0)
	{
		dem = tam / sochia;
		tam = tam % sochia;
		sochia = sochia / 10;
		cout << dem << " ";
	}
	system("pause");
	return 0;
}