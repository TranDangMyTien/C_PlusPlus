/*Viết chương trình nhận vào 3 số nguyên.
Xuất ra màn hình 3 số đó được sắp xếp
tăng dần*/
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, tam;
	cout << "Nhap a = " ;
	cin >> a;
	cout << "Nhap b = " ;
	cin >> b;
	cout << "Nhap c = " ;
	cin >> c;
	if (a > b)
	{
		tam = a;
		a = b;
		b = tam;
	}
	if (a > c)
	{
		tam = a;
		a = c;
		c = tam;
	}
	if (b > c)
	{
		tam = b;
		b = c;
		c = tam;
	}
	cout << "so thu tu tang dan:  " << a << " " << b << " " << c << "\n";
	system("pause");
	return 0;
}