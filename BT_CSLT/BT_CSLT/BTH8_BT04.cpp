//4. Viết chương trình nhập vào một mảng số nguyên(tối đa 100 phần tử), tính và in ra
//tổng và giá trị trung bình của các phần tử trong mảng.
#include<iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 100;
	double values[MAXSIZE];
	int currentSize;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> currentSize;
	double Tong = 0;
	for (int i = 0; i < currentSize; i++)
	{
		cin >> values[i];
	}
	for (int i = 0; i < currentSize; i++)
	{
		Tong += values[i];
	}
	cout << "Tong la : " << Tong << endl;
	cout << "Trung binh tong la : " << (double)Tong / currentSize << endl;
	system("pause");
	return 0;
}