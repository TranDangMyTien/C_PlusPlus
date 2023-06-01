//3. Viết chương trình nhập vào một mảng số nguyên(tối đa 100 phần tử), tìm và in ra
//phần tử lớn nhất của mảng.
//Search tìm phần tử lớn nhất trong mảng 

//Cách tìm số nhất mảng
//Tạo 1 biến tạm và gán giá trị cho nó 
//Dùng vòng lập so sánh biến tạm với từng giá trị trong mảng 
//Số nào trong mảng lớn hơn biến tạm thì gán biến tạm bằng giá trị đó 
#include<iostream>
using namespace std;
int main()
{
	const int MAXSIZE = 100;
	double values[MAXSIZE];
	int currentSize;
	cout << "Nhap so luong phan tu cua mang: ";
	cin >> currentSize;
	int M = INT_MIN; //Có thể gán M = values[0] rồi đem so sánh với các phần tử còn lại trong mảng 
	// int M = values[0]
	for (int i = 0; i < currentSize; i++) //Vòng lập nhập giá trị cho mảng 
	{
		cin >> values[i];
	}
	for (int i = 0; i < currentSize; i++) //Vòng lập tìm số lớn nhất mảng  
	{
		if (values[i] > M)
			M = values[i];
	}
	cout << M << " la phan tu lon nhat" << endl;
	system("pause");
	return 0;
}