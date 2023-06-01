//8. Viết các hàm sau đây và chương trình để kiểm tra các hàm đã viết :
//a.Hàm tính chu vi hình vuông.
//b.Hàm tính diện tích vuông.
//c.Hàm xuất hình vuông rỗng khi nhận vào số đo cạnh và ký tự cần xuất.Ví dụ với
//cạnh là 4 và ký tự nhập vào là * thì kết quả :
//****
//*  *
//*  *
//****

#include <iostream>
#include <iomanip>	// for std::setw(n), std::setfill(ch), std::left, std::right , for std::setprecision()
using namespace std;
double dtHinhVuong(double a);
double cvHinhVuong(double a);
bool ktCanh(double a);
void hinhVuongRong(double );
int main()
{
	double a;
	cout << "Nhap vao do dai hinh vuong : ";
	cin >> a;
	cout << setfill('-');		// set fill bằng ký tự '-' thay vì ' '
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'
	if (ktCanh(a) == true)
	{
		cout << "Dien tinh hinh vuong la : " << dtHinhVuong(a) << endl;
		cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'
		cout << "Chu vi hinh vuong la : " << cvHinhVuong(a) << endl;
		cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'
		cout << "Hinh vuong * rong la : \n";
		hinhVuongRong(a);
	}
	else
		cout << "Do dai canh khong hop le ! \n";
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'
	system("pause");
	return 0;
}
bool ktCanh(double a)
{
	if (a <= 0)
		return 0;// false
	return 1; // true
}
double dtHinhVuong(double a)
{
	double dientich;
	dientich = a * a;
	return dientich;
}
double cvHinhVuong(double a)
{
	double chuvi;
	chuvi = a * 4;
	return chuvi;
}
void hinhVuongRong(double n)
{
	static_cast<int>(n);
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			if (i == 1 || k == 1 || i == n || k == n)
			{
				cout << "*" << " "; // Thêm " " cho đẹp chứ không ảnh hưởng đến hình 
			}
			else
				cout << "  ";
		}
		cout << endl;
	}
}
