/*6. Viết chương trình gồm các hàm sau đây:
a) Nhập một dãy số nguyên vào mảng arr, số phần tử nhập vào là arrSize:
void nhap(int arr[], int arrSize);
b) In dãy số nguyên trong arr, cách nhau bởi dấu phẩy, arrSize là số phần tử của
dãy:
void xuat(const int arr[], int arrSize);
c) Tìm một giá trị x trong mảng arr, trả về true tìm thấy, ngược lại trả về false,
arrSize là số phần tử của mảng:
bool tim(const int arr[], int arrSize, int x);
d) Đảo ngược các phần tử trong mảng arr, arrSize là số phần tử của mảng:
void daonguoc(int arr[], int arrSize)
e) Xóa phần tử tại một vị trí p trong mảng arr, arrSize là số phần tử của mảng:
void xoa(int arr[], int& arrSize, int p)
f)Thêm phần tử vào cuối mảng 
*/


//Cách đảo mảng 1 chiều có 2 cách
//Dùng vòng lập xuất mảng ngược 
//Đảo trong mảng luôn 





#include <iostream>
using namespace std;
#define MAX 100
void nhap(int arr[], int arrSize);
void xuat(const int arr[], int arrSize); //Xuất mảng thì mảng không thay đổi nên dùng const 
void xuatDaoNguoc(const int arr[], int arrSize);
bool tim(const int arr[], int arrSize, int x);
void daonguoc(int arr[], int arrSize);
void xoa(int arr[], int& arrSize, int p);
void themphantuCuoi(int arr[], int& arrSize, int m); //Nhớ kiểm tra coi nó có quá giới hạn của mảng khum 
// Tính kích thước của mảng với công thức này.
//      n = sizeof (mảng_name) / sizeof (mảng_name [0])
//      Đây là một công thức phổ biến để tìm số lượng phần tử trong
//       một mảng, có nghĩa là nó sẽ hoạt động cho các mảng của tất cả dữ liệu
//      các loại như int, char, float, v.v.
int main() {
	int a[MAX], n, x, p,m;
	cout << "Nhap so phan tu: ";
	cin >> n;
	nhap(a, n);
	cout << "Cac phan tu trong mang la: ";
	xuat(a, n);
	cout << endl;
	cout << "Nhap 1 gia tri muon tim trong mang: ";
	cin >> x;
	int dem = tim(a, n, x);
	if (dem == true)
		cout << "Tim thay." << endl;
	else cout << "Khong tim thay." << endl;
	cout << "Mang sau khi dao nguoc la: ";
	daonguoc(a, n);
	cout << "Mang dao sau khi dùng vong lap xuat nguoc : ";
	xuatDaoNguoc(a, n);
	xuat(a, n);
	cout << endl;
	cout << "Nhap gia tri muon them vao cuoi mang : ";
	cin >> m;
	themphantuCuoi(a, n, m);
	xuat(a, n);
	cout << endl;

	/*cout << "Nhap vi tri muon xoa: ";
	cin >> p;
	if (p >= 0 && p < n) {
		xoa(a, n, p);
		cout << "Mang sau khi xoa la: ";
		xuat(a, n);
	}
	else cout << "Nhap sai.";*/
	system("pause");
	return 0;
}
void nhap(int arr[], int arrSize) {
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < arrSize; i++)
		cin >> arr[i];
}
void xuat(const int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		if (i == arrSize - 1) {
			cout << arr[i];
			break;
		}
		cout << arr[i] << ", ";
	}
}
void xuatDaoNguoc(const int arr[], int arrSize)
{
	for (int i = arrSize - 1; i  >= 0; i--) {
		if (i == arrSize - 1) {
			cout << arr[i];
			break;
		}
		cout << arr[i] << ", ";
	}
}

bool tim(const int arr[], int arrSize, int x) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == x)
			return true;
	}
	return false;
}
void daonguoc(int arr[], int arrSize) 
{
	for (int i = 0; i < arrSize / 2; i++) // Chỉ cần đổi vế đầu thì vế sau tự đổi 
		//Mượn biến tạm để gán 
		//T = n - i - 1 (trừ 1 vì trong mảng tính từ 0 đến < n )
	{
		int tmp = arr[i];
		arr[i] = arr[arrSize - i - 1];
		arr[arrSize - i - 1] = tmp;
	}
}
void xoa(int arr[], int& arrSize, int p) {
	for (int i = p; i < arrSize - 1; i++)
		arr[i] = arr[i + 1];

	arrSize--;
}
void themphantuCuoi(int arr[], int& arrSize, int m) //Số lượng phần tử mảng thay đổi nên dùng tham chiếu để lưu số lượng n cho chính xác 
{
	int size = sizeof(arr) / sizeof(arr[0]); 
// Tính kích thước của mảng với công thức này.
//      n = sizeof (mảng_name) / sizeof (mảng_name [0])
//      Đây là một công thức phổ biến để tìm số lượng phần tử trong
//       một mảng, có nghĩa là nó sẽ hoạt động cho các mảng của tất cả dữ liệu
//      các loại như int, char, float, v.v.
	if (size == arrSize)
		cout << "Khong the them vao mang\n";
	else // Có thể bỏ else và gán trực tiếp cái phía sau 
	{
		arr[arrSize] = m; //Thường thì mảng bắt đầu từ 0 đến arrSize - 1 ; mà do thêm 1 phần tử nên có arrSize trong mảng 
		arrSize++; //Tăng kích thước mảng lên sau khi thêm phần tử mới vòa mảng 
	}
}
