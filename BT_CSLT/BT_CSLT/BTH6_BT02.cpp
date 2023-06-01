//2. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết :
//a.Hàm tìm số lớn nhất giữa 2 số nguyên.
//b.Hàm tìm số lớn nhất giữa 3 số nguyên.
// Xây dựng hàm tìm số lớn nhất của hai số nguyên.
#include <iostream>
using namespace std;
int timsoLonNhatTrong2So(int, int); // Thêm a , b hay không đều được
int timsoLonNhatTrong3So(int, int, int);
int main()
{
	int x, y,z; // muốn đặt sao cũng được , ko bắt buộc giống phía dưới 
	cout << " Nhap hai so nguyen thu nhat : ";
	cin >> x;
	cout << " Nhap hai so nguyen thu hai : ";
	cin >> y;
	cout << " Nhap hai so nguyen thu ba : ";
	cin >> z;
	int soLonNhatTrong2So = timsoLonNhatTrong2So(x, y);
	cout << " So lon nhat trong 2 so dau la : " <<soLonNhatTrong2So  << endl;
	int soLonNhatTrong3So = timsoLonNhatTrong3So(x, y, z);
	cout << " So lon nhat trong 3 so la : " << soLonNhatTrong3So << endl;
	system("pause");
	return 0;
}
int timsoLonNhatTrong2So (int a, int b)
{
	/*int max = a;
	if (max < b)
		max = b;
	return (max);*/
	return (a >= b ? a : b);
}
int timsoLonNhatTrong3So(int a, int b,  int c)
{
	int max = a;
	if (max < b) 
	{
		max = b;
	}
	if (max < c) 
	{
		max = c;
	}
	return max;
}
