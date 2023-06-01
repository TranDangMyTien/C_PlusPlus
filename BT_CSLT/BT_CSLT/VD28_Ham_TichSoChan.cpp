// Viết hàm nhận vào tham số là một số nguyên > 0.
// Hàm trả về tích các số chẵn của n. Áp dụng vào ct
// vd n= 12345 => tích = 2*4 = 8
#include <iostream>
using namespace std;
int tichSoChan(int number);
int main()
{
	int number;
	cout << "Nhap vao n > 0 : ";
	cin >> number;
	if (number < 0)
		cout << "Nhap so >0 " << endl;
	else
	{
		cout << "Tich cac so chan la : " << tichSoChan(number) << endl;
	}
	system("pause");
	return 0;
}
int tichSoChan(int number)
{
	int phanTu = 0;
	int tich = 1;
	for (int i = number; i > 0; i /= 10)
	{
		phanTu = i % 10;
		if (phanTu % 2 == 0)
			tich *= phanTu;
	}
	return tich;
}

