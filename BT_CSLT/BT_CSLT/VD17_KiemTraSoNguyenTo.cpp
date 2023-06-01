/*Viết chương trình kiểm tra một số nguyên n được nhập vào
có phải là số nguyên tố hay không? Biết rằng số nguyên tố là
số từ 2 trở lên, chỉ chia hết cho 1 và cho chính nó. */
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	bool laNguyenTo = true;
	cout  << "Nhap so nguyen tai day : ";
	cin >> n ;
	if (n >= 2)
	{
		int i = 2;
		while (i <= sqrt(static_cast<double>(n)) && laNguyenTo == true) // Ép kiểu về số thực 
		{
			if (n % i == 0)
				laNguyenTo = false;
			i++;
		}
	}
	else
		laNguyenTo = false;
	if (laNguyenTo == true)
		cout << n << " la so nguyen to\n";
	else
		cout << n << " khong la so nguyen to\n";
}
