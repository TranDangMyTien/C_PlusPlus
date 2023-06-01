#include <iostream>
using namespace std;
void nhap(int arr[], int n);
void xuat(const int arr[], int n);
double tbCong(const int arr[], int n);
void sapXepTang(int arr[], int n);
void hoanvi(int& a, int& b);
int main()
{
	const int SIZE = 50;
	int a[SIZE], n;
	cout << "Nhap so phan tu : ";
	cin >> n;
	nhap(a, n);
	cout << "Mang vua nhap la :\n";
	xuat(a, n);
	cout << "Trung binh cong cac phan tu trong mang la : " << tbCong(a, n) << endl;
	cout << "Mang sau khi sap xep :\n";
	sapXepTang(a, n);
	xuat(a, n);
	system("pause");
	return 0;
}
void nhap(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Phan tu thu " << i + 1 << " : ";
		cin >> arr[i];
	}
}
void xuat(const int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
void sapXepTang(int arr[], int n)
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
double tbCong(const int arr[], int n) // Tính trung bình cộng
{
	double tong = 0;
	for (int i = 0; i < n; i++)
		tong += arr[i];
	return tong / n;

}