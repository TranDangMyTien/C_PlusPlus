//Viết chương trình nhận vào 1 số nguyên dương n.
//Tính và xuất kết quả tính n giai thừa.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so can tinh giai thua : ";
	cin >> n;
	int giaiThua = 1;
	for (int i = 1; i <= n; i++)
	{
		giaiThua = giaiThua * i;
	}
	cout << "Giai thua cua " << n << " la " << giaiThua << endl;
	system("pause");
	return 0;
}