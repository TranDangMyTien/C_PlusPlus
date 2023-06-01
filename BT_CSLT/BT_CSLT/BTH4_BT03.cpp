/* Tính và xuất ra màn hình
kết quả tổng các số lẻ và tổng các số chẵn trong phạm vi từ 1 đến n.*/

#include <iostream>
using namespace std;
int main()
{
	int n, i = 1, tongChan = 0, tongLe = 0 ;
	do
	{
		cout << "Nhap so nguyen duong n : ";
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai nhap lai (n > 1)" << endl;
	} while (n <= 1);
	while (i <= n)
	{
		if (i % 2 == 0)
			tongChan += i;
		else
			tongLe += i; 
		i++;
	}
	cout << "Tong cac so chan tu 1 den " << n << " la = " << tongChan << endl;
	cout << "Tong cac so le tu 1 den " << n << " la = " << tongLe << endl;
	system("pause");
	return 0;
}