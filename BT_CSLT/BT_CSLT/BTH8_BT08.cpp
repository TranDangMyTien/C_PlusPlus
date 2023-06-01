/*8. Viết hàm đếm số lần xuất hiện của một phần tử trong một mảng số nguyên. Hàm
nhận vào ba tham số: mảng a, số phần tử n và phần tử x. Hàm trả về số lần xuất
hiện của x trong mảng a. Viết chương trình kiểm tra hàm*/
#include <iostream>
using namespace std;
void nhapp(int a[], int n);
int slxh(int a[], int n, int x);
int main() {
	const int MAX = 50;
	int a[MAX], n, x;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	nhapp(a, n);
	cout << "So lan xuat hien cua phan tu " << x << " la : " << slxh(a, n, x) << " lan." << endl;
	system("pause");
	return 0;
}

void nhapp(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu a[" << i << "] : ";
		cin >> a[i];
	}
}
int slxh(int a[], int n, int x) { // so lan xuat hien
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) cnt++;
	}
	return cnt;
}