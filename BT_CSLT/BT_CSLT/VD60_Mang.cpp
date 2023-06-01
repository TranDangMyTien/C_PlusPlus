// Viết chương trình tạo ngẫu nhiên một mảng số n phần tử,
// với n là giá trị người dùng nhập vào. Thống kê cho biết
// có bao nhiêu phần tử là bội cảu 5, in các phần tử ra màn hinhh
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int const max = 50;
	int a[max];
	int n;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	while (n > max && n < 0)
	{
		cout << "Ban nhap so phan tu ngoai phan vi cho phep(<=1000), nhap lai: ";
		cin >> n;
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho mang: ";
		cin >> a[i];
	}/*for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}*/
	int sum = 0 ;
	cout << "Cac so la boi so cua 5 la : ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 5 == 0)
		{
			sum++;
			cout << a[i] << "\t";
		}

	}
	cout << "\n";
	cout << "Co " << sum << " phan tu la boi so cua 5: ";
	cout << endl;
	system("pause");
	return 0;
}