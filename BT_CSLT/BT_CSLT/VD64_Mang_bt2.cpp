#include <iostream>
#include <ctime>
using namespace std;
void nhap(int arr[], int n);
void xuat(const int arr[], int n);
void sapXep(int arr[], int n);
void hoanvi(int& a, int& b);
int main()
{
	srand(time(0));
	const int SIZE = 50;
	int a[SIZE], n;
	cout << "Nhap so phan tu : ";
	cin >> n;
	nhap(a, n);
	cout << "Mang vua nhap la :\n";
	xuat(a, n);
	cout << "Mang sau khi sap xep :\n";
	sapXep(a, n);
	xuat(a, n);
	system("pause");
	return 0;
}
void nhap(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 10 + (rand() % 41);
	}
}
void xuat(const int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " , ";
	cout << "\b";
	cout << endl;
}
void sapXep(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j]) // Phần tử trước lớn hơn phần tử sau 
				hoanvi(arr[i], arr[j]);
	}
}
void hoanvi(int& a, int& b)
{
	int tam = a;
	a = b;
	b = tam;
}




