// Viết chương trình nhập vào một số nguyên dương n.
// Tính: S = 1 + 2 + 3 + … + n
#include <iostream>
using namespace std;
int main()
{
	int n;
	int i = 1; //Khởi tạo biến đếm i = 1
	int tong = 0; //Khởi tạo biến tong =0
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	while (i <= n)
	{
		tong += i; //Cộng tích lũy kết quả vào biến tong
		i++; //Tăng i lên 1 để lặp lại kiểm tra điều kiện lặp
	}
	cout << "Tong tu 1 den " << n << " la = " << tong
		<< endl;
	return 0;
}