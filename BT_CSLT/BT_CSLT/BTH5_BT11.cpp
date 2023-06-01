//Viết chương trình nhận vào 1 số nguyên dương c là chiều dài cạnh của hình
//vuông(c > 0). Xuất ra hình vuông dưới dạng các dấu * .
//a.Hình vuông với n = 4
//****
//****
//****
//****
//b.Hình vuông với n = 4
//****
//*  *
//*  *
//****
#include<iostream>
using namespace std;
void hinhVuongCauA(int n);
void hinhVuongCauB(int n);
int main()
{
	int n;
	do
	{
		cout << "Nhap chieu dai canh cua hinh vuong : ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai! Moi nhap lai chieu dai canh (a > 0) cua HV: ";
			cin >> n;
		}
	} while (n <= 0);
	cout << "MENU HINH MUON IN RA\n";
	cout << "1. Hinh vuong cau A\n";
	cout << "2. Hinh vuong cau B\n";
	cout << "Toi chon hinh so : ";
	int m;
	cin >> m;
	switch (m)
	{
	case 1:
		hinhVuongCauA(n);
	    break;
	case 2:
		hinhVuongCauB(n);
		break;
	default:
		cout << "Nhap sai nhap lai !\n";
		break;
	}
	system("pause");
	return 0;
}
void hinhVuongCauA(int n)
{
	
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void hinhVuongCauB(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			if (i == 1 || k == 1 || i == n || k == n)
			{
				cout << "*" << " ";
			}
			else
				cout << "  ";
		}
		cout << endl;
	}
}
