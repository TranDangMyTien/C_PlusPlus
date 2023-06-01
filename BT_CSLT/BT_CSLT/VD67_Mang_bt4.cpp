#include <iostream>
using namespace std;
void nhap(int arr[], int n);
void xuat(const int arr[], int n);
double tbCong(const int arr[], int n);
void sapXepTang(int arr[], int n);
void hoanvi(int& a, int& b);
void taoNgauNhien(int arr[], int n);// tạo các giá trị từ 10 đến 50 cho các phần tử trong mảng
int tim(int arr[], int n, int x); // tìm và trả về vị trí trong mảng arr
void xoaTheoViTri(int arr[], int& n, int vitri);
void xoaPhanTu(int arr[], int& n, int x);
void xoaHet(int arr[], int& n, int x); // xóa tất cả phần tử x trong mảng arr
int main()
{
	const int SIZE = 50;
	int a[SIZE], n , x;
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
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << " , ";
	}
	cout << arr[n - 1];
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
void taoNgauNhien(int arr[], int n)// tạo các giá trị từ 10-50 cho các phần tử trong mảng
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 41 + 10;
}
int tim(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1; // trả về số nào cũng được 
}
void xoaTheoViTri(int arr[], int& n, int vitri)// xóa phần tử tại vị trí 
{ // 3  5  7  6  2  8 : xóa phần tử tại vị trí 2 ( 7 )
	for (int i = vitri + 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}
	n--;
}
void xoaPhanTu(int arr[], int& n, int x)
{
	int vt = tim(arr, n, x);
	if (vt != -1)// tìm thấy
		xoaTheoViTri(arr, n, vt);
}
void xoaHet(int arr[], int& n, int x)
{
	int vt = tim(arr, n, x);
	while (vt != -1)
	{
		xoaTheoViTri(arr, n, vt);
		int vt = tim(arr, n, x);
	}
}