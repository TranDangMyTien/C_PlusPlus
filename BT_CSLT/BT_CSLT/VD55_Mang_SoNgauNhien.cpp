// Tạo ngẫu nhiên một mảng số nguyên 10 phần tử số nguyên < 20
#include <iostream>
#include <ctime> // Vì dùng srand (time(0))
using namespace std;
int main()
{
	srand(time(0)); // Thay đổi số sau mỗi lần debug
	const int MAX = 10;
	int a[MAX];
	for (int i = 0; i <= MAX - 1; i++)
		a[i] = rand() % 20; 
	double tong = 0;
	for (int i = 0; i <= MAX - 1; i++)
		tong += a[i];
	cout << "\nTong = " << tong;
	cout << "\nTrung binh = " << tong / MAX;
	system("pause");
	return 0;
}