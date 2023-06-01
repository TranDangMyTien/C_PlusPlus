#include <iostream>
using namespace std;
void HoanDoi(int& a, int& b); // hoán đổi giá trị 2 số nguyên
// Khai báo nguyên mẫu hàm
int tinhTong(int &);// Truyền bằng tham chiếu : thêm &
int main()
{
	//cout << "Nhap so nguyen : ";
	//int x;
	//cin >> x;
	//// x là đối số
	//cout << "Tong cac so tu 1 den " << x << " la " << tinhTong(x) << endl;
	//cout << "Gia tri bien x sau khi goi ham la " << x << endl;
	cout << "Nhap so nguyen thu 1 : ";
	int x,y;
	cin >> x;
	cout << "Nhap so nguyen thu 2 : ";
	cin >> y;
	cout << "Gia tri cua 2 so ban dau la " << x << " , " << y << endl;
	HoanDoi(x, y);
	cout << "Gia tri cua 2 bien sau khi goi ham la " << x << " , " << y;
	system("pause");
	return 0;
}
//Định nghĩa hàm
int tinhTong(int &n) // gán giá trị bản sau cua x vao n
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
		tong += i;
	n = 20;
	return tong;
}
void HoanDoi(int& a, int& b)
{
	int tam = a; // Kỳ nhông ông kỳ đà
	a = b; // kỳ đà cha cắt ké
	b = tam; // cắt ké mẹ kỳ nhông
}