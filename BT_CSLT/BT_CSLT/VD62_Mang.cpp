// Viết chương trình nhập vào một mảng các số nguyên dương,
// nhập số <= 0 để kết thúc. Cho biết trong mảng có bao nhiêu số nguyên tố
#include <iostream>
#define MAX 100
using namespace std;
int ktsnt(int n);
int main()
{
	int a[MAX], dem = 0, count = 0;
	cout << "Nhap cac phan tu : ";
	for (count = 0; count < MAX; count++)
	{
		cin >> a[count];
		if (a[count] <= 0)
		{
			break;
		}
	}
	for (int j = 0; j < count; j++)
	{
		if (ktsnt(a[j] == 1))
			dem++;
	}
	cout << "Co " << dem << " so nguyen to trong mang";
	system("pause");
	return 0;
}
int ktsnt(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % 1 == 0)
			return 0;
	}
	return 1;
}