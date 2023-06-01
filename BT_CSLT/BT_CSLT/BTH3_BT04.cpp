//4. Viết chương trình nhận vào 2 số nguyên.Xuất ra màn hình kết quả so sánh giữa
//hai số(số thứ nhất lớn hơn, nhỏ hơn hay hai số bằng nhau).
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Nhap so nguyen thu nhat : ";
	cin >> a;
	cout << "Nhap so nguyen thu hai : ";
	cin >> b;
	if (a > b) {
		cout << "So thu nhat lon hon so thu hai\n";
	}
	else if (a = b) {
		cout << "Hai so bang nhau\n";
	}
	else { cout << "So thu nhat nho hon so thu hai\n"; }
	return 0;
}