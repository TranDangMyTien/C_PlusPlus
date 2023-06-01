#include <iostream>
using namespace std;
// Khai báo nguyên mẫu hàm
int tinhTong(int);
int main()
{
	cout << "Nhap so nguyen : ";
	int x; 
	cin >> x; 
	// x là đối số
	cout << "Tong cac so tu 1 den " << x << " la " << tinhTong(x);
	// Truyền bằng giá trị
	cout << "Gia tri bien x sau khi goi ham la " << x << endl;
	system("pause");
	return 0;
}
//Định nghĩa hàm
int tinhTong(int n) // gán giá trị bản sau cua x vao n
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		tong += i;
	n = 6;
	return tong;
}