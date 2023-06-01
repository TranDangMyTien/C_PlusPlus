//1. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết :
//a.Hàm tính diện tích hình chữ nhật.
//b.Hàm tính chu vi hình chữ nhật
#include <iostream >
using namespace std;
// Khai báo nguyên mẫu hàm
double tinhDT_HCN(double dai, double rong);
double tinhCV_HCN(double dai, double rong);
int main()
{
	double a, b;
	cout << "Nhap vao chieu dai hinh chu nhat : ";
	cin >> a;
	cout << "Nhap vao chieu rong hinh chu nhat : ";
	cin >> b;
	double dt = tinhDT_HCN(a, b);
	cout << "Dien tich hinh chu nhat la : " << dt << endl;
	double cv = tinhCV_HCN(a, b);
	cout << "Chu vi hinh chu nhat la : " << cv << endl;
	system("pause");
	return 0;
}
// Định nghĩa hàm, viết code cho hàm 
double tinhDT_HCN(double dai, double rong)
{
	double dientich;
	dientich = dai * rong;
	return dientich;
}
double tinhCV_HCN(double dai, double rong)
{
	double chuvi;
	chuvi = 2 * (dai + rong);
	return chuvi;
}