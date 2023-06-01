// Viết hàm nhận vào tham số là một số nguyên > 0.
// Hàm trả về gía trị của chữ số lớn nhất của n.
// Áp dụng vào chương trình
// vd n= 4536 thì max là 6
#include <iostream>
using namespace std;
int max(int n);
int main()
{
	int n;
	cout << "Nhap so nguyen n :";
	cin >> n;
	int soLonNhat = max(n);
	if (soLonNhat == 0)
		cout << "Hay nhap n > 0\n";
	else
		cout << "So lon nhat cua n la : " << soLonNhat << endl;
	system("pause");
	return 0;
}
int max(int n)
{
	int kq = 0;
	if (n <= 0)
		return 0;
	while (n > 0)
	{
		int dem = n % 10;
		n /= 10;
		if (dem > kq)
			kq = dem;
	}
	return kq;
}
