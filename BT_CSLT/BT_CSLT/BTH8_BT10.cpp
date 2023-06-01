/*10. Viết chương trình in các số nguyên tố từ 2 đến n bằng cách dùng sàng Eratosthenes
(sieve of Eratosthenes). Thuật giải như sau:
Bước 1. Tạo mảng chứa các số nguyên từ 2..n.
Bước 2. Bắt đầu từ số nguyên tố đầu tiên p = 2.
Bước 3. Đánh dấu tất cả bội số của p không phải là số nguyên tố (2p,3p,4p,...).
Bước 4. Tìm số kế tiếp lớn hơn p chưa bị đánh dấu. Nếu không có thì thuật giải kết
thúc. Ngược lại đặt p là số này và quay lại bước 3.
*/
#include <iostream>
using namespace std;
void nhap(int arr[], int n);
bool danhdau(int arr[], int n);
void xuat(int arr[], int n);
int main() {
	const int MAX = 50;
	int arr[MAX], n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	xuat(arr, n);
	system("pause");
	return 0;
}

bool danhdau(int arr[], int n) {
	for (int i = 2; i <= n; i++) {
		arr[i] = true;
	}
	return false;
}

void xuat(int arr[], int n) {
	danhdau(arr, n);
	for (int i = 2; i <= n; i++) {
		if (arr[i] == true) {
			for (int j = i * i; j <= n; j += i) {
				arr[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (arr[i]) {
			cout << i << " ";
		}
	}
}