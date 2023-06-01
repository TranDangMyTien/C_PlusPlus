//Viết chương trình nhận vào 1 số ở dạng nhị phân.Xuất ra màn hình
//kết quả số đó chuyển qua hệ thập phân.
#include<iostream>
#include<cmath>
using namespace std;
bool KTNhiPhan(int n);
int main()
{
	int nhiphan;
	cout << "Nhap so nhi phan : ";
	cin >> nhiphan;
	if (KTNhiPhan(nhiphan))
	{
		int tam = nhiphan;
		int somu = 0;
		int thapphan = 0;
		while (tam > 0)
		{
			thapphan += tam % 10 * pow(2, somu);
			tam = tam / 10;
			somu++;
		}
		cout << "(So nhi phan) " << nhiphan << " = " << thapphan << " (So thap phan)" << endl;
	}
	else
		cout << "Khong hop le ! " << endl;
	system("pause");
	return 0;
}
bool KTNhiPhan(int n)
{
	while (n > 0)
	{
		if (n % 10 > 1)
			return false;
		n /= 10;
	}
	return true;
}
