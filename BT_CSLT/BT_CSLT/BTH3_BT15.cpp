/*.Viết chương trình nhận vào số đo 3 cạnh của 1 tam giác.
Kiểm tra xem 3 cạnh đó có hợp lệ hay không? 
Nếu hợp lệ thì tam giác đó là loại tam giác gì 
(đều, vuông,cân, vuông cân hay thường) ? */
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
double a, b, c;
cout << "CHUONG TRINH XAC DINH TAM GIAC " << endl;
cout << "Nhap vao ba canh cua tam giac " << endl;
cout << "Nhap vao canh thu nhat : "; cin >> a;
cout << "Nhap vao canh thu hai : "; cin >> b;
cout << "Nhap vao canh thu ba : "; cin >> c;
if (a < (b + c) && b < (a + c) && c < (a + b))
{
	if (a == b && b == c)
		cout << "Tam giac deu \n";
	else if (a == b || b == c || a == c)
		cout << "Tam giac can \n";
	else if (a * a == (b * b + c * c) || b * b == (a * a + c * c) || c * c == (a * a + b * b))
		cout << "Tam giac vuong \n";
	else
		cout << "Tam giac thuong \n";
}
else
cout << "Tam giac khong hop le ! \n";
system("pause");
return 0;
}