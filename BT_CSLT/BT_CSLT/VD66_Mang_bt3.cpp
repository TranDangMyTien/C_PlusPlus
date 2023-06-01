#include <iostream>
using namespace std;
void create(int a[], int n);
void print(const int a[], int n);
int count(const int a[], int n, int x);
bool check1(const int a[], int n);
bool check2(const int a[], int n);
int main()
{
	const int MAXN = 100;
	int a[MAXN], n;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	create(a, n);
	print(a, n);
	int x;
	cout << "Nhap so nguyen x : ";
	cin >> x;
	cout << "So lan xuat hien cua so " << x << " la : " << count(a, n, x) << endl;
	if (check1(a, n))
		cout << "Mang co gia tri tang dan" << endl;
	else if (check2(a, n))
		cout << "Mang co gia tri giam dan" << endl;
	else
		cout << "Mang khong co gia tri tang/giam" << endl;
	system("pause");
	return 0;
}
void create(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << " : ";
		cin >> a[i];
	}
}
void print(const int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		cout << a[i] << " ; ";
	cout << a[n - 1] << endl;
}
int count(const int a[], int n, int x) // Tính số lần xuất hiện của 1 số
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
// Ham check1 để kiểm tra mang có giá trị tang dan
bool check1(const int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
			return 0;
	}
	return 1;
}
// Hàm check2 để kt mảng có giá trị giảm dần
bool check2(const int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] < a[i + 1])
			return 0;
	}
	return 1;
}