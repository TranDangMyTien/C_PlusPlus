// Viết hàm trả về diện tích tam giác với tham số nhận vào là
// số đo 3 cạnh. Nếu số đo 3 cạnh không hợp lệ, hàm trả về 0.
// Áp dụng hàm trên vào chương trình cho phép người dùng nhập
// vào 3 canh tam giác, xuất kq diện tích tam giác ( nếu 3 cạnh hợp lệ)
// xuất thông báo lõi khi 3 cạnh nhập không hợp lệ 
#include <iostream>
#include <cmath>
using namespace std;
double tinhDtTamGiac(int a, int b, int c);
int main()
{
	int a, b, c;
	cout << "Nhap vao do dai 3 canh tam giac : ";
	cin >> a >> b >> c;
	if (tinhDtTamGiac(a, b, c) == 0)
		cout << "Nhap khong hop le\n";
	else
		cout << "Dien tich tam giac la : " << tinhDtTamGiac(a, b, c)<< endl;
	system("pause");
	return 0;
}
double tinhDtTamGiac(int a, int b, int c)
{
	if ((a + b) <= c || (a + c) <= b || (b + c) <= a)
	return 0;
	else 
	{
		int ncv = (a + b + c) / 2;
		double dt = sqrt(ncv * (ncv - a) * (ncv - b) * (ncv - c));
		return dt;
	}
}