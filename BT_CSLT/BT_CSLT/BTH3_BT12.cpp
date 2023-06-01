/*Viết chương trình giải và biện luận
phương trình bậc nhất: ax + b = 0.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, b, x;
	cout << "GIAI PHUONG TRINH BAC NHAT ax + b = 0  \n";
	cout << "Nhap vao cac gia tri a, b tai day : ";
	cin >> a >> b ;
	if (a == 0)
	{if ( b==0 )
		cout << "Phuong trinh co vo so nghiem ";
	else 
		cout << "Phuong trinh vo nghiem ";
	}
	else
	{
		x = (double) -b / a;
		cout << fixed << setprecision (2) <<"Phuong trinh co nghiem duy nhat x bang " << x << endl;
	}
	system("pause");
	return 0;
}