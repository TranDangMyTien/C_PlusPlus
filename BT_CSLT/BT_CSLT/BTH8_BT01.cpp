//1. Viết chương trình thực hiện các công việc sau đây :
//a) Khai báo một mảng alpha lưu 50 phần tử kiểu double.
//b) Gán giá trị của 25 phần tử đầu tiên là bình phương của chỉ số phần tử, 25 phần
//tử còn lại có giá trị là lập phương của chỉ số.
//c) In các giá trị trong mảng alpha ra màn hình, mỗi dòng gồm 10 phần tử.

//2 Cách định nghĩa 
//Cách 1 : #define Tên __ Số (Tên thường viết hoa)
// #define MAX 50
//Cách 2 : const Kiểu dữ liệu __ Tên __ = Số 
// const int MAX = 50 
//Bình phương là mũ 2 
//Lập phương là mũ 3 

//Khai báo 1 chiều 
//Kiểu dữ liệu __ Tên[số đã định nghĩa]
//#difine MAX 50
//double arr[MAX];

#include<iostream>
using namespace std;
int main()
{
	const int MAX = 50;
	double alpha[MAX];
	for (int i = 0; i <= 49; i++) //Mảng nên chạy từ 0 đến < n 
	{
		if (i < 25)
			alpha[i] = pow(i, 2);
		else // >= 25 
			alpha[i] = pow(i, 3);
	}
	for (int i = 0; i <= 49; i++) 
	{
		cout << alpha[i] << " ";
		if ((i + 1) % 10 == 0) // Số chia hết cho 10 thì xuống hàng vd(10,20,...)
			cout << endl;
	}
	system("pause");
	return 0;
}