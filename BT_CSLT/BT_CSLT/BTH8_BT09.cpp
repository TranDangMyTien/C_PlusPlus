
#include <iostream>
using namespace std;
void NHAP(int arr[], int n);
int gtdthuc(int arr[], int n, int x);
int main() {
	const int MAX = 50;
	int arr[MAX], n, x;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	cout << "Nhap x : ";
	cin >> x;
	NHAP(arr, n);
	cout << "Gia tri cua da thuc = " << gtdthuc(arr, n, x) << endl;
	system("pause");
	return 0;
}

void NHAP (int arr[], int n) {
	for (int i = 0; i <= n; i++) {
		cout << "Nhap phan tu arr[" << i << "] : ";
		cin >> arr[i];
	}
}

int gtdthuc(int arr[], int n, int x) {
	int ans = 0;
	for (int i = n; i >= 0; i--) {
		ans += arr[i] * (pow(x, i));
	}
	return ans;
}