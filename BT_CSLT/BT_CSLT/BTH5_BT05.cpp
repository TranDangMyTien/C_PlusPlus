//Viết chương trình nhận vào 2 số nguyên dương n1 và n2(n1 < n2).Đếm và xuất
//kết quả xem từ n1 đến n2 có bao nhiêu số là số nguyên tố ? Biết rằng số nguyên
//tố là số từ 2 trở lên, chỉ chia hết cho 1 và chính bản thân nó.
#include <iostream >
using namespace std;
bool KTSNT(int n);
int main ()
{
	int n1, n2;
	int dem = 0;
	do
	{
		cout << "Nhap vao n1, n2 ( n1 < n2) : ";
		cin >> n1 >> n2;
		if (n1 >= n2 || n1 <= 0 || n2 < 0)
		{
			cout << "Nhap sai! Moi ban nhap lai :";
			cin >> n1 >> n2;
		}
	} while (n1 >= n2 || n1 <= 0 || n2 < 0);
	cout << "Cac so nguyen to la : ";
	for (int i = n1; i <= n2; i++)
	{
		if (KTSNT(i) == true)
		{
			cout << i << " ";
			dem++;
		}
	}
	cout << endl;
	cout << "Tu " << n1 << " den " << n2 << " co " << dem << " so nguyen to " << endl;
	system("pause");
	return 0;
}
bool KTSNT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
