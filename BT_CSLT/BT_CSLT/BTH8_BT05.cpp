//5. Viết chương trình nhập vào một mảng số nguyên(tối đa 100 phần tử) và vị trí của
//phần tử cần xóa, xóa phần tử tại vị trí đã nhập và in ra mảng sau khi xóa.

//Cách xóa một vị trí trong mảng 
//Vị trí thỏa điều điện tồn tại
//Dùng vòng lập, gán giá trị tại vị trí bằng giá trị ô nằm sau vị trí (phía tay phải)
//Lưu ý vòng lập chạy từ vị trí đến < n phần tử trong mảng trừ đi 1 


#include<iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 100;
	int values[MAXSIZE];
	int currentSize;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> currentSize;
	int vitri ;
	cout << "Nhap vi tri can xoa ";
	cin >> vitri;
	for (int i = 0; i < currentSize; i++)
	{
		cin >> values[i];

	}
	if (vitri >= 0 && vitri < currentSize) //Điều kiện để xóa vị trí ( vị trí phải nằm trong phạm vi có trong mảng)
	{
		for (int i = vitri; i < currentSize - 1; i++)
		{
			values[i] = values[i + 1];
		}
		currentSize--;
		for (int i = 0; i < currentSize; i++)
		{
			cout << values[i] << " ";
		}
	}
	else
		cout << "Nhap sai!!";
	
	system("pause");
	return 0;
}