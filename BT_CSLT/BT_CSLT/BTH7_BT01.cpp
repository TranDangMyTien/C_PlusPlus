//1. Viết hàm kiểm tra 1 giá trị năm nhận vào có phải là năm nhuần hay không.Viết
//chương trình kiểm tra lại hàm vừa xây dựng. (Xem lại năm nhuần ở bài tập thực hành 3)
#include <iostream>
using namespace std;
bool namNhuan(int n);
int main() 
{
	int nam;
	cout << "Nhap nam tai day : ";
	cin >> nam;
	if (namNhuan(nam) == true)
		cout << nam << " La nam nhuan ! ";
	else
		cout << nam << " Khong la nam nhuan ! ";
	system("pause");
	return 0;
}
bool namNhuan(int n)
{
	if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) // Công thức tìm năm nhuận 
		return 1; // return true
	return 0; // return false
}