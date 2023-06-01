#include <iostream >
using namespace std;
 // Khai báo nguyên mẫu hàm
double tinhDT_HCN(double dai, double rong);
int main()
{
	double d, r;
	cout << "Nhap chieu dai : " ;
	cin >> d;
	cout << "Nhap chieu rong : ";
	cin >> r;
	double dt = tinhDT_HCN(d, r);
	cout << "Dien tich HCN la : " << dt << endl;
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