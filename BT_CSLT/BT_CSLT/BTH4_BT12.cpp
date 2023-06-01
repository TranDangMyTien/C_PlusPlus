//Viết chương trình nhận vào 1 số nguyên n > 0. Tách từng chữ số của n và thể
//hiện chúng dưới dạng cách nhau một khoảng cách.
//Ví dụ n = 3456 thì kết quả từng chữ số là 3 4 5 6
#include <iostream>
using namespace std;
int main()
{
	int n, sochia = 1, dem = 0;
	cout << "Nhap so nguyen (n > 0) : ";
	cin >> n;
	int tam = n;
	if (n > 1)
	{
		while (tam > 10)  //3456
		{
			tam = tam / 10; //345  ; 34  ; 3
			sochia = sochia * 10; //10  ; 100  ; 1000
		}
		tam = n; // 3456
		while (tam > 0)
		{
			dem = tam / sochia; // 3456/1000=3
			tam = tam % sochia; // 3456%1000=456
			sochia = sochia / 10;  //1000/10=100 
			cout << dem << " "; 
		}
	}
	else
		cout << " Nhap sai ! " << endl;
	system("pause");
	return 0;
}