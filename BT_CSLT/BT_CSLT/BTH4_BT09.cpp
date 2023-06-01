//Viết chương trình nhận vào 2 số nguyên dương n1 và n2(n1 < n2).Đếm và xuất
//ra màn hình kết quả có bao nhiêu số là ước của 10 trong phạm vi từ n1 đến n2.
#include <iostream>
using namespace std;

int main()
{
	int n1, n2, dem = 0;
	cout << "Nhap pham 2 so nguyen duong n1, n2 (n1 < n2): ";
	cin >> n1 >> n2;
	if (n1 <= n2 && n1 > 0 && n2 > 0) 
	{
		while (n1 <= n2)
		{ // Ước của 10 là 1,2,5,10
			if (10 % n1 == 0)
				dem++;
			n1++;
		}
		cout << "Co tat ca " << dem << " uoc so.";
	}
	else cout << "Nhap sai!";
	system("pause");
	return 0;
}