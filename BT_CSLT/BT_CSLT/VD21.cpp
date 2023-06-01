// FOR kết hợp Break
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so nguyen (nhap so 0):";
	cin >> n;
	if (n < 2)
		cout << n << "Khong phai la so nguyen to \n";
	else
	{
		int i;
		for ( i = 2; i <= sqrt((double)n); i++)
			if (n % i == 0)
				break;// thoat khoi vong lap for
		if (i > sqrt((double)n))
			cout << n << " la so nguyen to\n ";
		else // thoat khoi vong lap for do lenh break
			cout << n << " khong phai la so nguyen to \n ";
	}
	system("pause");
	return 0;
}