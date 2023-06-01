//Viết chương trình nhận vào chiều cao h của một hình tam giác(h > 0).Xuất ra
//màn hình tam giác có chiều cao h dưới dạng các dấu* .
//a.Tam giác với h = 5:
//*
//**
//* *
//*  *
//*****
//b.Tam giác với h = 4
//   *
//  **
// ***
//****
//c.Tam giác với h = 4
//****
//***
//**
//*
//d.Tam giác với h = 4
//****
// ***
//  **
//   *
//e.Tam giác với h = 4
//   *
//  * *
// * * *
//* * * *
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
void tamgiacCauA(int n);
void tamgiacCauB(int n);
void tamgiacCauC(int n);
void tamgiacCauD(int n);
void tamgiacCauE(int n);
void tamgiacCauF(int n);
int main()
{
	int n;
	do
	{
		cout << "Nhap canh cua tam giac (n > 0) : ";
		cin >> n;
		if (n <= 0)
		{
			cout << "Nhap sai ! Nhap lai canh cua tam giac (n > 0) : ";
			cin >> n;
		}

	} while (n <= 0);
	cout <<"MENU HINH MUON IN RA\n";
	cout << "1. Tam giac cau A \n";
	cout << "2. Tam giac cau B \n";
	cout << "3. Tam giac cau C \n";
	cout << "4. Tam giac cau D \n";
	cout << "5. Tam giac cau E \n";
	cout << "6. Tam giac cau F \n";
	cout << "Toi chon hinh so : ";
	int m;
	cin >> m;
	switch (m)
	{
	case 1:
		tamgiacCauA(n);
		break;
	case 2:
		tamgiacCauB(n);
		break;
	case 3:
		tamgiacCauC(n);
		break;
	case 4:
		tamgiacCauD(n);
		break;
	case 5:
		tamgiacCauE(n);
		break;
	case 6:
		tamgiacCauF(n);
		break;
	default:
		cout << "Nhap sai nhap lai !\n";
		break;
	}
	system("pause");
	return 0;
}
void tamgiacCauA(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i || i == n)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
void tamgiacCauB(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int k = 1; k <= n; k++)
		{
			if (k <= n - i)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
}void tamgiacCauC(int n)
{
	int i = 1;
	for (i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << "* ";
		cout << endl;
	}
}
void tamgiacCauD(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "  ";
		for (int j = i; j < n; j++)
			cout << " *";
		cout << endl;
	}
}
void tamgiacCauE(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void tamgiacCauF(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << setw(n - i + 2); // Khoảng cách từ trái màn hình đến * đầu tiên
		if (i == 1)
			cout << "* ";
		else if (i > 1 && i < n)
			cout << "* " << setw(2 * i - 2) << "* ";
		else
			for (int j = 1; j <= i; j++) // Duyệt vòng lập in ra i dấu * cách i khoảng trắng
				cout << "* ";
		cout << endl;
	}
	cout << endl;
}


