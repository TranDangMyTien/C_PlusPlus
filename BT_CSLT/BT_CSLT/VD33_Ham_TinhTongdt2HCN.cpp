#include <iostream>
using namespace std;
void tinhDT_CV(double dai, double rong, double& dientich, double& chuvi);
int main()
{
	double d1, r1, d2, r2, dt1, cv1, dt2, cv2;
	cout << "Nhap chieu dai, rong hcn1:";
	cin >> d1 >> r1;
	cout << "Nhap chieu dai, rong hcn2:";
	cin >> d2 >> r2;
	tinhDT_CV(d1, r1, dt1, cv1);
	tinhDT_CV(d2, r2, dt2, cv2);
	cout << "Tong dt 2 hcn la : " << dt1 + dt2 << endl;
	cout << "Tong cv 2 hcn la : " << cv1 + cv2 << endl;
	system("pause");
	return 0;
}
void tinhDT_CV(double dai, double rong, double& dientich, double& chuvi)
{
	dientich = dai * rong;
	chuvi = 2 * (dai + rong);
}