// Viết hàm nhận vào điểm trung bình, trả về kq xếp loại
// TB >=8: Giỏi
// 7=<  <8 : Khá
// 5=<  <7 : Tb
// <5 : Yếu
#include <iostream>
using namespace std;
string timDiem(double n);
int main()
{
	double n;
	cout << "Nhap vao so diem TB :";
	cin >> n;
	string kq = timDiem(n);
	if (kq == "0")
		cout << "Loi nhap sai nhap lai\n";
	else
		cout << "Xep hang : " << kq << endl;
	system("pause");
	return 0;
}
string timDiem(double n)
{
	if (n >= 0 && n <= 10)
	{
		if (n >= 8)
			return"Gioi";
		else if (n >= 7 && n < 8)
			return "Kha";
		else if (n < 7 && n >= 5)
			return "TB";
		else
			return "Yeu";
	}
	return "0";
}