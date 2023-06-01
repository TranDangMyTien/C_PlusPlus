//8. Chuỗi số Fibonacci bắt đầu từ 0 và 1, số kế tiếp là tổng của hai số trước đó.
//0, 1, 1, 2, 3, 5, 8, 13, 21, …
//Viết hàm tính số Fibonacci thứ n và chương trình kiểm tra hàm đã viết
#include<iostream>
using namespace std;
int fibo(int n);
int main()
{
	int n;
	cout << "Nhap so nguyen n (n > 0 ): ";
	cin >> n;
	if (n > 0)
	cout << "So fibonacci thu " << n << " la : " << fibo(n) << endl;
	system("pause");
	return 0;
}
int fibo(int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
	int u = 0, v = 1, i = 2, t;
	do
	{
		t = u + v;
		i++;
		u = v;
		v = t;
	} while (i < n);
	return t;
}