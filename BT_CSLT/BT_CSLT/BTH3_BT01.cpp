//1. Viết chương trình nhận vào điểm trung bình 1 môn học của một sinh viên.Xuất
//ra màn hình thông báo cho biết sinh viên này đậu hay rớt ? Biết rằng nếu điểm
//trung bình từ 5 trở lên là đậu, ngược lại là rớt.
#include <iostream>
using namespace std;
int main() {
	double diem;
	cout << "Nhap diem trung binh: ";
	cin >> diem;
	if (diem >= 5) {
		cout << "Dau\n";
	}
	else {
		cout << "Rot\n";
	}
	return 0;
}