//Viết chương trình cho người dùng nhập giá trị cho m số nguyên.Tính và xuất
//tổng các số vừa nhập.Giao diện chương trình khi thực hiện được mô phỏng ở ví
//dụ sau :
//Ban can bao nhieu so : 3
//Nhap so thu 1 : 6
//Nhap so thu 2 : 4
//Nhap so thu 3 : 2
//Tong 3 so vua nhap la : 12
#include<iostream>
using namespace std;
int main() {
	int m, n, tong = 0;
	cout << " Nhap so luong so :";
	cin >> m;
	if (m > 0)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << " Nhap so thu " << i << " : ";
			cin >> n;
			tong += n;
		}
		cout << " Tong " << m << " so vua nhap la " << tong << endl;
	}
	else
		cout << " Nhap sai \n";
	system("pause");
	return 0;
}