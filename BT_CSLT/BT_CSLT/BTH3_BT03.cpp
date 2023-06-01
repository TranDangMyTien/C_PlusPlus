//3. Viết chương trình nhận vào số nguyên n.Xuất ra màn hình kết quả trị tuyệt đối
//của số nguyên đó.
#include <iostream>
using namespace std;
int main() {
	int n;
	int triTuyetDoi;
	cout << "Nhap so nguyen : ";
	cin >> n;
	if (n >= 0) {
		triTuyetDoi = n;
		cout << "Gia tri tuyet doi cua " << n << " la " << triTuyetDoi << endl;
	}
	else {
		triTuyetDoi = -n;
		cout << "Gia tri tuyet doi cua " << n << " la " << triTuyetDoi << endl;
	}
	return 0;
}
