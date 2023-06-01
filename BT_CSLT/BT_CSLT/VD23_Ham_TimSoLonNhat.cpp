// Xây dựng hàm tìm số lớn nhất của hai số nguyên.
#include <iostream>
using namespace std;
int timSoLon(int, int); // Thêm a , b hay không đều được
int main()
{
	int x, y; // muốn đặt sao cũng được , ko bắt buộc giống phía dưới 
	cout << " Nhap hai so nguyen : ";
	cin >> x >> y;
	int soLonHon = timSoLon( x, y);
	cout << " So lon hon la : " << soLonHon << endl;
	system("pause");
	return 0;
}
int timSoLon(int a, int b)
{
	/*int max = a;
	if (max < b)
		max = b;
	return (max);*/
	return ( a >= b ? a : b );
}