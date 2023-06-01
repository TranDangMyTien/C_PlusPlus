//5. Viết chương trình nhận vào điểm tích lũy của 1 sinh viên.Xuất ra màn hình kết
//quả xếp loại của sinh viên đó dựa trên điểm tích lũy.Biết rằng :
//-Điểm tích lũy từ 9 trở lên xếp loại xuất sắc.
//- Điểm tích lũy từ 8 đến dưới 9 xếp loại giỏi.
//- Điểm tích lũy từ 7 đến dưới 8 xếp loại khá.
//- Điểm tích lũy từ 6 đến dưới 7 xếp loại trung bình khá.
//- Điểm tích lũy từ 5 đến dưới 6 xếp loại trung bình.
//- Điểm tích lũy dưới 5 là yếu.
#include <iostream>
using namespace std;
int main() {
	double diem;
	cout << "Nhap diem vao tai day : ";
	cin >> diem;
	if (diem >= 9) {
		cout << "Xep loai xuat sac\n ";
	}
	else if (diem < 9 && diem >= 8) {
		cout << "Xep loai gioi\n ";
	}
	else if (diem < 8 && diem >= 7)
	{
		cout << "Xep loai kha\n";
	}
	else if (diem < 7 && diem >= 6) {
		cout << "Xep loai trung binh kha\n";
	}
	else if (diem < 6 && diem >= 5) {
		cout << "Xep loai trung binh\n";
	}
	else {
		cout << "Xep loai yeu\n";
	}
	return 0;
}