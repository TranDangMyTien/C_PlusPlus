//7. Viết hàm kiểm tra 1 số nguyên n có phải là số nguyên tố hay không ? Hàm sẽ trả về
//true nếu n là số nguyên tố, trả về false nếu n không là số nguyên tố.Viết chương trình
//kiểm tra hàm đã viết.
#include <iostream>
using namespace std;
bool KTSNT(int n);
int main()
{
	int n;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	if (KTSNT(n)==true)
		cout << n << " La so nguyen to ! ";
	else
		cout << n << " Khong la so nguyen to ! ";
	system("pause");
	return 0;
}
bool KTSNT(int n)
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