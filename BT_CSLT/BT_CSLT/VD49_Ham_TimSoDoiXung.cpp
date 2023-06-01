#include<iostream>
using namespace std;
int dao(int n);
int main()
{
	int n;
	cout << "Nhap so n (n>0) : ";
	cin >> n; // 1221
	while (n <= 0)
	{
		cout << "Nhap sai nhap lai !";
		cin >> n;
	}
	int k = dao(n);
	if (k == n)
		cout << "La so doi xung " << endl;
	else
		cout << "Khong phai so doi xung " << endl;
	system("pause");
	return 0;
}
int dao(int n)
{
	int somoi = 0;
	int du;
	while (n > 0)
	{
		du = n % 10; // du=1 ; du=2 ; du=2 ; du=1
		somoi = somoi * 10 + du;// somoi=1 ; somoi=10+2=12; somoi=120+2=122 ; somoi=1220+1= 1221
		n /= 10;// 122 ; 12 ; 1
	}
	return somoi;
}