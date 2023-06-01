// HÀM VOID 
#include <iostream>
using namespace std;
void inHinhVuong(int canh);
int main()
{
	inHinhVuong(4);
	// Hàm void không gán giá trị, nhập trực tiếp
	system("pause");
	return 0;
}
void inHinhVuong(int canh)
{
	for (int i = 1; i <= canh; i++)
	{
		if (i == 3)
			return;
		// Nếu trong hàm VOID có return thì chỉ là : return ;
		for (int j = 1; j <= canh; j++)
			cout << "*\t";
		cout << endl;
	}
	// Hàm void không cần return 
}