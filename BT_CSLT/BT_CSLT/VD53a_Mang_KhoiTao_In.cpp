#include <iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 10;
	double a[MAXSIZE];
	//Gán giá trị 
	for (int i = 0; i <= MAXSIZE - 1; i++) // i < MAXSIZE cũng được
		a[i] = 0;
	//Xuất giá trị 
	for (int i = 0; i <= MAXSIZE - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
// Tên của  hằng viết in hoa để phân biệt với biến