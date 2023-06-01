/*7.Viết hàm trả về vị trí xuất hiện đầu tiên của phần tử nhỏ nhất trong mảng. Hàm
nhận vào mảng số nguyên và số phần tử của mảng. Viết chương trình kiểm tra
hàm.*/
#include <iostream>	
using namespace std;
void Nhap(int arr[], int n);
int minArr(int arr[], int n);
int main()
{
	const int MAX = 50;
	int arr[MAX], n;
	cout << "Nhap so luong phan tu n: ";
	cin >> n;
	Nhap(arr, n);
	int index = minArr(arr, n);
	cout << "Vi tri co phan tu nho nhat cua mang la: " << index << endl;
	system("pause");
	return 0;
}
void Nhap(int arr[], int n) 
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu arr[" << i << "] : ";
		cin >> arr[i];
	}
}
int minArr(int arr[], int n) 
{
	int min = INT_MAX;
	int index = -1;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}