#include<iostream>
using namespace std;
bool KTNuyenTo (int n);
void BS_US (int a, int b, int& uscln, int& bscnn);
int main()
{
	int a, b, uscln, bscnn;
	cout << "Nhap 2 so nguyen : ";
	cin >> a >> b;
	BS_US(a, b, uscln, bscnn);
	cout << "USCLN = " << uscln << "BSCNN = " << bscnn << endl;
	system("pause");
	return 0;
}
bool KTNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
void BS_US(int a, int b, int& uscln, int& bscnn)
{
	int a1 = a, b1 = b, sodu;
	while (b1 != 0)
	{
		sodu = a1 % b1;
		a1 = b1;
		b1 = sodu;
	}
	// a1 la uscln
	uscln = a1;
	bscnn = (a * b) / uscln;
}