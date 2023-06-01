//Viết chương trình nhận vào 2 số nguyên dương là chiều dài d và chiều rộng r của
//hình chữ nhật.Xuất ra hình chữ nhật dưới dạng các dấu * .
//Ví dụ d = 3, r = 5 thì kết quả :
//*****
//*****
//*****
#include <iostream>
using namespace std;
int main()
{
	int d, r;
	do
	{
		cout << "Nhap chieu dai : ";
		cin >> d;
		cout << "Nhap chieu rong : ";
		cin >> r;
		if (d <= 0 || r <= 0)
			cout << "Nhap sai nhap lai !\n";
	} while (d <= 0 || r <= 0);
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= r; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}