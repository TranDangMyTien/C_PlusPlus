//Viết chương trình nhận vào một dãy số nguyên liên tục và kết thúc bằng tổ hợp
//phím Ctrl + Z.Sau đó xuất ra màn hình giá trị số lớn nhất, số nhỏ nhất và tổng
//của các số vừa nhập.

#include <iostream>
using namespace std;

int main()
{
	int n, max, min, sum;
	cout << "Nhap so nguyen : ";
	cin >> n;
	max = min = sum = n;
	while (true)
	{
		cout << "Nhap so nguyen : ";
		cin >> n;
		if (cin.get() == EOF) break;
		sum += n;
		if (max < n) max = n;
		if (min > n) min = n;
	}
	cout << "Tong = " << sum << endl
		<< "So lon nhat la " << max << endl
		<< "So nho nhat la " << min << endl;
	system("pause");
	return 0;
}