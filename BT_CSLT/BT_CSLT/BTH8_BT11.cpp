/*11. Viết hàm sắp xếp các phần tử trong mảng tăng dần*/
#include <iostream>	
using namespace std;
void nhap_mang(int arr[], int n);
void Hoanvi(int& a, int& b);
void Sapxep(int arr[], int n);
void xuat_mang(int arr[], int n);
int main() 
{
	const int MAX = 50;
	int arr[MAX], n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhap_mang(arr, n);
	Sapxep(arr, n);
	cout << "Cac phan tu sau khi duoc sap xep : ";
	xuat_mang(arr, n);
	system("pause");
	return 0;
}

void nhap_mang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu arr[" << i << "] : ";
		cin >> arr[i];
	}
}
void Hoanvi(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void Sapxep(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				Hoanvi(arr[i], arr[j]);
			}
		}
	}
}
void xuat_mang(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}