//Viết chương trình có giao diện là một menu lựa chọn 1 trong 4 phép tính(+-*/ )
//và lựa chọn thoát.Khi người dùng chọn lựa chọn nào sẽ xử lý tương ứng.
//+ Với 4 phép tính thì cho người dùng nhập tiếp 2 số nguyên a và b.Thực hiện
//phép tính đã chọn với 2 số đó (lưu ý lỗi chia 0 và kết quả phép chia phải làm tròn
//	lấy 2 chữ số thập phân).
//	+ Với lựa chọn thoát thì sẽ kết thúc chương trình.
//	+ Sau khi lựa chọn và tính 1 kết quả phép tính tương ứng, chương trình thể hiện
//	lại menu cho người dùng tiếp tục có lựa chọn phép tính hay thoát để kết thúc.

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double a, b;
	do {
		system("cls");
		cout << "Cac phep toan muon tinh\n";
		cout << "1. Phep cong \n2. Phep tru \n3. Phep nhan \n4. Phep chia \n5. Thoat\n";
		cout << "Moi ban chon ( Cac so tu 1 den 5): ";
		cin >> n;
		switch (n)
		{
		case 1:
			cout << "Nhap so thu nhat: ";
			cin >> a;
			cout << "Nhap so thu hai: ";
			cin >> b;
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case 2:
			cout << "Nhap so thu nhat: ";
			cin >> a;
			cout << "Nhap so thu hai: ";
			cin >> b;
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case 3:
			cout << "Nhap so thu nhat: ";
			cin >> a;
			cout << "Nhap so thu hai: ";
			cin >> b;
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case 4:
			cout << "Nhap so thu nhat: ";
			cin >> a;
			cout << "Nhap so thu hai: ";
			cin >> b;
			if (b == 0)
			{
				cout << "Loi chia 0\n\a";
			}
			else
			{
				cout << a << " / " << b << " = " << fixed << setprecision(2) << a / b << endl;
			}
			break;
		case 5:
			cout << "Thoat khoi phep tinh " << endl;
			break;
		default :
			cout << "Nhap sai nhap lai !\n";
			break;
		} 
		system("pause");
	} while (n != 5);
	system("pause"); // Dừng màn hình
	return 0;
}