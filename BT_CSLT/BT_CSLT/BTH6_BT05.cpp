//5. Viết hàm nhận vào số đo cạnh, xuất ra hình vuông gồm các dấu* và chương trình để
//kiểm tra hàm.
#include<iostream>
using namespace std;
void hinhVuong(int n);
bool ktSoDoCanh(int n);
int main()
{
	int n;
	cout << "Nhap chieu dai canh cua hinh vuong : ";
	cin >> n;
	if (ktSoDoCanh(n) == true)
	{
		cout << "Hinh vuong * co dang la : \n";
		hinhVuong(n);
	}
	else
		cout << "Nhap chieu dai canh hinh vuong khong hop le ! \n";
	system("pause");
	return 0;
}
void hinhVuong(int n)
{

	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
bool ktSoDoCanh(int n)
{
	if (n <= 0)
		return 0;//false
	return 1;
}