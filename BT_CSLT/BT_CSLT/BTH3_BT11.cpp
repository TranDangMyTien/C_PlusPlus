/*.Viết chương trình nhận vào 1 số nguyên.
Xuất ra màn hình số nguyên đó là số âm?
Số dương hay số 0 ?*/
#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "Nhap vao mot so nguyen : ";
	cin >> a;
	if (a > 0)
		cout << "La so nguyen duong ";
	else if (a < 0)
		cout << "La so nguyen am ";
	else
		cout << "La so 0 ";
	system("pause");
	return 0;
}