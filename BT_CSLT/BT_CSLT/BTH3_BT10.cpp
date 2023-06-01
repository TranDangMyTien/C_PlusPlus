/*Viết chương trình nhận vào 1 số nguyên.
Xuất ra màn hình số nguyên đó là số
chẵn hay số lẻ.*/
#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "Nhap vao mot so nguyen tai day : ";
	cin >> a;
	if (a % 2 == 0)
		cout << " la mot so nguyen chan \n ";
	else
		cout << " la mot so nguyen le \n ";
	system("pause");
	return 0;
}
