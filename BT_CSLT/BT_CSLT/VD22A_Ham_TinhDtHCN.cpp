#include <iostream >
using namespace std;
// Khai báo nguyên mẫu hàm
double tinhDT_HCN (double dai, double rong);
int main()
{
	double dt1 = tinhDT_HCN(10, 5);
	double dt2 = tinhDT_HCN(7, 6);
	system("pause");
	return 0;
}
// Định nghĩa hàm, viết code cho hàm 
double tinhDT_HCN (double dai , double rong)
{
	double dientich;
	dientich = dai * rong;
	return dientich ;
}