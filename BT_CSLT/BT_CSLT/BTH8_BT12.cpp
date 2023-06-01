/*12. Viết hàm xóa các phần tử trùng nhau trong mảng*/
#include <iostream>	
using namespace std;
void nhapmang(int arr[], int n);
void xuatmang(int arr[], int n);
void hoan_vi(int& a, int& b);
void sap_xep(int arr[], int n);
int main() 
{
	const int MAX = 50;
	int arr[MAX], n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhapmang(arr, n);
	sap_xep(arr, n);
	cout << "Sau khi xoa cac phan tu trung nhau : ";
	xuatmang(arr, n);
	system("pause");
	return 0;
}

void nhapmang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu arr[" << i << "] : ";
		cin >> arr[i];

	}
}

void hoan_vi(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void sap_xep(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				hoan_vi(arr[i], arr[j]);
			}
		}
	}
}

void xuatmang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[i + 1]) {
			cout << arr[i] << " ";
		}
	}
}