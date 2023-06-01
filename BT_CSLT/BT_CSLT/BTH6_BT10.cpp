//10.Viết hàm kiểm tra một số nguyên n có phải là số hoàn thiện hay không ? Viết chương
//trình kiểm tra hàm vừa viết.Biết rằng số hoàn thiện là số có tổng các ước số(kể cả 1)
//bằng chính nó.Ví dụ : 6 là số hoàn thiện vì 6 = 1 + 2 + 3 (1, 2, 3 là các ước của 6).
#include <iostream>
using namespace std;
bool sohoanthien(int n);
int main() 
{
	int n;
	do
	{
		cout << "Nhap 1 so nguyen duong n: ";
		cin >> n;
	} while (n <= 0);
	if (sohoanthien(n) == 1)
		cout << "Day la so hoan thien.";
	else cout << "Day khong la so hoan thien.";
	system("pause");
	return 0;
}
bool sohoanthien(int n) 
{
	int tong = 1; // n=6
	for (int i = 2; i <= n/2; i++) 
	{
		if (n % i == 0)
			tong += i; // ht=1 ; ht=1+2=3 ; ht=3+3=6

		if (tong == n) // ht=n=6
			return 1;
	}
	return 0;
}