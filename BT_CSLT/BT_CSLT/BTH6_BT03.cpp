//3. Viết hàm tính x^y (x là số thực, y là số nguyên) và chương trình kiểm tra hàm.
//x^0= 1
//y >= 0 thi lũy thừa *= x;
//y < 0 thì lũy thừa /= x;
#include <iostream>
using namespace std;
double tinhLuyThua(double x, int y);
int main()
{
	double x;
	int y;
	cout << "Nhap x : "; cin >> x;
	cout << "Nhap y : "; cin >> y;
	double luyThua = tinhLuyThua(x, y);
	// Xuất kết quả 
	cout << x << "^" << y << " = " << luyThua << endl;
	system("pause");
	return 0;
}
double tinhLuyThua(double x, int y)
{
	double luyThua = 1.0;
	if (y >= 0)
		for (int i = 1; i <= y; i++)
			luyThua *= x;
	else // vd y= -3 => -y = -(-3)= 3
		for (int i = 1; i <= -y; i++)
			luyThua /= x;
	return luyThua;
}
// luythua ở trên và dưới khác nhau 