//2. Viết chương trình thực hiện các công việc sau đây :
//a) Định nghĩa hằng MAXSIZE là 100.
//b) Khai báo mảng values có thể lưu số phần tử tối đa là MAXSIZE, kiểu của mỗi
//phần tử là double.
//c) Khai báo currentSize lưu số phần tử hiện có trong mảng.
//d) Nhập vào giá trị của currentSize.
//e) Nhập vào các giá trị trong mảng values, số phần tử đọc vào là currentSize.
//f) In các phần tử trong mảng values trên một dòng, cách nhau bởi dấu phẩy.
#include<iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 100;
	double values[MAXSIZE];
	int currentSize;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> currentSize;
	for (int i = 0; i < currentSize; i++) //Vòng lập nhập các số vào mảng 
	{
		cin >> values[i];
	}
	for (int i = 0; i < currentSize; i++) //Vòng lập xuất mảng đã nhập 
	{
	// Chia ra 2 trường hợp để xuất 
	// Chưa cuối xuất kèm dấu " , "
	// Cuối xuất không kèm dấu 
		if (i == currentSize - 1)// i = phan tu cuoi cung, xuong hang
		{
			cout << values[i] << endl;;
			break;
		}
		else
			cout << values[i] << " , ";
	}
	system("pause");
	return 0;
}