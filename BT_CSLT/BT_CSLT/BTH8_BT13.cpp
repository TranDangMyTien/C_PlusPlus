/*13. Cho mảng gồm các số nguyên có giá trị trong khoảng từ 1 đến k (k < 100). Viết
hàm in ra số lần xuất hiện của mỗi phần tử trong mảng.*/
#include <iostream>
using namespace std;
void nhap(int arr[], int n, int& m);
void hoanvi(int& a, int& b);
void sapxep(int arr[], int n);
void xuat(int arr[], int n, int& m, int tmp[]);
int main() {
	const int MAX = 100;
	int arr[MAX], n, cnt[MAX], m;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhap(arr, n, m);
	sapxep(arr, n);
	xuat(arr, n, m, cnt);
	system("pause");
	return 0;
}

void nhap(int arr[], int n, int& m) {
	m = arr[0];
	for (int i = 1; i <= n; i++) {
		cout << "Nhap phan tu arr[" << i << "] : ";
		cin >> arr[i];
		m = max(m, arr[i]);  // tim so lon nhat cua mang
	}
}

void hoanvi(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void sapxep(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (arr[i] > arr[j]) {
				hoanvi(arr[i], arr[j]);
			}
		}
	}
}

void xuat(int arr[], int n, int& m, int tmp[]) {
	for (int i = 1; i <= m; i++) {  // chay tu 1 den so lon nhat cua mang 
		tmp[i] = 0;                 // sau do dung tmp bat dau = 0 de sau nay thuc hien phep dem
	}
	for (int i = 1; i <= n; i++) {
		tmp[arr[i]]++;             // dem xem ptu nay xuat hien bao nhiu lan

	}
	for (int i = 1; i <= n; i++) {
		if (arr[i] != arr[i + 1]) {
			cout << arr[i] << " " << tmp[arr[i]] << endl;
		}
	}
}