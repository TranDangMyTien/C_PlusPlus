/*Viết chương trình giải và biện luận
phương trình bậc hai : ax2 + bx + c = 0.*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
	double x1, x2, a, b, c, denta ;
	cout << "GIAI PHUONG TRINH BAC 2 ax^2 + bx + c = 0 \n";
	cout << "Nhap cac gia tri a, b, c tai day :";
	cin >> a >> b >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << " Phuong trinh vo so nghiem ";
			}
			else 
			{
				cout << " Phuong trinh vo nghiem ";
			}

		}
		else
		{
			cout << " Phuong trinh bac nhat co nghiem duy nhat " << " x = " << -c / b << endl;
		}

	}
	else 
	{
		denta = b * b - 4 * a * c;
		if (denta > 0)
		{
			x1 = (-b + sqrt(denta)) / (2 * a);
			x2 = (b + sqrt(denta)) / (2 * a);
			cout <<fixed << setprecision (2) <<"Hai nghiem cua phuong trinh x1, x2 lan luot la :" << x1 << "," << x2 << endl;
		}
		else if (denta == 0)
		{
			cout <<fixed << setprecision (2) <<"Phuong trinh co nghiem kep x1 = x2 = " << -b / 2 * a << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem " << endl;
		}
	}
	system("pause");
	return 0;
}