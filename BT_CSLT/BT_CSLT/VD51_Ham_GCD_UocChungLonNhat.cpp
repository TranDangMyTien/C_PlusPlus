#include<iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
	int x, y;
	cout << "Nhap 2 so nguyen : ";
	cin >> x >> y;
	cout << "Uoc chung lon nhat cua 2 so la : " << gcd(x, y) << endl;
	system("pause");
	return 0;
}
int gcd(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
}