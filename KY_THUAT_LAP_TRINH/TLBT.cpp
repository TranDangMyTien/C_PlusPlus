//CHƯƠNG 1 MẢNG NHIỀU CHIỀU 
// Bài 1. Viết 01 chương trình thực hiện toàn bộ các công việc sau:
//a.Khai báo một mảng số nguyên gồm 3 hàng và 4 cột.
//b.Khởi tạo giá trị của mảng vừa nhập lần lượt như sau :
//8 4 - 1 5
//2 2 6 9
//11 2 5 4
//c.Xuất lại toàn bộ mảng đang lưu trữ để kiểm chứng.
#include<iostream>
using namespace std; 
int main11()
{
	int a[3][4] = { {8,4,-1,5},
		{2,2,6,9},
		{11,2,5,4}};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	system("pause");
	return 0; 
}

// Bài 2.Viết chương trình dùng câu lệnh while để nhập và xuất giá trị cho một mảng số nguyên
//gồm 4 hàng và 3 cột.
//Gợi ý : dựa trên tính chất câu lệnh while và for để xây dựng lại phần nhập và xuất mảng 2
//chiều.
#include <iostream>
using namespace std;
int main12() {
	int b[4][3];
	int x = 0, y = 0;
	while (x < 4) //Nhập mảng 
	{
		while (y < 3) 
		{
			cin >> b[x][y]; 
			
			y++;
		}
		x++; 
		y = 0;
	}
	while (x < 4) //xuất mảng 
	{
		while (y < 3) 
		{
			cout << b[x][y];
		}
		cout << endl;
		x++; y = 0;
	}
	return 0;
}

//Bài 3.Viết 01 chương trình thực hiện toàn bộ các công việc sau:
//a.Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột(tối đa 10
//	hàng và 15 cột, nếu nhập sai thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).
//	Gợi ý : dùng vòng lặp do…while để kiểm soát việc nhập giá trị hàng và cột có hợp lệ hay
//	không ?
//	b.Thực hiện việc tính tổng các giá trị lưu trữ trong mảng.
//	c.Tìm giá trị nhỏ nhất, lớn nhất đang lưu trữ trong mảng.
//	Gợi ý : dùng 1 giá trị min để chứa giá trị nhỏ nhất trong mảng.Khởi tạo min là giá trị đầu
//	tiên trong mảng, rồi tiến hành so sánh min với các giá trị còn lại để tìm min.Tương tự cho
//	max.
//	d.Cho biết vị trí của giá trị nhỏ nhất hay lớn nhất ở hàng mấy ? cột bao nhiêu(Giả sử
//		người dùng nhập không có giá trị nào trùng nhau).
//	Gợi ý : dựa trên giá trị đã tìm được ở câu c, lưu trữ vị trí ứng với giá trị nhỏ nhất hay lớn
//	nhất(có thể lồng ghép trong lúc tìm min hay max) bằng 2 biến hang va cot.Vì đề toán có
//	Bài tập thực hành Kỹ thuật lập trình
//	giả sử không có giá trị trùng nhau trong mảng nên chắc chắn rằng trong mảng chỉ có 1 giá
//	trị nhỏ nhất hoặc lớn nhất, việc lưu trữ giá trị nhờ vào giá trị biến đếm ở 2 vòng lặp khi
//	duyệt mảng
#include <iostream>
using namespace std;
const int Max_row = 10, Max_col = 15;
void MAX_MIN(int b[Max_row][Max_col], int r, int c);
int main13()
{
	int r, c;
	int b[Max_row][Max_col];
	
	do {
		cout << "Nhap so hang va so cot: "; cin >> r >> c;
		while (r < 0 || c < 0 || r > Max_row || c > Max_col) 
		{
			cout << "Ban da nhap sai hay nha hang va cot: "; cin >> r >> c;
		}
		cout << "Mang co " << r << " hang va " << c << " cot.\n";
		break;
	} while (r <= Max_row || c <= Max_col || r <= Max_row && c <= Max_col);
	cout << "Hay nhap gia tri cho mang: ";
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) {
			cin >> b[i][j];
			tong += b[i][j];
		}
		cout << endl;
	}
	cout << "Mang da nhap: \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Tong gia tri cua mang: " << tong; cout << endl;
	MAX_MIN(b, r, c);
	system("pause");
	return 0;
}

void MAX_MIN(int b[Max_row][Max_col], int r, int c)
{
	int MIN = b[0][0]; int MAX = b[0][0];
	int hang1 = 0; int cot1 = 0;
	int hang2 = 0; int cot2 = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++) {
			if (MIN > b[i][j]) {
				MIN = b[i][j];
				hang1 = i; cot1 = j;
			}
			if (MAX < b[i][j]) {
				MAX = b[i][j];
				hang2 = i; cot2 = j;
			}
		}
		cout << endl;
	}
	cout << "Gia tri nho nhat trong mang: " << MIN; cout << endl << endl;
	cout << "Vi tri nho nhat o hang " << hang1 << " cot " << cot1; cout << endl << endl;
	cout << "Gia tri lon nhat trong mang: " << MAX; cout << endl << endl;
	cout << "Vi tri lon nhat o hang " << hang2 << " cot " << cot2; cout << endl << endl;
}

//Bai 4. Viết 01 chương trình thực hiện toàn bộ các công việc sau:
//a.Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột(tối đa 5
//	hàng và 6 cột, nếu nhập sai thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).
//	Gợi ý : dùng vòng lặp do…while để kiểm soát việc nhập giá trị hàng và cột có hợp lệ hay
//	không ?
//	b.Cho người dùng nhập vào một vị trí cột / hàng cần tính tổng.Hãy tiến hành tính tổng
//	các giá trị lưu trữ trong cột / hàng mà người dùng yêu cầu.Lưu ý : vị trí cột hay hàng
//	phải hợp lệ.
//	Gợi ý : vị trí cột hay hàng hợp lệ là vị trí từ 0 đến số lượng phần tử tối đa trên cột hay hàng
//	– 1 (hoặc từ 1 đến số lượng phần tử tối đa trên cột hay hàng).
//	c.Cho người dùng nhập vào một giá trị x bất kỳ.Hãy tìm xem x có tồn tại trong mảng
//	hay không ? Nếu có thì tồn tại bao nhiêu lần ? Tại các vị trí nào ?
//	Gợi ý : cho người dùng nhập giá trị x cần tìm.Duyệt toàn bộ mảng xem có giá trị nào bằng
//	x hay không ? Dùng biến dem để lưu lại số lần tìm được.Việc lưu trữ giá trị nên dựa trên
//	số lần biến dem để xuất vị trí dòng và cột.
#include<iostream>
using namespace std;
# define MAXR 50
# define MAXC 50
void tinhTongHang(int arr[MAXR][MAXC], int r, int c);
void tinhTongCot(int arr[MAXR][MAXC], int r, int c);
bool timX(int arr[MAXR][MAXC], int r, int c, int x);
void demX(int arr[MAXR][MAXC], int r, int c, int x);

int main14()
{
	int arr[MAXR][MAXC];
	int r, c;
	do
	{
		cout << "Nhap so hang : ";
		cin >> r;
		cout << "Nhap so cot : ";
		cin >> c;
		if (r > 5 || r <= 0)
			cout << "Nhap so hang khong hop le ! ";
		if (c > 6 || c <= 0)
			cout << "Nhap so cot khong hop le !  ";
	} while (r > 5 || r <= 0 || c > 6 || c <= 0);
	for (int i = 0; i < r; i++) // Nhập giá trị từng phần tử trong mảng 
	{
		cout << "Nhap " << c << " so nguyen cho dong thu " << i + 1 << " : ";
		for (int j = 0; j < c; j++)
			cin >> arr[i][j];

	}
	for (int i = 0; i < r; i++) // Xuát lại mảng đã nhập 
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << " \t ";
		}
		cout << endl;
	}
	int n;
	cout << "Nhap lua chon can tinh tong (hang : 1 ; cot : 2) : ";
	cin >> n;
	switch (n)
	{
	case 1:
		tinhTongHang(arr, r, c);
		break;
	case 2:
		tinhTongCot(arr, r, c);
		break;
	default :
		cout << "Nhap lua chon can tinhs tong khong hop le !\n";
	}
	int x;
	cout << "Nhap so can kiem tra : ";
	cin >> x;
	if (timX(arr, r, c, x) == 1)
		cout << "Tim thay vi tri " << x << " trong mang !\n";
	else
		cout << "Khong tim thay vi tri " << x;
	demX(arr, r, c, x);
	system("pause");
	return 0; 
}

//1  3  5   6
//4  4  6   3
//4  3  6   7 
void tinhTongHang(int arr[MAXR][MAXC], int r, int c)
{
	int tong = 0;
	int viTriHang;
	cout << "Nhap hang can tinh tong : ";
	cin >> viTriHang;
	for (int i = 0; i < c; i++)
	{
		tong += arr[viTriHang - 1][i];
	}
	cout << "Tong cac so nguyen tai hang " << viTriHang << " la : " << tong;
	cout << endl;
}
void tinhTongCot(int arr[MAXR][MAXC], int r, int c)
{
	int tong = 0;
	int viTriCot;
	cout << "Nhap cot can tinh tong : ";
	cin >> viTriCot;
	for (int i = 0; i < r; i++)
	{
		tong += arr[i][viTriCot - 1];
	}
	cout << "Tong cac so nguyen tai cot " << viTriCot << " la : " << tong;
	cout << endl;
}

bool timX(int arr[MAXR][MAXC], int r, int c,int x )
{

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == x)
			{
				return 1; //true 
			}
		}
	}
	return 0; //false
}
void demX(int arr[MAXR][MAXC], int r, int c, int x)
{
	int dem=0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == x)
			{
				dem++;
				cout << x << " xuat hien tai " << "hang "<< i + 1 <<" cot "<< j + 1 << endl;
			}
		}
	}
	cout << x << " xuat hien " << dem << " lan \n";
	
}

//Bài 5. . Viết chương trình cho nhập vào một ma trận vuông cấp n (chứa các số nguyên). Sau đó
//tính tổng các giá trị trên đường chéo chính và đường chéo phụ của ma trận vừa nhập.
//Ví dụ : cho ma trận
//Thì tổng các giá trị trên đường chéo chính là = 1 + 15 + 2 = 18, tổng các giá trị trên
//đường chéo phụ là = 6 + 15 + 0 = 21.
//Gợi ý : các vị trí điều chéo chính đều là[0][0], [1][1], [2][2].Tương tự cho đường chéo
//phụ
#include<iostream>
using namespace std;
#define DONG 50
#define COT 50

//1 3 5 7
//5 6 4 3 
//5 9 7 0         
//2 5 2 1 
//Ma trận vuông cấp n có 1 chéo chính và 1 chéo phụ 
//Đường chính là { a[i,i] | 0<=i<n }
//Đường phụ là   { a[i,n - i] | 0 <= i < n }
int main15()
{ 
	int A[DONG][COT];
	int n;
	cout << "Nhap cap cho ma tran vuong (n > 0) : ";
	cin >> n;
	for (int i = 0; i < n; i++) //Nhập mảng 
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) // Xuát lại mảng đã nhập 
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << " \t ";
		}
		cout << endl;
	}
	int sumcheochinh = 0;
	int sumcheophu = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				sumcheochinh += A[i][j]; // sumcheochinh = sumcheochinh + A[i][j]
		}
	}
	for (int i = 0; i < n; i++)// Tính chéo chính và chéo phụ riêng ra vì có vị trí vừa thuộc chéo chính cũng vừa thuộc chéo phụ 
	{
		for (int j = 0; j < n; j++)
		{
			if (i == n - j - 1)
				sumcheophu += A[i][j];
		}
	}
	//Cách hai 
	/*int dem = 0;
	for (int i = n - 1; i >= 0; i--)
		sumcheophu += A[i][dem++];*/
	
	cout << "Tong duong cheo chinh la : " << sumcheochinh << endl;
	cout << "Tong duong cheo phu la : " << sumcheophu << endl;
	system("pause");
	return 0;
}

//Bài 6. Viết chương trình cho nhập vào 2 ma trận (chứa các số nguyên). Sau đó tính kết quả tổng
//và tích hai ma trận đó.
#include<iostream>
#include<iomanip> // setw setfill
using namespace std;
#define R 50
#define C 50
void Nhap(int A[R][C], int r1, int c1);
void Xuat(int A[R][C],int r1, int c1);
void Tong(int A[R][C], int B[R][C], int r1, int r2, int c1, int c2);
//void XuatB(int B[R][C], int r2, int c2);
//Điều kiện tính tổng hai ma trận là 2 ma trận bằng nhau số lượng dòng và cột 
//Điều kiện tính tích hai ma trận là c1=r2 (m1*n1 ; m2*n2) (n1=m2)
void Tich(int A[R][C], int B[R][C], int r1, int r2, int c1, int c2);
int main16 ()
{
	int r1, c1, A[R][C];
	cout << "Nhap so hang cho ma tran thu 1 : ";
	cin >> r1;
	cout << "Nhap so cot cho ma tran thu 1 : ";
	cin >> c1;
	int r2, c2, B[R][C];
	cout << "Nhap so hang cho ma tran thu 2 : ";
	cin >> r2;
	cout << "Nhap so cot cho ma tran thu 2 : ";
	cin >> c2;
	cout << setfill('-');
	cout << setw(60) << "-" << endl;
	cout << "Nhap gia tri cho mang thu nhat ! \n";
	Nhap(A, r1, c1);
	cout << setw(60) << "-" << endl;
	cout << "Nhap gia tri cho mang thu hai ! \n";
	Nhap(B, r2, c2); 
	cout << setw(60) << "-" << endl;
	cout << "Mang A la : \n";
	Xuat(A, r1, c1);
	cout << setw(60) << "-" << endl;
	cout << "Mang B la : \n";
	Xuat(B, r2, c2); 
	cout << setw(60) << "-" << endl;
	if (r1 == r2 && c1 == c2)
	{
		cout << "Tong cua hai ma tran la: " << endl;
		Tong(A, B, r1, r2, c1, c2);
	}
	else
		cout << "Hai ma tran khong bang nhau ! \n";
	cout << setw(60) << "-" << endl;
	Tich(A, B, r1, r2, c1, c2);
	system("pause");
	return 0;
}

void Nhap(int A[R][C], int r1, int c1)
{
	for (int i = 0; i < r1; i++)
	{
		cout << "Nhap " << c1 << " so nguyen cho dong thu " << i + 1 << " : ";
		for (int j = 0; j < c1; j++)
			cin >> A[i][j];
	}
}

void Xuat(int A[R][C], int r1, int c1)
{
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
			cout << A[i][j]<<"\t";
		cout << endl;
	}
}
//void XuatB(int B[R][C], int r2, int c2)
//{
//	for (int i = 0; i < r2; i++)
//	{
//		for (int j = 0; j < c2; j++)
//			cout << B[i][j];
//		cout << endl;
//	}
//}
void Tong(int A[R][C], int B[R][C], int r1, int r2, int c1, int c2)
{
	int tong[R][C];
	for (int i = 0; i < r1; i++) 
	{
		for (int j = 0; j < c1; j++) 
		{
			tong[i][j] = A[i][j] + B[i][j];
			cout << tong[i][j] << '\t';
		}
		cout << endl;
	}
}
//1 2           2  2  2     
//1 1           1  2  1         
//2*2               2*3        
// c11 ; c12 ; c13
// c21 ; c22 ; c23 
// 1*2 + 2*1 ; 1*2 + 2*2 ; 1*2 + 2*1
// 1*2 + 1*1 ; 1*2 + 1*2 ; 1*2 + 1*1
void Tich(int A[R][C], int B[R][C], int r1, int r2, int c1, int c2)
{
	int tich[R][C];
	if (c1 == r2)
	{
		cout << "Tich cua hai ma tran la: " << endl;
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				tich[i][j] = 0;
				for (int k = 0; k < r2; k++)
					tich[i][j] += A[i][k] * B[k][j];
			}
		}
		for (int i = 0; i < r1; i++) 
		{
			for (int j = 0; j < c2; j++)
				cout << tich[i][j] << '\t';
			cout << endl;
		}
	}
	else
	{
		cout << "Khong du dieu kien tinh tich \n";
	}
}

//Bài 7 .Viết 01 chương trình thực hiện các yêu cầu sau:
//a.Xây dựng các hàm :
//-Nhập vào 1 mảng số nguyên gồm r hàng và c cột;
//-Xuất giá trị 1 mảng số nguyên gồm r hàng và c cột.
//b.Xây dựng hàm trả về giá trị trung bình cộng của các phần tử trong 1 mảng số nguyên
//gồm r hàng và c cột.
//c.Xây dựng hàm nhận vào 1 mảng số nguyên gồm r hàng và c cột; giá trị số nguyên x.
//Kiểm tra xem x có tồn tại trong mảng hay không và trả về kết quả tương ứng.
//d.Xây dựng hàm nhận vào 1 mảng số nguyên gồm r hàng và c cột(giả sử các giá trị
//	nhập không trùng nhau) và 2 giá trị số nguyên x và y(x và y phải đều tồn tại trong
//		mảng).Tiến hành hoán đổi 2 giá trị x và y này.Lưu ý : sử dụng lại hàm đã xây dựng ở
//	câu c.
//	e.Xây dựng hàm nhận vào 1 mảng số nguyên gồm r hàng và c cột; vị trí cột cần tính
//	tích.Sau đó trả về tích các giá trị số trong cột đã nhận vào.
//	f.Viết hàm main để kiểm tra các hàm đã xây dựng.
#include<iostream>
using namespace std;
#define DONG 50
#define COT 50
void NhapMang(int Mang[DONG][COT],int , int  );
void XuatMang(int Mang[DONG][COT], int, int);
double TrungBinhM(int Mang[DONG][COT], int, int);
bool timXTrongMang(int Mang[DONG][COT], int dong, int cot, int x);
void demXTrongMang(int Mang[DONG][COT], int dong, int cot, int x);
void HoanDoi(int Mang[DONG][COT], int dong, int cot, int x, int y);

int main17()
{
	int Mang[DONG][COT];
	int dong, cot; //không được đưa vào vòng lập do while 
	do {
		cout << "Nhap dong cho mang : ";
		cin >> dong;
		cout << "Nhap cot cho mang : ";
		cin >> cot;
	} while(dong <= 0 || cot <= 0);
	NhapMang(Mang, dong, cot);
	cout << endl;
	XuatMang(Mang, dong, cot);
	cout << endl;
	cout << "Gia tri trung binh cua mang la : " << TrungBinhM(Mang, dong, cot);
	cout << endl;
	int x;
	cout << "Nhap so de kiem tra : ";
	cin >> x;
	if (timXTrongMang(Mang, dong, cot, x) == 1) //tìm thấy x
		cout << "Tim thay " << x << endl;
	else //không tìm thấy x
		cout << "Khong tim thay " << x << endl;
	demXTrongMang(Mang, dong, cot, x);
	int a, b;
	cout << "Nhap gia tri a : "; cin >> a;
	cout << "Nhap gia tri b : "; cin >> b;
	HoanDoi(Mang, dong, cot, a, b); 
	system("pause");
	return 0;
}
void NhapMang(int Mang[DONG][COT], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		cout << "Nhap " << cot << " gia tri cho dong thu " << i + 1<<" : ";
		for (int j = 0; j < cot; j++)
		{
			cin >> Mang[i][j];
		}
	}
}
void XuatMang(int Mang[DONG][COT], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << Mang[i][j]<<"\t";
		}
		cout << endl;
	}
}
double TrungBinhM(int Mang[DONG][COT], int dong, int cot)
{
	double tb = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			tb += Mang[i][j];
		}
		
	}
	return  tb / (dong*cot);  // dong*cot là số lượng các ô của mảng 
}
bool timXTrongMang(int Mang[DONG][COT], int dong, int cot, int x)
{

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (Mang[i][j] == x)
			{
				return 1; //true 
			}
		}
	}
	return 0; //false
}
void demXTrongMang(int Mang[DONG][COT], int dong, int cot, int x)
{
	int dem = 0;
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (Mang[i][j] == x)
			{
				dem++;
				cout << x << " xuat hien tai " << "hang " << i + 1 << " cot " << j + 1 << endl;
			}
		}
	}
	cout << x << " xuat hien " << dem << " lan \n";
}

void HoanDoi(int Mang[DONG][COT], int dong, int cot, int x, int y)
{
	int vtCotX, vtDongX, vtCotY, vtDongY;
	if (timXTrongMang(Mang, dong, cot, x) == 0 || timXTrongMang(Mang, dong, cot, y) == 0)
		cout << "Gia tri a hoac b khong ton tai trong mang !\n";
	else
	{
		for (int i = 0; i < dong; i++)
		{
			for (int j = 0; j < cot; j++)
			{
				if (x == Mang[i][j])
				{
					vtDongX = i;
					vtCotX = j;
				}
				if (y == Mang[i][j])
				{
					vtDongY = i;
					vtCotY = j;
				}
			}
		}
		Mang[vtDongX][vtCotX] = y;
		Mang[vtDongY][vtCotY] = x;
	}
	cout << "Mang sau khi doi vi tri la : \n";
	XuatMang(Mang, dong, cot);
}

//Bài 8 .Xây dựng các hàm:
//- Khởi tạo ngẫu nhiên giá trị cho 1 mảng số nguyên gồm n hàng và n cột(ma trận
//	vuông cấp n);
//-Xuất giá trị lưu trữ trong 1 mảng số nguyên gồm n hàng và n cột.
//- Viết hàm tính tổng, tích 2 ma trận vuông cấp n.
//- Viết hàm main để kiểm tra các hàm đã xây dựng.
#include<iostream> // for rand() and srand()
#include<ctime> // for time()
#include<cstdlib> 
#define M 50
using namespace std;
void rd(int a[M][M], int n);
void xuat(int a[M][M], int n);
//Điều kiện tính tổng hai ma trận là 2 ma trận bằng nhau số lượng dòng và cột 
//Điều kiện tính tích hai ma trận là c1=r2 (m1*n1 ; m2*n2) (n1=m2)
void tinhTong(int a[M][M],int b[M][M],int n);
void tinhTich(int a[M][M], int b[M][M], int n);
int main18()
{
	int a[M][M], b[M][M];
	int n,m;
	cout << "Nhap cap cho ma tran vuong thu nhat : ";
	cin >> n;
	cout << "Nhap cap cho ma tran vuong thu hai : ";
	cin >> m;
	rd(a, n);
	rd(b, m);
	cout << "Ma tran thu nhat la : " << endl;
	xuat(a, n);
	cout << endl;
	cout << "Ma tran thu hai la : " << endl;
	xuat(b, m);
	cout << endl;
	if (n == m) //có thể tính tổng 2 ma trận 
	{
		cout << "Tong cua hai ma tran la : \n";
		tinhTong(a, b, n);
	}
	else
		cout << "Khong thoa dieu kien tinh tong hai ma tran !\n";

	system("pause");
	return 0;
}
void rd(int a[M][M], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; i < n; j++)
			a[i][j] = rand();
	}
}
void xuat(int a[M][M], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}
}
void tinhTong(int a[M][M], int b[M][M], int n)
{
	int T[M][M];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			T[i][j] = a[i][j] + b[i][j];
			cout << T[i][j] << '\t';
		}
		cout << endl;
	}
}
void tinhTich(int a[M][M], int b[M][M], int n, int m)
{
	int tich[M][M];
	if (n == m)
	{
		cout << "Tich cua hai ma tran la: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				tich[i][j] = 0;
				for (int k = 0; k < n; k++)
					tich[i][j] += a[i][k] * b[k][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << tich[i][j] << '\t';
			cout << endl;
		}
	}
	else
	{
		cout << "Khong du dieu kien tinh tich \n";
	}
}

//Bài 9. Viết chương trình gán các giá trị số nguyên từ 1 đến n2
//cho các phần tử của ma trận vuông có kích thước n x n(2 <= n <= 10) được nhập từ bàn phím
//theo dạng zigzag cột.Ví dụ n = 4:
//1 8 9 16
//2 7 10 15
//3 6 11 14
//4 5 12 13
//hàng i chạy, cột j đứng im 
#include <iostream>
using namespace std;
const int LON = 10;
int main19K1()
{
	int a[LON][LON];
	int n;
	do
	{
		cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
		cin >> n;
		if (n < 2 || n>10)
		{
			cout << "Nhap cap ma tran khong hop le !\n";
			cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
			cin >> n;
		}
	} while (n < 2 || n>10);
	int dem = 1, hang = n, cot = n; //Đặt tên cho đỡ bị lộn 
	for (int j = 0; j < cot; j++)
	{
		if (j % 2 == 0) //cột chẵn  
		{
			for (int i = 0; i < hang; i++)
			{
				a[i][j] = dem++; //hàng i chạy xuôi ; cột j đứng im  
			}
		}
		else //lẻ 
		{
			for (int i = hang - 1; i >= 0; i--)
			{
				a[i][j] = dem++; //hàng i chạy ngược, j đứng im
			}
		}
	}
	//Xuất mảng 
	cout << "\t \t MA TRAN ZIGZAG \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	system("Pause");
	return 0;
}

//Kiểu 2 
//16  9  8  1
//15  10  7  2
//14  11  6  3
//13  12  5  4

// 0  1   2  3 
//hàng i chạy, cột j đứng im 
#include <iostream>
using namespace std;
//const int LON = 10;
int main19K2()
{
	int a[LON][LON];
	int n;
	do
	{
		cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
		cin >> n;
		if (n < 2 || n>10)
		{
			cout << "Nhap cap ma tran khong hop le !\n";
			cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
			cin >> n;
		}
	} while (n < 2 || n>10);
	int dem = 1, hang = n, cot = n; //Đặt tên cho đỡ bị lộn 
	for (int j = cot - 1; j >= 0; j--)
	{
		if (j % 2 != 0) //cột lẻ 
		{
			for (int i = 0; i < hang; i++)
			{
				a[i][j] = dem++; //hàng i chạy xuôi ; cột j đứng im  
			}
		}
		else //cột chẵn 
		{
			for (int i = hang - 1; i >= 0; i--)
			{
				a[i][j] = dem++; //hàng i chạy ngược ; cột j đứng im
			}
		}
	}
	//Xuất mảng 
	cout << "\t \t MA TRAN ZIGZAG \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	system("Pause");
	return 0;
}

//Kiểu 3 
//1   2   3   4        0
//8   7   6   5        1
//9   10   11   12     2
//16   15   14  13     3  

//Cột j chạy hàng i đứng im 
#include <iostream>
using namespace std;
//const int LON = 10;
int main19K3()
{
	int a[LON][LON];
	int n;
	do
	{
		cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
		cin >> n;
		if (n < 2 || n>10)
		{
			cout << "Nhap cap ma tran khong hop le !\n";
			cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
			cin >> n;
		}
	} while (n < 2 || n>10);
	int dem = 1, hang = n, cot = n; //Đặt tên cho đỡ bị lộn 
	for (int i = 0; i < hang; i++)
	{
		if (i % 2 == 0) //hàng chẵn  
		{
			for (int j = 0; j < cot; j++)
			{
				a[i][j] = dem++; //hàng i đứng im, cột j chạy xuôi 
			}
		}
		else
		{
			for (int j = cot - 1; j >= 0; j--)
			{
				a[i][j] = dem++; //hàng i đứng im, cột j chạy xuôi
			}
		}
	}
	//Xuất mảng 
	cout << "\t \t MA TRAN ZIGZAG \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	system("Pause");
	return 0;
}

//Kiểu 4
//13   14   15   16          0
//12   11   10   9           1
//5    6    7    8           2
//4    3    2    1           3  

//Cột j chạy hàng i đứng im 
#include <iostream>
using namespace std;
//const int LON = 10;
int main19K4()
{
	int a[LON][LON];
	int n;
	do
	{
		cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
		cin >> n;
		if (n < 2 || n>10)
		{
			cout << "Nhap cap ma tran khong hop le !\n";
			cout << "Nhap cap cho ma tran vuong (2 <= n <= 10): ";
			cin >> n;
		}
	} while (n < 2 || n>10);
	int dem = 1, hang = n, cot = n; //Đặt tên cho đỡ bị lộn 
	for (int i = hang - 1; i >= 0; i--)
	{
		if (i % 2 == 0) //hàng chãn
		{
			for (int j = 0; j < cot; j++)
			{
				a[i][j] = dem++; //hàng i đứng im, cột j chạy xuôi 
			}
		}
		else //hàng lẻ 
		{
			for (int j = cot - 1; j >= 0; j--)
			{
				a[i][j] = dem++; //hàng i đứng im, cột j chạy xuôi
			}
		}
	}
	//Xuất mảng 
	cout << "\t \t MA TRAN ZIGZAG \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "   ";
		cout << endl;
	}
	system("Pause");
	return 0;
}

//Bài 10. Viết chương trình gán các giá trị số nguyên từ 1 đến n2
//cho các phần tử của ma trận vuông có kích thước n x n(2 <= n <= 10) được nhập từ
//bàn phím theo dạng xoắn ốc.Ví dụ n = 4:
//1 2 3 4
//12 13 14 5
//11 16 15 6
//10 9  8  7
#include <iostream>
#include <iomanip> //Dùng setw(3)
using namespace std;
const int MAX = 10;
int main110K1()
{
	int n, a[MAX][MAX], dem = 1;
	do
	{
		cout << "Nhap n (2<= n <=10): ";
		cin >> n;
		if (n < 2 || n>10)
			cout << " Sai yeu cau! Nhap lai " << endl;
	} while (n < 2 || n>10);
	int h1 = 0, c1 = 0, h2 = n - 1, c2 = n - 1;
	while (h1 <= h2 && c1 <= c2)
	{
		// tui nhap n = 4 nhen, suy ra max la n-1 = 3
		for (int j = c1; j <= c2; j++)
		{
			a[h1][j] = dem;
			dem++;
		}
		h1++;
		//luc nay, h1 = 1;
		for (int i = h1; i <= h2; i++)
		{
			a[i][c2] = dem;
			dem++;
		}
		c2--;
		//luc nay, c2 = 2;
		for (int j = c2; j >= c1; j--)
		{
			a[h2][j] = dem;
			dem++;
		}
		h2--;
		//luc nay, h2 = 2;
		for (int i = h2; i >= h1; i--)
		{
			a[i][c1] = dem;
			dem++;
		}
		c1++;
		//luc nay, c1 = 1;
	}
	cout << "Xuat mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}

//1  12  11  10
//2   13  16   9
//3   14  15   8
//4   5   6   7
#include <iostream>
#include <iomanip> //Dùng setw(3)
using namespace std;
//const int MAX = 10;
int main110K2()
{
	int n, a[MAX][MAX], dem = 1;
	do
	{
		cout << "Nhap n (2<= n <=10): ";
		cin >> n;
		if (n < 2 || n>10)
			cout << " Sai yeu cau! Nhap lai " << endl;
	} while (n < 2 || n>10);
	int h1 = 0, c1 = 0, h2 = n - 1, c2 = n - 1;
	while (h1 <= h2 && c1 <= c2)
	{
		for (int i = h1; i <= h2; i++)
		{
			a[i][c1] = dem;
			dem++;
		}
		c1++;
		for (int i = c1; i <= c2; i++)
		{
			a[h2][i] = dem;
			dem++;
		}
		h2--;
		for (int i = h2; i >= h1; i--)
		{
			a[i][c2] = dem;
			dem++;
		}
		c2--;
		for (int i = c2; i >= c1; i--)
		{
			a[h1][i] = dem;
			dem++;
		}
		h1++;
	}
	cout << "Xuat mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}


//16 15 14 13
//5 4   3  12
//6 1   2  11
//7 8  9  10
#include <iostream>
#include <iomanip> //Dùng setw(3)
#include<cmath> //Dùng pow(n,2)
using namespace std;
//const int MAX = 10;
int main110K3()
{
	int n, a[MAX][MAX];
	do
	{
		cout << "Nhap n (2<= n <=10): ";
		cin >> n;
		if (n < 2 || n>10)
			cout << " Sai yeu cau! Nhap lai " << endl;
	} while (n < 2 || n>10);
	int dem = pow(n, 2);
	int h1 = 0, c1 = 0, h2 = n - 1, c2 = n - 1;
	while (h1 <= h2 && c1 <= c2)
	{
		for (int j = c1; j <= c2; j++)
		{
			a[h1][j] = dem;
			dem--;
		}
		h1++;
		//luc nay, h1 = 1;
		for (int i = h1; i <= h2; i++)
		{
			a[i][c2] = dem;
			dem--;
		}
		c2--;
		//luc nay, c2 = 2;
		for (int j = c2; j >= c1; j--)
		{
			a[h2][j] = dem;
			dem--;
		}
		h2--;
		//luc nay, h2 = 2;
		for (int i = h2; i >= h1; i--)
		{
			a[i][c1] = dem;
			dem--;
		}
		c1++;
		//luc nay, c1 = 1;
	}
	cout << "Xuat mang: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}


//CHƯƠNG 2 TẬP TIN VÀ LUỒNG 
//Bài 1 Viết chương trình nhập vào 2 số nguyên a và b. Tính tổng 2 số này. Sau đó ghi kết
//quả tổng xuống file BT1.txt.Mở file BT1.txt để kiểm tra kết quả ghi.

#include<iostream>
#include<fstream> //Khai báo đọc và ghi file 
using namespace std;
int main21()
{
	//ofstream khai báo ghi file 
	//outFile do mình đặt tên 
	//Bước 1 khai báo file đọc 
	ofstream outFile; //FILE GHI (ghi vào file) 
	int a, b;
	cout << "Nhap lan luot a va b : ";
	cin >> a >> b;
	//Bước 2 : Mở file cần ghi vào  
	outFile.open("BT1.txt");
	//Bước 3 : xử lí và kiểm tra file có mở được không 
	//Có 2 cách kiểm tra file 
	//Cách 1 : 
	//if (outFile.is_open()) //Nếu file mở được
	//else //File ko mở được 
	if (outFile.is_open())//Mở file ghi thành công 
	{
		//Thay vì dùng cin thì mình dùng outFile 
		outFile << a + b << endl;
		cout << "Mo file thanh cong !\n";
	}
	else
		cout << "Mo file ghi khong thanh cong !\n";
	//Bước 4 : đóng file 
	outFile.close();
	system("pause");
	return 0;
}

//Bài 2. Viết chương trình đọc giá trị của file BT1.txt vừa ghi được ở Bài 1 và lưu vào biến m.
//Xuất lại giá trị m này lên màn hình kết quả khi biên dịch chương trình.

#include<iostream>
#include<fstream> //Thư viện để dùng ifstream và ofstream 
using namespace std;
int main22()
{//Bước 1 khai báo file đọc 
	ifstream inFile; //FILE ĐỌC 
	int m;
	//Bước 2 mở file cần đọc 
	inFile.open("BT1.txt"); //Mở file đọc 
	//Bước 3 xử kí và kiểm tra 
	if (inFile.is_open()) //Nếu mở được file đọc 
	{
		//Như cin >> 
		inFile >> m;
		cout << "Ket qua sau khi doc FILE : m = " << m << endl;
	}
	else
		cout << "Mo file khong thanh cong !\n";
	//Đóng 4 file đọc 
	inFile.close();
	system("pause");
	return 0;
}
//Bài 3.Viết chương trình ghi xuống file BT3.txt giá trị 3 số nguyên cách nhau bằng dấu #.
//Sau đó đọc dữ liệu từ file này để gán giá trị đọc được lần lượt cho 3 biến a, b, c; tính và
//xuất giá trị trung bình cộng của 3 số nguyên này.
#include<fstream>
using namespace std;
int main23()
{
	int a, b, c, x, y, z;
	double tbc;
	cout << "Nhap gia tri lan luot cho a b c : "; cin >> a >> b >> c;
	//Khai báo đọc (ifstream) và ghi (ofstream) file 
	ofstream outFile; //FILE GHI 
	ifstream inFile; //FILE DOC 
	//Đề yêu cầu ghi file trước nên mình mở file ghi trước 
	//Bước 2 mở file để ghi 
	outFile.open("BT3.txt");
	//Bước 3 kiểm tra và xử lí 
	if (outFile.is_open()) //Mở file thành công 
	{
		cout << "Mo flie ghi thanh cong !\n";
		//Như cout << : ghi lên màn hình console 
		//outFile << : ghi vào file vừa mở 
		outFile << a << "#" << b << "#" << c;
	}
	else
		cout << "Mo file khong thanh cong !\n";
	//Bước 4 đóng file ghi 
	outFile.close();
	//Bước 2 mở file cần đọc 
	inFile.open("BT3.txt");
	//Bước 3 kiểm tra và xử lí file đoc 
	if (inFile.is_open())
	{
		cout << "Mo file doc thanh cong !\n";
		//Như cin >> : đọc từ bàn phím
		//inFile >> : đọc từ file vừa mở 
		inFile >> x;
		//Như cin.ignore(1); 
		inFile.ignore(1); //Bỏ qua 1 kí tự từ file (#)
		inFile >> y;
		inFile.ignore(1);//Bỏ qua 1 kí tự từ file (#)
		inFile >> z;
		tbc = (x + y + z) / double(3);
		cout << "Trung binh cong cua: " << x << " + " << y << " + " << z << " = " << tbc << endl;

	}
	else
		cout << "Mo file khong thanh cong !\n";
	//Bước 4 đóng file đọc 
	inFile.close();


	system("pause");
	return 0;
}
//NX: Không lòng ghép file đọc vào file ghi trong tường hợp này được 

//Bài 4 Viết chương trình cho phép nhập 1 chuỗi ký tự tối đa 20 ký tự (lưu trữ dưới dạng
//mảng và dùng con trỏ trỏ đến).Ghi từng ký tự trong chuỗi trên 1 dòng trong file BT4.txt
//sau khi đã in hoa.Mở file BT4.txt để kiểm tra.
#include <iostream> 
#include <fstream>
using namespace std;
int main24()
{
	char a[21]; //Chứa 20 kí tự và 1 kí tự đặt biệt '\0'
	char* p = a; //Khai báo con trỏ và cho con trỏ trỏ đến mảng
	//Mảng thì gán con trỏ cho mảng không cần & 
	//Bước báo file ghi 
	ofstream oFile;
	do {
		cout << "Nhap chuoi: ";
		cin.getline(a, 20); //Hàm nhập lấy bên c-string - lấy cả khoảng trắng 
		//Nhập vào chuỗi a tối đa 20 kí tự 
		if (strlen(a) > 20)
			cout << "Do dai chuoi khong hop le!\n";
	} while (strlen(a) > 20);
	//Bước 2 mở file cần ghi 
	oFile.open("BT4.txt");
	//Bước 3 kiểm tra xử lí 
	if (oFile.is_open()) //Mở được file 
	//if(oFile.is_open()==true) cái này và cái trên như nhau 
	{
		for (int i = 0; i < strlen(a); i++)
			//strlen(s) hàm tính độ dài chuỗi bên c-string 
		{
			//Kí pháp độ dời *(p+i) 
			*(p + i) = toupper(*(p + i));
			//toupper(s) hàm viết hoa kí tự bên c-string 
			oFile << *(p + i) << endl; //Ghi vào file từng kí tự 
		}
		cout << "Ghi file thanh cong " << endl;
	}
	else
		cout << "Ghi file khong thanh cong " << endl;
	//Bước 4 đóng file ghi 
	oFile.close();
	system("pause");
	return 0;
}
//Bài 5. Viết chương trình đếm tổng số ký tự đang có trong file BT4.txt
//và xuất kết quả đếm đó ra màn hình kết quả.
//dem so ki tu co trong BT4
#include <iostream> 
#include <fstream>
using namespace std;
int main25()
{
	//Bước 1 khai báo file đọc 
	ifstream iFile;
	int dem = 1;
	char c;
	//Bước 2 mở file cần đọc 
	iFile.open("BT4.txt");
	//Bước 3 kiểm tra và xử lí 
	if (iFile.is_open())
	{
		//iFile.eof() đến cuối file 
		//!iFile.eof() chưa đến cuối file 
		while (!iFile.eof()) //Hay (iFile.eof()==false)
		{
			//Khi dùng while (!iFile.eof()) thì mình dùng iFile.ignore(); 
			//để bỏ đi kí tự enter còn trong bộ nhớ 
			//iFile.ignore(); //Như cin.ignore(1)
			//Bài này ko cần dùng 
			iFile >> c;
			dem++;
			//Bỏ đi 1 kí tự 
			
		}
		cout << "So ki tu trong file la: " << dem << endl;
		cout << "Doc file thanh cong \n";

	}
	else
		cout << "Doc file khong thanh cong ";
	//Bước 4 đóng file đọc 
	iFile.close();
	cout << endl;
	system("pause");
	return 0;
}

//Bài 6. Viết chương trình đọc các ký tự trong BT4.txt.Kiểm tra xem ký tự nào là 
//nguyên âm, nếu đúng thì ghi ra file BT6.txt.Mở file BT6.txt để kiểm tra.
#include <iostream> 
#include <fstream> 
using namespace std;
int main26()
{
	char kt;
	//Bước 1 mở file ghi 
	ofstream oFile;
	//Bước 1 mở file đọc 
	ifstream iFile;
	//Bước 2 mở file cần đọc 
	iFile.open("BT4.txt");
	//Mở file cần ghi 
	oFile.open("BT6.txt");
	if (iFile.is_open()) // B3 Kiểm tra file đọc 
	{
		if (oFile.is_open()) //B3 Kiểm tra file ghi 
		{
			while (!iFile.eof())//File đọc chưa đến cuối thì lập tiếp 
			{
				//Vì dùng while (!iFile.eof()) nên dùng iFile.ignore(); để bỏ đi enter trong bộ nhớ đệm 
				//iFile.ignore();
				//Bài này ko cần dùng 
				iFile >> kt;
				if (kt == 'U' || kt == 'E' || kt == 'O' || kt == 'A' || kt == 'I')
					oFile << kt << "  "; //Như cout<<

			}
			cout << "Ghi file thanh cong ";
		}
		else
			cout << "Mo file ghi khong thanh cong!\n";

		//B4 đóng file đọc 
		iFile.close();
	}
	else
		cout << "Ghi file khong thanh cong ";
	//B4 đóng file ghi 
	oFile.close();
	cout << endl;
	system("pause");
	return 0;
}


//Bài 7. Viết chương trình lưu hệ số lương của nhân viên trong 1 công ty dưới dạng số
//thực có 2 chữ số phần thập phân, nhập liên tục và mỗi số cách nhau bằng khoảng trắng
//hoặc enter, muốn kết thúc việc nhập dữ liệu thì gõ - 1.
//Ghi thông tin từng hệ số lương của từng người trên 1 dòng trong file BT7.txt.
//Kiểm tra kết quả chương trình.
#include <iostream> 
#include <fstream> 
using namespace std;
int main27()
{
	double LCB;
	ofstream oFile; //Khai báo file ghi 
	oFile.open("BT7.txt"); //Mở file cần ghi 
	cout << "Nhap LCB: ";
	if (oFile.is_open())//Kiểm tra file 
	{
		do
		{
			cin >> LCB; //Cách nhau bằng khoảng trắng 
			if (LCB != -1)
				oFile << LCB << endl;//Ghi vào file 
		} while (LCB != -1);

		cout << "Ghi file thanh cong ";
	}
	else
		cout << "Ghi file khong thanh cong ";
	oFile.close(); //Đóng file ghi 
	cout << endl;
	system("pause");
	return 0;
}

//Bài 8. Viết chương trình gồm các hàm :
//-Ghi 3 số nguyên ra file.
//- Đọc 3 số nguyên từ file.
//- Hàm main kiểm chứng.
#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;
void ghiFile(string& File, int& a, int& b, int& c)
{
	ofstream oFile; //Khai báo file ghi 
	oFile.open(File);//, ios::out //Mở file ghi 
	if (oFile.is_open()) //Kiểm tra file 
	{
		oFile << a << " " << b << " " << c; //Ghi giá trị vô file 
		cout << "Ghi file thanh cong " << endl;

	}
	else
		cout << "Doc file khong thanh cong " << endl;
	oFile.close(); //Đóng file ghi 
}
void docFile(string& File, int& a, int& b, int& c)
{
	ifstream iFile; //Khai báo file đọc 
	iFile.open(File);//, ios::in //Mở file cần đọc
	if (iFile.is_open())
	{
		//iFile cũng giống cin, nó chỉ lấy số và ko lấy khoảng trắng - kết thúc khi gặp enter
		iFile >> a;
		//iFile.ignore(1);
		iFile >> b;
		//iFile.ignore(1);
		iFile >> c;
		//iFile.ignore(1);
		cout << "Doc file thanh cong " << endl;

	}
	else
		cout << "Doc file khong thanh cong " << endl;
	iFile.close();
}
int main28()
{
	ofstream oFile;
	ifstream iFile;
	int a, b, c, x, y, z;
	string Filename;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	cout << "Nhap ten file: ";
	cin.ignore(1); //Xóa enter trong bộ nhớ đệm 
	getline(cin, Filename);
	ghiFile(Filename, a, b, c);
	docFile(Filename, x, y, z);
	cout << x << " " << y << " " << z << endl;
	system("pause");
	return 0;
}

//Bài 9. Viết chương trình gồm các hàm :
//-Nhập vào 1 chuỗi.
//- Ghi 1 chuỗi vào file.
//- Đọc 1 chuỗi từ file.
//- So sánh 2 chuỗi.
//-Nối 2 chuỗi.
//- Đếm 1 chuỗi xem có bao nhiêu nguyên âm.(Không hiểu) 
//- Đếm 1 chuỗi đang lưu trong file có bao nhiêu từ. (Không hiểu)
//- Hàm main kiểm chứng.
#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;
void nhapS(string& s)
{
	cout << "Nhap chuoi s: ";
	getline(cin, s); //Hàm nhập chuỗi bên string - lấy cả khoảng trắng 
}
void ghiStr(string& File, string s)
{
	ofstream oFile; //Khai báo file ghi 
	oFile.open(File, ios::out);//Mở file cần ghi 
	if (oFile.is_open())
	{
		oFile << s << endl; //Như cout 
		cout << "Ghi file thanh cong " << endl;
	}
	else
		cout << "Ghi file khong thanh cong " << endl;
	oFile.close();
}
void docStr(string File, string& s)
{
	ifstream iFile;
	iFile.open(File, ios::in);
	if (iFile.is_open())
	{
		iFile >> s;
		cout << "Doc file thanh cong " << endl;
	}
	else
		cout << "Doc file khong thanh cong " << endl;
	iFile.close();
}
bool Cmpstr(string File1, string File2) //Hàm so sánh nên không thay đổi không cần tham chiếu 
{
	bool kq;
	string s1, s2;
	cout << File1 << endl;
	docStr(File1, s1);
	cout << File2 << endl;
	docStr(File2, s2);
	if (s1 == s2)
		kq = true;
	else
		kq = false;
	return kq;
}
//ham noi 2 chuoi
void AppStr(string File1, string File2)
{
	ifstream F1, F2;
	string s1, s2;
	docStr(File1, s1);
	docStr(File2, s2);
	cout << s1 + ' ' + s2 << endl;
}
int demNA(string& File)
{
	string s;
	int dem = 0;
	docStr(File, s);
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'a' || s.at(i) == 'e' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'i')
			dem++;
	return dem;
}
int demTu(string& File)
{
	ifstream iFile;
	string s;
	char sc[50], ss[] = "	";
	int dem = 0;
	docStr(File, s);
	char* ptok = strtok(sc, ss);
	while (ptok != NULL)
	{
		dem++;
		ptok = strtok(NULL, ss);
	}
	return dem;
}
int main29()
{
	string s1, s2, File1, File2;
	nhapS(s1);
	nhapS(s2);
	cout << "Nhap dia chi file thu 1: ";
	nhapS(File1);
	cout << "Nhap dia chi file thu 2: ";
	nhapS(File2);
	ghiStr(File1, s1);//- Ghi 1 chuỗi vào file.
	docStr(File2, s2);//- Đọc 1 chuỗi từ file.
	if (Cmpstr(File1, File2) == true)//- So sánh 2 chuỗi.
		cout << "Chuoi 1 bang chuoi 2" << endl;
	else
		cout << "Chuoi 1 khong bang chuoi 2 " << endl;
	cout << "Noi 2 chuoi lai ";
	AppStr(File1, File2);//-Nối 2 chuỗi.
	cout << "\nNguyen am trong chuoi 1 la: " << demNA(File1);
	cout << "\nNguyen am trong chuoi 2 la: " << demNA(File2);
	cout << "\nSo tu trong chuoi 1: " << demTu(File1);
	cout << "\nSo tu trong chuoi 2: " << demTu(File2);
	system("pause");
	return 0;
}

//Bài 10. Viết chương trình khai báo 1 struct SinhVien gồm mã sinh viên và họ tên kiểu
//string, năm sinh kiểu int.Sau đó thực hiện các yêu cầu sau :
//-Dùng cấp phát động để khai báo mảng 1 chiều kiểu SinhVien.
//- Nhập thông tin cho tối đa 10 sinh viên.
//- Lưu trữ thông tin của từng sinh viên xuống file BT10.txt
//- Kiểm tra file BT10.txt để xem kết quả.
//- Tiến hành xuất thông tin của 1 sinh viên bất kỳ đọc được từ file BT10.txt
// (dựa trên mã sinh viên do người dùng nhập).
#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
struct SinhVien
{
	string Hoten, MaSV;
	int Namsinh;
};
int main210()
{
	SinhVien* sv; //Khai báo con trỏ kiểu struct tên là sv 
	bool Flag = false;
	int n, Innamsinh;
	string Ma, InMa, Inhoten;
	do {
		cout << "Nhap so sinh vien: ";
		cin >> n;
		if (n < 1 || n>10)
			cout << "Nhap lai! " << endl;
	} while (n < 1 || n>10);
	sv = new SinhVien[n]; //Khai báo mảng động cho con trỏ kiểu struct 
	ofstream oFile; //Khai báo file ghi 
	oFile.open("BT10.txt"); //Mở file cần ghi 
	if (oFile.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap sinh vien thu " << i + 1 << ": ";
			cout << "MSSV: "; cin >> sv[i].MaSV;
			cin.ignore();//Xóa enter trong bộ nhớ đệm 
			cout << "Ho ten: ";
			getline(cin, sv[i].Hoten);
			cout << "Nam sinh: ";
			cin >> sv[i].Namsinh;
			cin.ignore();
			oFile << sv[i].MaSV << endl; //Như cout << 
			oFile << sv[i].Hoten << endl;
			oFile << sv[i].Namsinh << endl;
			cout << "Nhap ds sinh vien thanh cong " << endl;
		}
	}
	else
		cout << "Nhap ds sinh vien khong thanh cong " << endl;
	oFile.close(); //Đóng file ghi 
	cout << "Nhap ma SV de tim: ";
	cin >> Ma;
	ifstream iFile; //Khai báo file đọc 
	iFile.open("BT10.txt");//Mở file cần đọc 
	if (iFile.is_open())
	{
		while (!iFile.eof()) //Chưa kết thúc 
		{
			iFile >> InMa; //Tới khoảng trắng là dừng như cin 
			iFile.ignore(); //Xóa enter trong bộ nhớ đệm như cin.ignore(1);
			getline(iFile, Inhoten); //Đọc từ file vào biến Inhoten dạng chuỗi 
			//Như getline(cin,Inhoten) 
			iFile >> Innamsinh; //Đọc từ file vào biến Innamsinh
			iFile.ignore();
			if (InMa == Ma)
			{
				cout << "Tim thay ma sinh vien " << InMa << endl;
				cout << "Ho ten: " << Inhoten << endl;
				cout << "Nam sinh: " << Innamsinh << endl;
				Flag = true;
				break;
			}
		}

		if (Flag == false)
			cout << "Khong tim thay ma sv " << endl;
	}
	else
		cout << "Mo file khong thanh cong " << endl;
	iFile.close(); //Đóng file đọc 
	delete[]sv; //Dùng mảng động thì nhớ giải phóng bộ nhớ 
	system("pause");
	return 0;
}


//CHƯƠNG 3 CHUỖI 
//Bài 1. Viết chương trình nhận vào 2 chuỗi ký tự(kể cả khoảng trắng).Sau đó thực hiện :
//    a.So sánh xem chuỗi nào dài hơn ?
//    b.Chuyển từng chuỗi thành dạng in hoa ký tự đầu tiên mỗi từ.Xuất lại 2 chuỗi sau khi
//     chuyển.
//    c.Nối chuỗi thứ 2 vào chuỗi thứ nhất.Xuất lại kết quả nối.

#include<iostream>
#include<string>
using namespace std;
void In_Hoa(string& s);
// //Dùng bên C-string 
//const int MAX_SIZE 20 

//Hàm kiểm tra kí tự alpha 
//isalpha()

int main31()
{
	string s1, s2; //Khai báo 2 chuỗi
	//char s1[MAX_SIZE]; //khai báo chuỗi s1 kiểu C-string tối đa MAX_SIZE kí tự 
	//cout<<"Nhap chuoi s1 : ";
	//cin.getline(s1,MAX_SIZE) // hay cin.getline(s1,MAX_SIZE,'\0') như nhau 
	//// '\0' là kí tự kết thúc chuỗi - hàm cho nhập vào chuỗi s1 tối đa MAX_SIZE kí tự 
	//char s1[MAX_SIZE]; //khai báo chuỗi s2 kiểu C-string tối đa MAX_SIZE kí tự
	//cout<<"Nhap chuoi s1 : ";
	//cin.getline(s2,MAX_SIZE)
	cout << "Nhap chuoi s1 : ";
	getline(cin, s1);//Nhập chuỗi lấy khoảng trắng bên String 
	cout << "Nhap chuoi s2 : ";
	getline(cin, s2);//Nhập chuỗi lấy khoảng trắng bên String 
	if (s1.length() > s2.length())
		cout << "Do dai chuoi s1 lon hon chuoi s2!\n";
	else if (s1.length() < s2.length())
		cout << "Do dai chuoi s2 lon hon chuoi s1!\n";
	else
		cout << "Do dai 2 chuoi bang nhau!\n";
	cout << "Ghi hoa chu cai dau cua moi ki tu!! " << endl;
	cout << "Chuoi s1 sau khi in hoa : ";
	In_Hoa(s1);
	cout << endl;
	cout << "Chuoi s2 sau khi in hoa : ";
	In_Hoa(s2);
	cout << endl;
	////Cách 2 dùng toán tử 3 hạng kết hợp 
	//// Điều kiện ? đúng : sai 
	//if (s1.length()==s2.length())
	//cout<<"Do dai chuoi s1 bang do dai chuoi s2!\n";
	//else //Trường hợp > or < 
	//cout <<"Do dai chuoi s1 "<<(s1.length()>s2.length()?" lon hon ":" be hon ")<<" do dai chuoi s2!\n";
	
    //Cách 1 : vì là String nên + chuỗi được 
	//cout << "Noi chuoi s2 vao s1 ta duoc : " << s1 +" "+ s2 << endl;

	//Cách 2 dùng hàm append()
	cout << "Noi chuoi s2 vao s1 ta duoc : " << s1.append(s2) << endl;
	cout << "Sau khi dung ham thi chuoi s1 va chuoi s2 thay doi nhu sau :\n";
	cout <<"Chuoi s1 : " <<s1 << endl<<"Chuoi s2 : " << s2;
	//s1.append(s2) gắn chuỗi s2 vào s1 và xuất ra màn hình 
	//Sau khi dùng hàm chuỗi s1 = s1 + s2; s2 như cũ 
	cout << endl;
	system("pause");
	return 0; 
}
//Hàm in hoa kí tự đầu 
void In_Hoa(string& s) //Dùng tham chiếu chuỗi vì nó sẽ bị thay đổi 
{
	for (int i = 0; i < s.size(); i++) // i < s.length() cũng đúng 
	{
		if ((i == 0) || ((i > 0) && (s[i - 1] == ' ')))//&& (s[i]=isalpha(s[i]))  ))
		//Không cần thêm điều kiện xét có phải là kí tự alpha không
		//vì ở dưới có điều kiện thì mới in hoa hay in thường được 
		{
			//kí tự alpha thường từ a:97 ==> z:122
			//kí tự alpha hoa từ A:65 ==> z:90 
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32; //In thường - 32 = in hoa 
		}
		if (i != 0 && s[i - 1] != ' ') //&&  (s[i] = isalpha(s[i])) )
			//Không cần thêm điều kiện xét có phải là kí tự alpha không
			//vì ở dưới có điều kiện thì mới in hoa hay in thường được 
		{
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
		}
		cout << s[i];
	}
}

//Bài 2. Viết chương trình nhận vào 1 chuỗi ký tự bao gồm “ho, ten”.Sau đó tiến hành tách
//     họ và tên của chuỗi này ra, kết hợp chúng lại thành “ho ten” và xuất lại kết quả.

#include<iostream>
#include<string>
using namespace std;
int main32()
{
	string hoten = " ";
	cout << "Nhap ho ten (Ho, ten): ";
	getline(cin, hoten);
	int dem = 0; //Tìm vị trí dấu ',' để tách chuỗi 
	for (int i = 0; i < hoten.length(); i++)
	{
		if (hoten[i] == ',')
			dem = i;
	}
	//Dùng substr() để tách lấy chuỗi con 
	//string str2 = str.substr(x,y); // Lấy ra chuỗi con của chuỗi str bắt đầu từ vị trí x và lấy ra y kí tự 
    //string str2 = str.substr(x); // Lấy ra chuỗi con của chuỗi str bắt đầu từ vị trí x cho đến cuối chuỗi 
	string a = hoten.substr(0, dem); 
	//Chuỗi con a được lấy ra từ chuỗi mẹ hoten (từ vị trí 0 đến vị trí dem)
	string b = hoten.substr(dem + 1);
	//Chuỗi con b được lấy ra từ chuỗi mẹ hoten (từ vị trí dem + 1 đến cuối chuỗi)
	//dem + 1 : bỏ qua dau ','
	cout << "Chuoi sau khi tach la : ";
	cout << "Chuoi ho " << a << endl;
	cout << "Chuoi ten: " << b << endl;
	cout << "Chuoi sau khi noi lai : " << a.append(b) << endl;
	//Chuỗi b được thêm vào cuối chuỗi a (app : thêm, endl : cuối)
	//Chuỗi a, b đã bị thay đổi 
	system("pause");
	return 0;
}

//Bài 3. Viết chương trình xây dựng các hàm :
//    a.Hàm nhận vào 1 chuỗi ký tự.Trả về kết quả là chuỗi đó sau khi loại bỏ hết khoảng trắng
//     đầu và cuối chuỗi.
//    b.Hàm đếm số khoảng trắng của 1 chuỗi.
//    c.Hàm đếm xem 1 chuỗi có bao nhiêu ký tự chữ số hoặc chữ cái.
//    d.Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in hoa.
//    e.Hàm đếm xem 1 chuỗi có bao nhiêu ký tự in thường.
//    f.Hàm chuyển toàn bộ chuỗi sang in hoa.
//    g.Hàm chuyển toàn bộ chuỗi sang in thường.
//    h.Hàm chuyển chuỗi sang dạng in hoa ký tự đầu tiên mỗi từ.
//    i.Hàm đếm xem 1 chuỗi có bao nhiêu từ.
//    j.Hàm main kiểm chứng các hàm trên.

//BÀI 3 CÁCH 1 
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void Xoa_khoang_trang(string& s);
//dùng tham chiếu vì sau khi xóa thì chuỗi s thay đổi 
void Dem_khoang_trang(string s);
void Dem_ki_tu(string s);
void Dem_Inhoa(string s);
void Dem_Inthuong(string s);
void InHoa_toanBo(string s);
void InThuong_toanBo(string s);
void InHoaDauChu(string s);
void DemTu(string s);
int main33C1()
{
	string s = " ";
	cout << "Nhap chuoi : ";
	getline(cin,s);
	//Xoa_khoang_trang(s);
	//Dem_khoang_trang(s);
	//Dem_ki_tu(s);
	//Dem_Inhoa(s);
	//Dem_Inthuong(s);
	//InHoa_toanBo(s);
	//InThuong_toanBo(s);
	//InHoaDauChu(s);
	//DemTu(s);
	cout << endl;
	system("pause");
	return 0;
}
void Xoa_khoang_trang(string& s) 
{
	int demdau = 0; 
	//đến vị trí nào thì kí tự không phải là kí tự khoảng trắng (chạy từ đầu mảng đến cuối mảng) 
	int demcuoi = 0; 
	//đến vị trí nào thì kí tự không phải là kí tự khoảng trắng (chạy từ cuối mảng về đầu mảng)
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != 32) //khác kí tự khoảng trắng
			//Kí tự khoảng trắng trong mã ASCII là 32 
		{
			demdau = i;
			//lấy cái đầu tiên tìm được rồi dừng 
			break;
		}
	}
	cout << "Vi tri dau tien ma khong co khoang trang phia dau : " << demdau << endl;
	s.erase(0, demdau); //sau khi xóa thì chuỗi string tự cập nhật độ dài 
	cout << "Chuoi sau khi xoa khoang trang o dau : " << s << endl;
	for (int j = s.length() - 1; j >= 0; j--)
	{
		if (s[j] != 32)
		{
			demcuoi = j;
			//lấy cái đầu tiên rồi dừng 
			break;
		}
	}
	cout << "Vi tri dau tien ma khong co khoang trang phia cuoi : " << demcuoi << endl;
	s.erase(demcuoi + 1, (s.length() - demcuoi - 1));
	cout<< "Chuoi sau khi xoa khoang trang o cuoi : " << s << endl;
	cout << "Do dai chuoi sau khi xoa : " << s.length();
	cout << endl;
}
void Dem_khoang_trang(string s)
{
	int dem = 0;
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == 32)//là kí tự khoảng trắng
			dem++;
	}
	cout << "So khoang trang trong chuoi la : " << dem << endl;
}
void Dem_ki_tu(string s)
{
	int cso = 0, ccai = 0;
	for (int i = 0; i < s.length(); i++)
	{
		//Khi dùng s[i] = số thì chương trình nó hiểu theo mã ASCII
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 90 && s[i] <= 122))
		// hay này cũng được if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			ccai++;
		if (s[i] >= '0' && s[i] <= '9')
			//Đối với kí tự số thì ko được dùng mà ko có cặp dấu ' '
			cso++;
	}
	cout << "Chuoi co " << ccai << " ki tu chu cai \n";
	cout << "Chuoi co " << cso << " ki tu chu so";
	cout << endl;
}
void Dem_Inhoa(string s)
{
	int demhoa = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			demhoa++;
	}
	cout << "Chuoi co " << demhoa << " ki tu in hoa \n";
}
void Dem_Inthuong(string s)
{
	int demthuong = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			demthuong++;
	}
	cout << "Chuoi co " << demthuong << " ki tu in thuong \n";
}
void InHoa_toanBo(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			//s[i] = s[i] - 32;
		//Hoặc dùng hàm bên string để in hoa kí tự 
			s[i] = toupper(s[i]);
	}
	cout << "Chuoi sau khi in hoa toan bo : " << s << endl;
}
void InThuong_toanBo(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] + 32;
		//Hoặc dùng hàm trong string 
		//s[i]=tolower(s[i]);
	}
	cout << "Chuoi sau khi in thuong toan bo : " << s << endl;
}
void InHoaDauChu(string s)
//Bonus ở giữa và sau từ nếu có in hoa thì chuyển thành in thường 
{
	for (int i = 0; i < s.size(); i++) // i < s.length() cũng đúng 
	{
		if ((i == 0) || ((i > 0) && (s[i - 1] == ' ')))//&& (s[i]=isalpha(s[i]))  ))
		//Không cần thêm điều kiện xét có phải là kí tự alpha không
		//vì ở dưới có điều kiện thì mới in hoa hay in thường được 
		{
			//kí tự alpha thường từ a:97 ==> z:122
			//kí tự alpha hoa từ A:65 ==> z:90 
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32; //In thường - 32 = in hoa 
		}
		if (i != 0 && s[i - 1] != ' ') //&&  (s[i] = isalpha(s[i])) )
			//Không cần thêm điều kiện xét có phải là kí tự alpha không
			//vì ở dưới có điều kiện thì mới in hoa hay in thường được 
		{
			if (s[i] >= 65 && s[i] <= 90)
				s[i] = s[i] + 32;
		}
	}
	cout << "Chuoi sau khi in hoa chu cai dau : " << s << endl;
}
void DemTu(string s)
{
	//Cách 1 : Thủ công  
	int demtu = 0;
	if (s[0] != ' ')
		demtu++;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			//Kí tự khoảng trắng trong mã ASCII là 32 
			//nên có thể ghi s[i] == 32 && s[i+1] != 32 
			demtu++;
	}
	cout << "Chuoi co " << demtu << " tu \n";

	//Cách 2 : Dùng hàm stringstream (khó hiểu)
	//Khi dùng phải khai báo thư viện #include<sstream>
	/*int demtu = 0;
	stringstream ss(s); 
	string tmp;
	while (ss >> tmp)
		demtu++;
	cout << "Co " << demtu << " tu trong chuoi." << endl;*/
}

//BÀI 3 CÁCH 2 : C-STRING 
#include <iostream> 
//Bên c-string nên không cần khai báo thư viện #include<string>
using namespace std;
void xoa( char s[], int vitri);
void xoadau( char s[]);
void xoacuoi( char s[]);
void demkt( char s[]);
void demchS( char s[]);
void demHoa( char s[]);
void swapH( char s[]);
void swapT( char s[]);
void chuyenHoa( char s[]);
void demtu( char s[]);

int main33C2()
{
	char s[50];//Chứa 49 kí tự thực tế và 1 kí tự '\0'
	cout << "Nhap chuoi: ";
	cin.getline(s,50);
	cout << "Chuoi nhan duoc: ";
	cout << s;
	xoadau(s);
	xoacuoi(s);
	cout << "\nChuoi sau khi xoa khoang trang dau & cuoi la: " << s;
	cout << endl;
	demkt(s);
	demchS(s);
	demHoa(s);
	swapH(s);
	swapT(s);
	chuyenHoa(s);
	demtu(s);
	system("pause");
	return 0;
}
//hàm xóa 1 phần tử 
void xoa(char s[], int vitri)
{
	int n = strlen(s);
	for (int i = vitri + 1; i < n; i++) {
		s[i - 1] = s[i];
	}
	s[n - 1] = '\0';
}
//hàm xóa khoảng trắng đầu chuỗi 
void xoadau(char s[])
{
	while (true)
	{
		if (s[0] == ' ')
		{
			xoa(s, 0);
		}
		else
			break;
	}
}
void xoacuoi(char s[])
{
	while (true) {
		if (s[strlen(s) - 1] == ' ')
		{
			xoa(s, strlen(s) - 1);
		}
		else
			break;
	}
}
//hàm đếm khoảng trắng 
void demkt(char s[])
{
	int dem = 0;
	for (int i = 0; i < strlen(s); i++) 
	{
		if (s[i] == ' ')
			dem++;
	}
	cout << "\nChuoi tren co " << dem << " khoang trang " << endl;
}
//hàm đếm chữ số hoặc chữ cái 
void demchS(char s[])
{
	int demchS = 0, demchC = 0;
	for (int i = 0; i < strlen(s); i++) 
	{
		if (isalpha(s[i]))
			demchC++;
		if (isdigit(s[i]))
			demchS++;
	}
	cout << "\nSo luong chu cai trong mang la: " << demchC;
	cout << "\nSo luong chu so trong mang la: " << demchS;
}
//hàm đếm ký tự in hoa, thường 
void demHoa(char s[])
{
	int demHoa = 0, demThuong = 0;
	for (int i = 0; i < strlen(s); i++) 
	{
		if (isupper(s[i]))
			demHoa++;
		if (islower(s[i]))
			demThuong++;
	}
	cout << "\nSo luong chu hoa trong mang la: " << demHoa;
	cout << "\nSo luong chu thuong trong mang la: " << demThuong;
}
//hàm đổi chuỗi -> hoa
void swapH(char s[])
{
	for (int i = 0; i < strlen(s); i++) 
	{
		s[i] = toupper(s[i]);
	}
	cout << "\nChuyen toan bo chuoi sang chu hoa: " << s;
}
void swapT(char s[])
{
	for (int i = 0; i < strlen(s); i++) 
	{
		s[i] = tolower(s[i]);
	}
	cout << "\nChuyen toan bo chuoi sang chu thuong: " << s;
}
//chuyển các ký tự đầu sang in hoa 
void chuyenHoa(char s[])
{
	s[0] = toupper(s[0]);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
			s[i + 1] = toupper(s[i + 1]);
	}
	cout << "\n\nChuyen cac ky tu dau sang in hoa: " << s;
}
//hàm đếm chuỗi có bnh từ 
void demtu(char s[])
{
	int dem = 0;
	if (s[0] != ' ')
		dem++;
	for (int i = 0; i < strlen(s) - 1; i++) //-1 vì bỏ bớt \n
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			dem++;
	}
	cout << "\nSo luong tu trong chuoi la: " << dem << endl;
}


//Bài 4. Xây dựng hàm nhận vào 1 chuỗi ký tự(không khoảng trắng), kiểm tra xem chuỗi đó có
//      phải là chuỗi palindrome hay không ? Viết chương trình kiểm chứng hàm vừa xây dựng.
//Ví dụ : chuỗi “Anna”, “hih” là chuỗi palindrome.
//Chuỗi palindrome là chuỗi đối xứng 
//CÁCH 1 : STRING 
#include<iostream>
#include<string>
using namespace std;
int main34C1()
{
	string s;
	cout << "Nhap chuoi (khong co khoang trang.): ";
	getline(cin, s); //Cách nhập bên string - lấy khoảng trắng 
	for (int i = 0; i < s.size(); i++) //s.length cũng như s.size 
		s[i] = tolower(s[i]); //đưa các kí tự trong chuỗi về kí tự thường 
	string tmp = s; //Tạo biến tạm = chuỗi s để lát chuỗi s đảo thì mình so sánh 
	reverse(s.begin(), s.end());//Đảo ngược chuỗi 
	//s.begin() s.end() có tác dụng như con trỏ, trỏ đến vị trí đầu và cuối của chuỗi s 
	if (tmp.compare(s) == 0) //So sánh chuỗi tmp với chuỗi s đã bị đảo
		cout << "Day la chuoi Palindrome." << endl;
	else
		cout << "Day khong phai la chuoi Palindrome." << endl;
	system("pause");
	return 0;
}
//Hàm reverse(s.begin(),s.end()) : Đảo ngược chuỗi từ vị trí đầu đến cuối 
//Hàm s1.compare(s2) : So sánh chuỗi s1 với chuỗi s2
// -1: s1<s2
//  1: s1>s2
//  0: s1=s2 

//CÁCH 2 : C-STRING 
#include <iostream> 
using namespace std;
int dnmang( char s[]); 
int main34C2()
{
	char s[100];
	cout << "Nhap chuoi (khong chua khoang trang) : ";
	cin.getline(s,100); //Hàm nhập bên C-string, nhập vào biến s - tối đa 99 kí tự 
	//Nên thêm 1 hàm đưa các kí tự trong chuỗi về kí tự thường hết rồi mới xét chuỗi palindrome 
	if(dnmang(s)==1)
		cout << "Chuoi tren la chuoi palindrome !\n";
	else
		cout << "Chuoi tren khong phai la chuoi palindrome !\n";
	cout << endl;
	system("pause");
	return 0;
}
int dnmang( char s[]) //Dùng hàm bool cũng ok 
{
	for( int i=0; i<strlen(s)/2; i++)
		//Cho vòng lập chạy nữa chuỗi thôi, vì xét cái đầu với cái cuối nên chỉ nữa vòng là được 
	{
		if(s[i]==s[strlen(s)-i-1])
			return 1; //như true bên bool 
	}
	return 0; //như fale bên bool 
}

//Bài 5. Viết chương trình cho phép người dùng nhập password(10 ký tự) và hiển thị dưới dạng k
//     ý tự “X”.Sau đó kiểm tra xem đúng password là “SinhVienCQ”hay không ? Nếu đúng thông
//     báo đã đăng nhập thành công, nếu sai yêu cầu nhập lại.Tối đa cho phép nhập 3 lần.
//Lưu ý : dùng mảng ký tự lưu trữ chuỗi vừa nhập.
//Ví dụ :
//Nhap mat khau : X X X X X X X X X X
//Nhap sai!Nhap lai!
//Nhap mat khau : X X X X X X X X X X
//Dang nhap thanh cong!

#include<iostream>
//#include<string>
#include<conio.h>
using namespace std;
void xoa1kitu(char s[], int vitri);
//BỊ LỖI ĐÚNG SAI 
int main35C1()
{
	char s[] = "SinhVienCQ";
	char pass[11] ;//Nhập tối đa 10 kí tự 
	char ch;
	int lan = 1; 
	
	do
	{
		cout << "Nhap vao password lan thu " << lan << " : ";
		ch = _getch(); //Nhập mỗi lần 1 kí tự (không xuất hiện lên màn hình console)
		int i = 0;
		while(1)// hay true đều đúng; khác 0 đều là true 
		{//Trong mã ASCII Enter : 13 ; Esc : 27 ; Backspace : 8
			if (ch == 13 || ch == 27)
			{
				break; //thoát khỏi vòng lập khi nhận lện enter hoặc esc 
			}
			else if (ch == 8)
			{
				//Viết hàm xóa 1 kí tự 
				xoa1kitu(pass, ch);
			}
			else
			{
				pass[i] = ch;
				cout << 'X';
				ch = _getch(); //tiếp tục nhập để duy trì vòng lập 
				i++;
			}
		}
		lan++;
		if (lan > 3) 
		{
			cout << "Qua so lan nhap nhap Pass !\n";
			break;
		}
		pass[strlen(pass)] = '\0'; //gán để chuỗi bên c-string ko bị lỗi 
		cout << endl;
		
		if (strcmp(pass, s)==0) //(true)=(!false)=(!0)
		 //Hàm strcmp(s1,s2) : so sánh chuỗi s1, s2 bên c-string 
		 // ==>KQ = 0 : s1 = s2
		 // ==>KQ = 1 : s1 > s2
		 // ==>KQ =-1 : s1 < s2 
		 //!strcmp(pass, "SinhVienCQ")giống như strcmp(pass, "SinhVienCQ") = 0 
		 //Phép so sánh đều đưa ra kết quả là 2 chuỗi giống nhau 
			
		    cout << "Da dang nhap thanh cong! \n";
		else
			
		    cout << "Nhap sai!Nhap lai! \n";
		
		//Khi số lần nhập <= 3 và mật khẩu nhập sai thì sẽ được nhập lại 
	} while (lan <= 3 && strcmp(pass, s));
	cout << pass;
	system("pause");
	return 0;
}
void xoa1kitu(char s[], int vitri)
{
	int n = strlen(s);
	for (int i = vitri + 1; i < n; i++) {
		s[i - 1] = s[i];
	}
	s[n - 1] = '\0';
}
//CÁCH 2 : OK 
#include <iostream> 
#include <conio.h> //để dùng getch()
using namespace std;
int main35C2()
{
	char pass[11]; //cho nhập 10 ký tự 
	char ch;
	int lan=1;
	do{
		cout << "Nhap vao password lan " << lan << ": ";
		ch=_getch();
		int i=0;
		while(ch!=13) //ký tự 13 là dấu enter 
		{ 
			pass[i]=ch;
			cout << 'X';
			ch=_getch();
			i++;
		}
		pass[10]='\0';
		lan++;
		if(!strcmp(pass, "SinhVienCQ"))
			cout << "\nDang nhap thanh cong" << endl;
		else
			cout << "  Nhap sai! Nhap lai! " << endl;
	}while(lan<=3 && strcmp(pass, "SinhVienCQ"));
	system("pause");
	return 0;
}



//Bài 6. Xây dựng hàm nhận vào 1 chuỗi ký tự có dạng : “ngay - thang - nam” với mỗi giá trị
//   ngày, tháng là 2 ký tự, năm là 4 ký tự(Ví dụ : “06 - 01 - 2007”).Sau đó trả về xem ngày đó là
//   ngày thứ mấy trong năm. Viết chương trình kiểm chứng hàm vừa xây dựng

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int ngaytrongthang(int thang, int nam);
bool ktranamnhuan(int nam);

int main36()
{
	string s;
	cout << "Nhap ngay-thang-nam: ";
	getline(cin, s); //Nhập chuỗi bêb string - lấy cả khoảng trắng 
	stringstream ss(s);//Tách chuỗi con từ s và gán vào ss 
	string tmp;
	int ngay, thang, nam;
	int dem = 0;
	while (getline(ss, tmp, '-'))
		//Thường là getline(cin,s) : lấy từ bàn phím đứa vào chuỗi s 
		//getline(ss, tmp, '-') : nhận từ chuỗi ss đưa vào biến tmp khi gặp kí hiệu '-' thì dừng lấy 
		//Điều kiện vòng lập là còn tách đc 

		//Hàm atoi(s) : Bên c-string nhưng string vẫn dùng được 
		//chuyển chuỗi s thành giá trị int. Nếu không thể chuyển thì kết quả là 0
	{
		dem++;
		if (dem == 1)
			ngay = stoi(tmp);
		if (dem == 2)
			thang = stoi(tmp);
		if (dem == 3)
			nam = stoi(tmp);
	}
	//Số ngày cần tìm = ngày đã nhận  + ngày của các tháng đã nhận (đưa năm để kt năm nhuận)
	int tongngay = ngay;
	for (int i = 1; i < thang; i++)
		tongngay += ngaytrongthang(i, nam);
	cout << "Ngay thu " << tongngay << " trong nam." << endl;
	system("pause");
	return 0;
}
int ngaytrongthang(int thang, int nam)
{
	switch (thang)
	{
	case 1: case 3:	case 5:	case 7:	case 8:	case 10: case 12:
		return 31;
		break;
	case 4:	case 6:	case 9:	case 11:
		return 30;
		break;
	case 2:
		if (ktranamnhuan(nam) == true)//true = 1
			return 29;
		else return 28;

		break;
	}
}
bool ktranamnhuan(int nam)
{
	if (nam % 4 == 0 && nam % 100 != 0)
		return 1;
	return 0;
}

//TÁCH TỪ CHUỖI LỚN THÀNH CÁC CHUỖI CON BÊN C-STRING 
#include <iostream >
using namespace std;
int main36P()
{
	char s[11], s1[3], s2[3], s3[5];
	int d, m, y;
	do{
		cout << "Nhap ngay thang nam(dd/mm/yy): ";
		cin.getline(s,11); //Cách nhập chuỗi bên c-string- lấy cả kí tự khoảng trắng 
		strncpy(s1,s,2); 
      s1[2]='\0'; //Phải gán kí tự '\0' để chuỗi không bị lỗi 
     //Hàm strncpy(s1,s,2) : coppy từ chuỗi s sang qua cho s1, nhưng chỉ lấy 2 kí tự 
		d=atoi(s1);
     //Hàm atoi (s):chuyển chuỗi s thành giá trị int. Nếu không thể chuyển thì kết quả là 0
		strncpy(s2,s+3,2); s2[2]='\0';
		m=atoi(s2);
		strncpy(s3,s+6,2); s3[2]='\0';
		y=atoi(s3);
		if(m<=0 || m>=13)
			cout << "Nhap sai! Nhap lai " << endl;
	}while(m<=0 || m>=13); //kiểm tra tháng nhập vào 
	if(y<=20)
		y+=2000;
	else
		y+=1900;
	cout << "Chuoi da nhap: " << s << endl;
	cout << "Ket qua: " << d << "/" << m << "/" << y << endl;
	system("pause");
	return 0;
}

//Bài 7. Xây dựng hàm nhận vào 2 chuỗi ký tự s1 và s2.Tìm xem s2 có xuất hiện trong s1 hay
//     không ? Nếu có thì trả con trỏ về địa chỉ xuất hiện đầu tiên, nếu không trả về NULL.
//     Viết chương trình cho nhập vào 2 chuỗi, gọi hàm vừa xây dựng ở trên, dựa trên giá trị 
//     trả về cho biết vị trí phần tử xuất hiện đầu tiên của s2 trong s1.
//     Cho phép người dùng nhập chuỗi s3.Tiến hành thay thế chuỗi s2 trong s1 bằng s3.
#include <iostream> 
using namespace std;
int* KTS1S2(char* s1, char* s2, int n1, int n2)
{
	int* p = NULL;
	for (int i = 0; i <= (n1 - n2); i++)
	{
		if (!strncmp(s2, s1 + i, n2))
		{
			p = &i;
			break;
		}
	}
	return p;
}
int main37()
{
	char s1[51], s2[51];
	int n1, n2;
	cout << "Nhap chuoi S1: ";
	cin.getline(s1, 50);
	n1 = strlen(s1);
	cout << "Nhap chuoi S2: ";
	cin.getline(s2, 50);
	n2 = strlen(s2);
	if (KTS1S2(s1, s2, n1, n2))
		cout << "Vi tri xuat hien S2 trong S1: " << *(KTS1S2(s1, s2, n1, n2)) << endl;
	else
		cout << "Khong xuat hien S2 trong S1 " << endl;
	system("pause");
	return 0;
}



//Bài 8. Xây dựng chương trình nhập vào chuỗi họ và tên.Sau đó tách họ, chữ lót, tên ra mỗi dòng.
#include<iostream>
using namespace std;
int main38()
{
	char s[51];
	cout << " Nhap ho ten: ";
	cin.getline(s, 50);
	char* t = strtok(s, " ");
	while (t != NULL)
	{
		cout << t << endl;
		t = strtok(NULL, " ");
	}
	system("pause");
	return 0;
}

//Bài 9. Cài đặt bài 8 dưới dạng hàm lấy họ, hàm lấy chữ lót, hàm lấy tên.
//     Viết chương trình kiểm chứng hàm vừa xây dựng.
#include<iostream>
using namespace std;
void tachhoten(char* s)
{
	char* c = strtok(s, " ");
	while (s != NULL)
	{
		cout << s << endl;
		s = strtok(NULL, " ");
	}
}
int main39()
{
	char s[51];
	cout << "Nhap ho ten: ";
	cin.getline(s, 50);
	cout << "Ten sau khi tach: \n";
	tachhoten(s);
	cout << endl;
	system("pause");
	return 0;
}

//Bài 10. Viết chương trình nhập vào chuỗi ngày tháng năm theo định dạng : “thang - ngay - nam”.
//     Sau đó trả về định dạng tương tự nhưng theo qui cách khung giờ quốc tế.
//Ví dụ :
// “07 / 21 / 55”
//Thì kết quả : July 21, 1955
#include<iostream>
using namespace std;
void thang(int chon)
{
	switch (chon)
	{
	case 1:
	{
		cout << "January";
		break;
	}
	case 2:
	{
		cout << " February";
		break;
	}
	case 3:
	{
		cout << "March";
		break;
	}
	case 4:
	{
		cout << "April";
		break;
	}
	case 5:
	{
		cout << "May";
		break;
	}
	case 6:
	{
		cout << "June";
		break;
	}
	case 7:
	{
		cout << "July";
		break;
	}
	case 8:
	{
		cout << " August";
		break;
	}
	case 9:
	{
		cout << "September";
		break;
	}
	case 10:
	{
		cout << " October ";
		break;
	}
	case 11:
	{
		cout << "November";
		break;
	}
	case 12:
	{
		cout << "December";
		break;
	}
	}
}
int main310()
{
	int m, d, y;
	char s[9], s1[3], s2[3], s3[3];
	do {
		cout << " Nhap chuoi thang/ngay/nam  " << endl;
		cin.get(s, 9);
		strncpy(s1, s, 2); s[2] = '\0';
		m = atoi(s1);
		strncpy(s2, s + 3, 2); s[2] = '\0';
		d = atoi(s2);
		strncpy(s3, s + 6, 2); s[2] = '\0';
		y = atoi(s3);
	} while (13 < m < 0);

	thang(m);
	cout << "  " << d << ", ";
	if (y <= 20)
		cout << (2000 + y);
	else
		cout << y + 1900;
	cout << endl;
	system("pause");
	return 0;
}

//Bài 11. Viết chương trình cho phép nhập vào họ, chữ lót, tên(ở 3 biến chuỗi khác nhau).
//     Sau đó trả về kết quả họ tên đầy đủ(nối cả 3 chuỗi lại với nhau).
#include <iostream> 
#include <string>
using namespace std;
int main311()
{
	string s, s1, s2, s3, s4;
	s4 = ' ';
	cout << "Nhap ho: ";
	getline(cin, s1);
	cout << "Nhap chu lot: ";
	getline(cin, s2);
	cout << "Nhap ten: ";
	getline(cin, s3);
	s = s1 + s4 + s2 + s4 + s3;
	cout << "\nHo va ten cua ban la: " << s << endl;
	system("pause");
	return 0;
}
 
//Bài 12. Xây dựng hàm nhận vào 1 chuỗi, trả về kết quả đảo ngược của chuỗi đó.
//       Viết chương trình kiểm chứng hàm vừa xây dựng.
#include <iostream> 
#include <string>
using namespace std;
int main312()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Chuoi ban dau: " << s;
	int d = s.length();
	for (int i = 0; i < d / 2; i++) {
		char temp = s[i];
		s[i] = s[d - i - 1];
		s[d - 1 - i] = temp;
	}
	cout << "\nChuoi sau khi dao nguoc: " << s << endl;
	system("pause");
	return 0;
}

//Bài 13. Viết chương trình nhập vào 1 chuỗi, sau đó xóa hết toàn bộ các nguyên âm 
//     trong chuỗi này.Xuất lại chuỗi kết quả.
#include <iostream> 
#include <string>
using namespace std;
int main313()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == 'u' || s[i] == 'e' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i') {
			s.erase(i, 1);
			i--;
			n--;
		}
	}
	cout << "Xuat chuoi: " << s << endl;
	system("pause");
	return 0;
}
//Bài 14. Viết chương trình nhập vào 1 chuỗi ký tự và 1 từ.
//      Sau đó đếm số lần xuất hiện của từ trong chuỗi vừa nhập.
#include <iostream> 
using namespace std;
#include <string> 
int KTWS(string s1, string s2, int n1, int n2)
{
	int dem = 0, i = 0;
	string str;
	s1 = " " + s1 + " ";
	s2 = " " + s2 + " ";
	n1 = s1.length();
	n2 = s2.length();
	while (i <= n1 - n2)
	{
		str = s1.substr(i, n2);
		if (str == s2)
			dem++;
		i++;
	}
	return dem;
}
int main314()
{
	string s1, s2;
	int n1, n2;
	cout << "Nhap chuoi s1: ";
	getline(cin, s1);
	cout << "Nhap chuoi s2: ";
	getline(cin, s2);
	n1 = s1.length();
	n2 = s2.length();
	cout << "So lan xuat hien cua s2 trong s1 la: " << KTWS(s1, s2, n1, n2) << endl;
	system("pause");
	return 0;
}

//Bài 15. Viết chương trình nhập vào 2 chuỗi s1 và s2.Yêu cầu người dùng nhập vị trí cần chèn
//      (phải hợp lệ) để tiến hành chèn s2 vào s1 bắt đầu từ vị trí đã nhập.
//      Xuất lại chuỗi kết quả sau khi chèn.
#include <iostream> 
#include <string>
using namespace std;
int main315()
{
	string s, s1, s2;
	s2 = " ";
	cout << "Nhap chuoi thu nhat: ";
	getline(cin, s);
	cout << "Nhap chuoi thu hai: ";
	getline(cin, s1);
	int x;
	cout << "Nhap vi tri can chen: ";
	cin >> x;
	s.insert(x, s2);
	s.insert(x, s1);
	cout << "\nChuoi cua ban sau khi noi la: " << s << endl;
	system("pause");
	return 0;
}

//////CHƯƠNG 4 STRUCT - CLASS 

//Bài 1. Định nghĩa kiểu dữ liệu PhongBan gồm các thông tin : mã phòng ban kiểu string,
//tên phòng ban kiểu string.Sau đó viết chương trình cho phép nhập và xuất thông tin
//của 1 phòng ban cụ thể.
#include<iostream>
#include<string>
using namespace std;
//Phải đưa struct lên trên đầu 
struct PhongBan
{
	string MaPhong;
	string TenPhong;
};
//Định nghĩa lại tên struct 
//typedef struct PhongBan PHONGBAN;
void Nhap_Phong_Ban(struct PhongBan& ph)//tên biến ph do mình tự đặt 
//Nhớ dùng tham chiếu & để lưu 
{
	fflush(stdin); //xóa bộ nhớ đệm 
	cout << "Nhap ma phong ban : ";
	getline(cin, ph.MaPhong);
	cout << "Nhap ten phong ban : ";
	getline(cin, ph.TenPhong);
}
void Xuat_Phong_Ban(struct PhongBan ph)
{
	cout << "Ma phong ban la : " << ph.MaPhong << endl;
	cout << "Ten phong ban la : " << ph.TenPhong << endl;
}

int main41()
{
	struct PhongBan pb;
	Nhap_Phong_Ban(pb);
	Xuat_Phong_Ban(pb);
	system("pause");
	return 0;
}
//Bước 1 : Tạo struct PhongBan : chứa kiểu dữ liệu string (mã phòng ban, tên phòng ban)
//Nhớ khai báo thư viện cho kiểu string #include<string>
//Bước 2 : Hàm main : Gán tên cho struct để dễ làm việc 
//Bước 3 : Tạo hàm nhập 
//Bước 4 : Tạo hàm xuất 



//Bài 2. Định nghĩa kiểu dữ liệu PhanSo gồm tử số và mẫu số(số nguyên).Sau đó viết
//chương trình dùng kiểu mới định nghĩa này để xây dựng các hàm tính tổng, hiệu, tích,
//thương của 2 phân số.
//Lưu ý : phân số chỉ có nghĩa khi mẫu số khác 0.
#include<iostream>
using namespace std;
struct PhanSo
{
	int ms;
	int ts;
};
void Nhap_Phan_So(struct PhanSo& ps)
{
	cout << "Nhap tu so : ";
	cin >> ps.ts;
	do
	{
		cout << "Nhap mau so : ";
		cin >> ps.ms;
		if (ps.ms == 0)
		{
			cout << "Phan so khong ton tai !\n";
			cout << "Nhap lai mau so : ";
			cin >> ps.ms;
		}
	} while (ps.ms == 0);
	//Nếu ms = 0 thì cho nhập lại hoài khi nào đúng thì dừng 
}
void Xuat_Phan_So(struct PhanSo ps)
{
	cout << "Phan so vua nhap : ";
	cout << ps.ts << "/" << ps.ms << endl;
}
//Như hàm double Tong (PhanSo ps1, PhanSo ps2) 
//Mà PhanSo Tong(PhanSo ps1, PhanSo ps2) thi nó cho mình ps.ms=... ps.tu=... để tính toán dễ hơn
PhanSo Tong(PhanSo ps1, PhanSo ps2) //ps1,ps2 do mình đặt ra 
{
	//Vì là hàm struct nên phải trả giá trị struct 
	PhanSo ps; //gán tên cho struct phân số 
	ps.ts = ps1.ts * ps2.ms + ps1.ms * ps2.ts;
	ps.ms = ps1.ms * ps2.ms;
	return ps;
}
int UCLN(int a, int b)
{
	//Hàm abs(x) : lấy giá trị tuyệt đối của x (dùng được bên C và C++)
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a; //a=b return nào cũng được 
}
//hàm tối giản 
void rutgon(PhanSo& ps)
{
	cout << "Phan so sau khi gut gon : ";
	cout << ps.ts / UCLN(ps.ts, ps.ms) << "/" << ps.ms / UCLN(ps.ts, ps.ms) << endl;
}
PhanSo Hieu(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.ts = ps1.ts * ps2.ms - ps1.ms * ps2.ts;
	ps.ms = ps1.ms * ps2.ms;
	return ps;
}
PhanSo Tich(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.ts = ps1.ts * ps2.ts;
	ps.ms = ps1.ms * ps2.ms;
	return ps;
}
PhanSo Thuong(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.ts = ps1.ts * ps2.ms;
	ps.ms = ps1.ms * ps2.ts;
	return ps;
}
int main42()
{
	PhanSo ps1, ps2, tong, hieu, tich, thuong;
	//Gán tên cho struct, có thể gán nhiều tên; 
	//Giống int a,b,c,d,e,f;
	cout << "\t \t Nhap phan so thu 1 \n";
	Nhap_Phan_So(ps1);
	Xuat_Phan_So(ps1);
	rutgon(ps1);
	cout << "\t \t Nhap phan so thu 2  \n";
	Nhap_Phan_So(ps2);
	Xuat_Phan_So(ps2);
	rutgon(ps2);
	cout << "Tong 2 phan so la: ";
	tong = Tong(ps1, ps2);
	//Phải làm hàm struct tong và gán  struct tong (hàm main) = hàm struct Tong
	//để lấy phân số 
	rutgon(tong);
	cout << "Hieu 2 phan so la: ";
	hieu = Hieu(ps1, ps2);
	rutgon(hieu);
	cout << "Tich 2 phan so la: ";
	tich = Tich(ps1, ps2);
	rutgon(tich);
	cout << "Thuong 2 phan so la: ";
	thuong = Thuong(ps1, ps2);
	rutgon(thuong);
	system("pause");
	return 0;

}
//Bước 1 : Tạo struct (phải nằm trên đầu) 
//Bước 2 : Hàm main (đặt lại tên cho struct) 

//Bài 3. Định nghĩa kiểu dữ liệu NhanVien gồm các thông tin sau :
//-Mã nhân viên kiểu string
//- Họ tên kiểu string
//- Năm vào làm kiểu int
//- Năm sinh kiểu int
//Viết các hàm :
//-Nhập vào đầy đủ thông tin của 1 nhân viên.
//- Xuất lại thông tin của nhân viên vừa nhập.
//- Tính tuổi và thâm niên làm việc của nhân viên này.Biết rằng :
//      tuổi = năm hiện tại – năm sinh
//      thâm niên = năm hiện tại – năm vào làm
//- Hàm main kiểm chứng chương trình.

#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct NhanVien
{
	string mnv;
	string htnv;
	int namlam;
	int namsinh;
};

//Hàm nhập thông tin 1 sinh viên 
void NhapthongtinNV(NhanVien& nv) //tên biến nv do mình đặt 
{
	//Thông tin nhập có thể thay đổi nên phải dùng tham chiếu &
	//Xóa bộ nhớ đệm 
	//while (getchar() != '\n'); //Nhớ khai báo thư viện #include<conio.h>
	//Bài này có while (getchar() != '\n'); cái bị lỗi 
	//cin.ignore(1);
	//Bài nay không cần xóa bộ nhớ : chỉ nhập có 1 nhân viên, khi nào nhập mảng 
	//hay trước đó có nhập cin mà sau đó nhập getline thì xóa bộ nhớ đệm 
	cout << "Nhap ma nhan vien : ";
	getline(cin, nv.mnv);
	cout << "Nhap ho ten nhan vien : ";
	getline(cin, nv.htnv);
	cout << "Nhap nam nhan vien vao lam : ";
	cin >> nv.namlam;
	cout << "Nhap sinh cua nhan vien : ";
	cin >> nv.namsinh;
}
//Xuất thông tin 1 nhân viên 
void XuatThongTinnv(NhanVien nv)
{
	cout << "Xuat ma nhan vien : " << nv.mnv << endl;
	cout << "Nhap ho ten nhan vien : " << nv.htnv << endl;
	cout << "Nhap nam nhan vien vao lam : " << nv.namlam << endl;
	cout << "Nhap sinh cua nhan vien : " << nv.namsinh << endl;
}
void TinhTuoi_ThamNien(NhanVien nv, int namhientai)
{
	int tuoi, thamnien;
	tuoi = namhientai - nv.namsinh;
	thamnien = namhientai - nv.namlam;
	cout << "Tuoi cua NV: " << tuoi << endl;
	cout << "Tham nien lam viec: " << thamnien << endl;
}
int main()
{
	int namhientai;
	NhanVien nv;//khai báo struct nhân viên 
	cout << "\t \t NHAP THONG TIN NHAN VIEN \n";
	NhapthongtinNV(nv);
	cout << "\t \t XUAT THONG TIN SINH VIEN \n";
	XuatThongTinnv(nv);
	cout << "Nhap nam hien tai : ";
	cin >> namhientai;
	TinhTuoi_ThamNien(nv, namhientai);
	system("pause");
	return 0;
}

//Bài 4. Định nghĩa kiểu dữ liệu SinhVien gồm các thông tin :
//-Mã số sinh viên kiểu string
//- Họ tên kiểu string
//- Địa chỉ kiểu string
//- Năm sinh kiểu int
//- Điểm toán kiểu double
//- Điểm văn kiểu double
//- Điểm ngoại ngữ kiểu double
//Bài tập thực hành Kỹ thuật lập trình
//Viết các hàm :
//- Nhập vào thông tin của sinh viên trong 1 lớp học(sĩ số không quá 45).
//- Xuất lại thông tin của sinh viên nào do người dùng yêu cầu(thông qua việc nhập
//	  số thứ tự của sinh viên).
//- Tính điểm trung bình và xuất lại thông tin mã số sinh viên, họ tên và điểm trung
//	  bình của từng sinh viên.Biết :
//	  điểm trung bình = ((điểm toán + điểm văn) * 2 + điểm ngoại ngữ) / 5
//- Xếp loại sinh viên :
//      Nếu điểm trung bình từ 8 trở lên thì xếp loại là “Giỏi”
//      Nếu điểm trung bình từ 6.5 đến < 8 thì xếp loại là “Khá”
//	    Nếu điểm trung bình từ 5 đến < 6.5 thì xếp loại là “TB”
//	    Nếu điểm dưới 5 thì xếp loại “Dưới TB”
//- Viết hàm main kiểm chứng chương trình.

#include <iostream>
using namespace std;
#include <string>
struct SinhVien
{
	string MSSV;//-Mã số sinh viên kiểu string
	string Hoten;//- Họ tên kiểu string
	string Diachi;//- Địa chỉ kiểu string
	int Namsinh; //- Năm sinh kiểu int
	double Diemtoan;//- Điểm toán kiểu double
	double Diemvan;//- Điểm văn kiểu double
	double Diemngoaingu;//- Điểm ngoại ngữ kiểu double
};
void nhap(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\t\tNHAP THONG TIN SINH VIEN THU " << i + 1 << endl;
		cout << "Nhap MSSV: ";
		cin.ignore();
		cin >> a[i].MSSV;
		cout << "Nhap ho ten: ";
		cin.ignore();
		getline(cin, a[i].Hoten);
		cout << "Nhap dia chi: ";
		cin.ignore();
		getline(cin, a[i].Diachi);
		cout << "Nhap nam sinh: ";
		cin.ignore();
		cin >> a[i].Namsinh;
		cout << "Nhap lan luot diem toan, van va ngoai ngu: ";
		cin.ignore();
		cin >> a[i].Diemtoan >> a[i].Diemvan >> a[i].Diemngoaingu;
	}
}
void xuat(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\t\tXUAT THONG TIN SINH VIEN THU " << i + 1 << endl;
		cout << "\nMSSV: " << a[i].MSSV;
		cout << "\nHo ten SV: " << a[i].Hoten;
		cout << "\nDia chi: " << a[i].Diachi;
		cout << "\nNam sinh: " << a[i].Namsinh;
		cout << "\nDiem toan, van, ngoai ngu: " << a[i].Diemtoan << ", " << a[i].Diemvan << ", " << a[i].Diemngoaingu;
	}
}
double diemTB(SinhVien& sv)
{
	double diemtb;
	diemtb = ((sv.Diemtoan + sv.Diemvan) * 2 + sv.Diemngoaingu) / 5;
	return diemtb;
}
void xuatsau(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "\nMSSV: " << a[i].MSSV;
		cout << "\nHo ten: " << a[i].Hoten;
		if (diemTB(a[i]) >= 8)
			cout << "SV dat loai gioi" << endl;
		if (diemTB(a[i]) >= 6.5 && diemTB(a[i]) < 8)
			cout << "SV dat loai kha" << endl;
		if (diemTB(a[i]) >= 5 && diemTB(a[i]) < 6.5)
			cout << "SV xep loai trung binh" << endl;
		if (diemTB(a[i]) < 5)
			cout << "SV xep loai duoi trung binh" << endl;
	}
}
int main44()
{
	SinhVien a[100];
	int n;
	do
	{
		cout << "So luong SV can nhap thong tin: ";
		cin >> n;
		if (n > 45)
			cout << "Toi da 45 SV! " << endl;
	} while (n > 45);
	nhap(a, n);
	xuat(a, n);
	cout << endl;
	xuatsau(a, n);
	system("pause");
	return 0;
}


//Bài 5. Định nghĩa kiểu dữ liệu Sach gồm các thông tin sau :
//-Tên sách kiểu mảng 1 chiều char, tối đa 20 ký tự.
//-Tên tác giả kiểu mảng 1 chiều char, tối đa 20 ký tự.
//-Ngày tháng năm xuất bản kiểu struct NTN(ngày, tháng, năm đều là số nguyên)
//	Viết các hàm sau :
//-Nhập vào thông tin của tối đa 50 quyển sách.
//-Xuất lại thông tin của quyển sách nào có tên tác giả là “Tran Dung”
#include <iostream> 
using namespace std;
#include <string> 
struct NTN
{
	int ngay, thang, nam;
};
struct Sach
{
	char TenSach[20];
	char TenTG[20];
	NTN ngay;
};
void nhap(Sach a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n\t\tNHAP THONG TIN SACH " << i + 1 << endl;
		cout << "Nhap ten sach: ";
		cin.ignore();
		cin.get(a[i].TenSach, 20);
		cout << "Nhap ten tac gia: ";
		cin.ignore();
		cin.get(a[i].TenTG, 20);
		cout << "Ngay, thang, nam xuat ban: ";
		cin.ignore();
		cin >> a[i].ngay.ngay >> a[i].ngay.thang >> a[i].ngay.nam;
	}
}
void xuat(Sach a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (!strcmp(a[i].TenTG, "Tran Dung")) {
			cout << "Ten sach: " << a[i].TenSach << endl;
			cout << "Ten tac gia: " << a[i].TenTG << endl;
			cout << "Ngay thang nam xuat ban: " << a[i].ngay.ngay << "/" << a[i].ngay.thang << "/" << a[i].ngay.nam << endl;
		}
	}
}
int main45()
{
	Sach a[100];
	int n;
	do {
		cout << "Nhap so luong sach: ";
		cin >> n;
		if (n > 50)
			cout << "Chi nhap toi da 50 cuon sach! " << endl;
	} while (n > 50);
	nhap(a, n);
	cout << "\n\t\tXUAT LAI THONG TIN\n";
	xuat(a, n);
	system("pause");
	return 0;
}

//Bài 6. Định nghĩa kiểu dữ liệu SanPham gồm các thông tin như sau :
//-Mã sản phẩm kiểu char(tối đa 10 ký tự)
//- Tên sản phẩm kiểu string.
//- Đơn giá kiểu double
//- Số lượng tồn kho kiểu int
//Viết chương trình dùng cấp phát động và ký pháp độ dời để :
//-Nhập thông tin cho tối đa 30 sản phẩm.
//- Xuất thông tin của các sản phẩm vừa nhập.
//- Sửa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu.
//- Xóa thông tin của một sản phẩm bất kỳ do người dùng yêu cầu.
//- Sắp xếp lại toàn bộ sản phẩm theo trình tự số lượng tồn kho tăng dần.

#include<iostream>
#include<string>
using namespace std;
struct SanPham
{
	char MaSP[10];
	string TenSP;
	double DonGia;
	int Sltonkho;
};
void HoanVi(SanPham& a, SanPham& b)
{
	SanPham tam;
	tam = a;
	a = b;
	b = tam;
}
void nhap(SanPham& sp)
{
	cout << "Nhap ma san pham: ";
	cin.ignore();
	cin.get(sp.MaSP, 10);
	cout << "Nhap ten san pham: ";
	cin.ignore();
	getline(cin, sp.TenSP);
	cout << "Nhap don gia san pham: :";
	cin >> sp.DonGia;
	cout << "Nhap so luong ton kho ";
	cin >> sp.Sltonkho;
}

void xoa(SanPham a[], int& n, int vitri)
{
	for (int i = vitri + 1; i < n; i++)
	{
		a[i] = a[i - 1];
		n--;
	}
}
void themphantu(SanPham a[], int& n, int x)
{
	SanPham sp;
	nhap(sp);
	for (int i = n; i > x; i--)
	{
		a[i] = a[i - 1];
	}
	a[x] = sp;
	n++;
}
int main46()
{
	SanPham a[50], sp;
	int n;
	do {
		cout << "Nhap so luong: ";
		cin >> n;
		if (n > 30)
			cout << "Nhap ko qua 30 " << endl;
	} while (n > 30);
	for (int i = 0; i < n; i++)
	{
		cout << "\n\tSAN PHAM THU " << i + 1 << endl;
		cout << "Nhap ma san pham: ";
		cin.ignore();
		cin.get(a[i].MaSP, 10);
		cout << "Nhap ten san pham: ";
		cin.ignore();
		getline(cin, a[i].TenSP);
		cout << "Nhap don gia san pham: ";
		cin >> a[i].DonGia;
		cout << "Nhap so luong ton kho: ";
		cin >> a[i].Sltonkho;
	}
	cout << "\n\n\t\tXUAT\n ";
	for (int i = 0; i < n; i++)
	{
		cout << "Ma san pham: ";
		cout << a[i].MaSP << endl;
		cout << "Ten san pham: ";
		cout << a[i].TenSP << endl;
		cout << "Don gia san pham: ";
		cout << a[i].DonGia << endl;
		cout << "So luong ton kho ";
		cout << a[i].Sltonkho << endl;
	}
	int x;
	cout << "Nhap vi tri muon thay doi: ";
	cin >> x;
	xoa(a, n, x);
	themphantu(a, n, x);
	cout << "\t\t\n\nSAU KHI SUA\n" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Ma san pham: " << endl;
		cout << a[i].MaSP;
		cout << "Ten san pham: ";
		cout << a[i].TenSP << endl;
		cout << "Don gia san pham: ";
		cout << a[i].DonGia << endl;
		cout << "So luong ton kho: ";
		cout << a[i].Sltonkho << endl;
	}
	int y;
	cout << "Nhap vi tri muon xoa: ";
	cin >> y;
	xoa(a, n, y);
	for (int i = 0; i < n; i++)
	{
		cout << "Ma san pham: " << endl;
		cout << a[i].MaSP;
		cout << "Ten san pham: ";
		cout << a[i].TenSP << endl;
		cout << "Don gia san pham: ";
		cout << a[i].DonGia << endl;
		cout << "So luong ton kho: ";
		cout << a[i].Sltonkho << endl;
	}
	cout << "Sap xep tang dan theo ton kho: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].Sltonkho > a[j].Sltonkho)
				HoanVi(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << " Ma san pham: " << endl;
		cout << a[i].MaSP;
		cout << "Ten san pham: ";
		cout << a[i].TenSP << endl;
		cout << "Don gia san pham: :";
		cout << a[i].DonGia << endl;
		cout << "So luong ton kho ";
		cout << a[i].Sltonkho << endl;
	}
	system("pause");
	return 0;
}

//Bài 7. Phát triển bài tập 6 thành các hàm riêng biệt.
#include<iostream>
#include<string>
using namespace std;
struct sanpham
{
	char masp[10];
	string tensp;
	double gia;
	int tonkho;
};
void Nhap1(sanpham a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap san pham thu " << i + 1 << endl;
		cout << " Nhap ma san pham: ";
		cin.ignore();
		cin.get(a[i].masp, 10);
		cout << " NHap ten san pham: ";
		cin.ignore();
		getline(cin, a[i].tensp);
		cout << "Nhap don gia san pham: :";
		cin >> a[i].gia;
		cout << " Nhap so luong ton kho ";
		cin >> a[i].tonkho;
	}
}
void xuat(sanpham a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "  Ma san pham: ";
		cout << a[i].masp << endl;
		cout << " Ten san pham: ";
		cout << a[i].tensp << endl;
		cout << "Don gia san pham: :";
		cout << a[i].gia << endl;
		cout << " So luong ton kho ";
		cout << a[i].tonkho << endl;
	}
}
void hoanvi(sanpham& a, sanpham& b)
{
	sanpham tam;
	tam = a;
	a = b;
	b = tam;
}
void nhap(sanpham& sp)
{
	cout << " Nhap ma san pham: ";
	cin.ignore();
	cin.get(sp.masp, 10);
	cout << " NHap ten san pham: ";
	cin.ignore();
	getline(cin, sp.tensp);
	cout << "Nhap don gia san pham: :";
	cin >> sp.gia;
	cout << " Nhap so luong ton kho ";
	cin >> sp.tonkho;
}

void xoa(sanpham a[], int& n, int x)
{
	for (int i = x; i <= n - 1; i++)
	{
		a[i] = a[i + 1];
		n--;
	}
}
void Them1PhanTu(sanpham a[], int& n, int x)
{
	sanpham sp;
	nhap(sp);
	for (int i = n; i > x; i--)
	{
		a[i] = a[i - 1];
	}
	a[x] = sp;
	n++;
}
void xeptangdan(sanpham a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].tonkho > a[j].tonkho)
				hoanvi(a[i], a[j]);
		}
	}
}
int main47()
{
	sanpham a[100];
	int n;
	do {
		cout << " Nhap so luong: ";
		cin >> n;
		if (30 < n || n < 0)
			cout << " qua so luong cho phep!!!";
	} while (30 < n || n < 0);
	Nhap1(a, n);
	xuat(a, n);
	int x;
	cout << " Nhap vi tri sua ";
	cin >> x;
	xoa(a, n, x);
	Them1PhanTu(a, n, x);
	cout << " Sau khi da sua " << endl;
	xuat(a, n);
	int y;
	cout << " Nhap vi tri muon xoa ";
	cin >> y;
	xoa(a, n, y);
	cout << " Sau khi xoa " << endl;
	xuat(a, n);
	cout << " Xep tang dan theo ton kho" << endl;
	xeptangdan(a, n);
	xuat(a, n);
	system("pause");
	return 0;
}

//Bài 8. Định nghĩa kiểu dữ liệu MaTran gồm các thông tin :
//-Số dòng, số cột kiểu int
//- Con trỏ kiểu trỏ đến mảng 2 chiều lưu trữ số nguyên.
//Viết chương trình thực hiện các việc sau :
//-Phát sinh ngẫu nhiên giá trị cho 1 biến kiểu MaTran.
//- Xuất giá trị đang lưu trữ trong mảng 2 chiều của biến kiểu MaTran.
//- Tính tổng các phần tử nào là số đối xứng trong mảng 2 chiều của biến kiểu
//MaTran.
#include <iostream>
using namespace std;
#include <cstdlib>
#include <string> 
#include <iomanip>
struct MaTran
{
	int m, n;
	int** a; //con tro den mang 2 chieu
};
int DaoNguoc(int n)
{
	int dn = 0, chS;
	while (n > 0) {
		chS = n % 10;
		dn = dn * 10 + chS;
		n /= 10;
	}
	return dn;
}
bool check(int n)
{
	if (n == DaoNguoc(n))
		return true;
	return false;
}
int main48()
{
	MaTran A;
	cout << "Nhap so dong, cot cua ma tran: ";
	cin >> A.m >> A.n;
	A.a = new int* [A.m];
	for (int i = 0; i < A.m; i++) {
		A.a[i] = new int[A.n];
	}
	cout << "\nXuat ma tran: \n";
	for (int i = 0; i < A.m; i++) {
		for (int j = 0; j < A.n; j++) {
			A.a[i][j] = rand() % 200;
			cout << setw(4) << A.a[i][j];
		}
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < A.m; i++) {
		for (int j = 0; j < A.n; j++) {
			if (check(A.a[i][j]) == true) {
				sum += A.a[i][j];
			}
		}
	}
	cout << "\nTong cac so doi xung trong mang 2 chieu la: " << sum << endl;
	//thu hoi vung nho
	for (int i = 0; i < A.m; i++) {
		delete[]A.a[i];
	}
	delete[]A.a;
	system("pause");
	return 0;
}

//CLASS 
//Bài 9. Viết lớp PhanSo với 2 biến tử số và mẫu số có mức độ truy xuất là private.Các
//hàm tính toán và trả dữ liệu đều truy xuất ở mức public.Thực hiện các phép tính
//cộng, trừ, nhân, chia giữa 2 phân số.
//Lưu ý : toàn bộ định nghĩa class chuyển sang lưu trữ ở header file.
#include <iostream> 
#include <cmath> 
#include "bai9.h"
using namespace std;
int main49()
{
	PhanSo a, b, c;
	cout << "Nhap vao phan so thu 1: ";
	a.nhap();
	cout << "Nhap vao phan so thu 2: ";
	b.nhap();
	cout << "\nPhan so thu 1: ";
	a.xuat();
	cout << "\nPhan so thu 2: ";
	b.xuat();
	cout << "\nTong cua 2 phan so la: ";
	c = c.tong(a, b);
	c.xuat();
	PhanSo d = d.hieu(a, b);
	cout << "\nHieu cua 2 phan so la: ";
	d.xuat();
	PhanSo e = e.tich(a, b);
	cout << "\nTich cua 2 phan so la: ";
	e.xuat();
	PhanSo f = f.thuong(a, b);
	cout << "\nThuong cua 2 phan so la: ";
	f.xuat();
	system("pause");
	return 0;
}
//Header File  
#include <iostream> 
using namespace std;
#include <cmath> 
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
class PhanSo
{
private:
	int tu, mau;
	void rutgon() {
		int c = UCLN(tu, mau);
		tu = tu / c;
		mau = mau / c;
	}
public:
	void nhap();
	void xuat();
	void gaps(int a, int b);
	PhanSo tong(PhanSo ps1, PhanSo ps2);
	PhanSo hieu(PhanSo ps1, PhanSo ps2);
	PhanSo tich(PhanSo ps1, PhanSo ps2);
	PhanSo thuong(PhanSo ps1, PhanSo ps2);
};
void PhanSo::nhap()
{
	cout << "Nhap vao tu so: ";
	cin >> tu;
	do {
		cout << "Nhap vao mau so: ";
		cin >> mau;
		if (mau == 0)
			cout << "Phan so ko co nghia" << endl;
	} while (mau == 0);
}
void PhanSo::xuat() {
	cout << tu << "/" << mau << endl;
}

PhanSo PhanSo::tong(PhanSo ps1, PhanSo ps2)
{
	PhanSo kq;
	kq.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	kq.rutgon();
	return kq;
}
PhanSo PhanSo::hieu(PhanSo ps1, PhanSo ps2)
{
	PhanSo kq;
	kq.tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	kq.rutgon();
	return kq;
}
PhanSo PhanSo::tich(PhanSo ps1, PhanSo ps2)
{
	PhanSo kq;
	kq.tu = ps1.tu * ps2.tu;
	kq.mau = ps1.mau * ps2.mau;
	kq.rutgon();
	return kq;
}
PhanSo PhanSo::thuong(PhanSo ps1, PhanSo ps2)
{
	PhanSo kq;
	kq.tu = ps1.tu * ps2.mau;
	kq.mau = ps1.mau * ps2.tu;
	kq.rutgon();
	return kq;
}
//Bài 10.Viết lớp GPG để lưu trữ thông tin giờ phút giây và tính được khoảng cách giữa 2
//giá trị giờ phút giây.Sử dụng header file.
#include <iostream> 
#include "bai10.h"
using namespace std;
int main()
{
	GPS a, b, c, d;
	cout << "Nhap vao thoi gian 1(h:m:s) " << endl;
	a.nhap();
	cout << "Nhap vao thoi gian 2(h:m:s) " << endl;
	b.nhap();
	cout << "\nThoi gian 1 vua nhap: ";
	a.xuat();
	cout << "\nThoi gian 2 vua nhap: ";
	b.xuat();
	c = c.tinh(a, b);
	cout << "\nKhoang cach giua 2 khoang thoi gian la: ";
	c.xuat();
	system("pause");
	return 0;
}
//Header File 
#include <iostream> 
using namespace std;
class GPS
{
private:
	int h;
	int m;
	int s;
	void kqq(int kq)
	{
		int h, m, s;
		h = kq / 3600;
		kq -= (h * 3600);
		m = kq / 60;
		s = kq % 60;
		cout << "\nKhoang cach thoi gian la: " << h << ":" << m << ":" << s << endl;
	}
public:
	void nhap();
	void xuat();
	void gettime(int h, int m, int s);
	GPS tinh(GPS a, GPS b);
};
void GPS::gettime(int a, int b, int c)
{
	h = a;
	m = b;
	s = c;
}
void GPS::nhap()
{
	do {
		cout << "Nhap vao gio: "; cin >> h;
		cout << "Nhap vao phut: "; cin >> m;
		cout << "Nhap vap giay: "; cin >> s;
		if (h > 24 || m > 60 || s > 60)
			cout << "Loi nhap! " << endl;
	} while (h > 24 || m > 60 || s > 60);

}
void GPS::xuat()
{
	cout << "Thoi gian vua nhap: " << h << ":" << m << ":" << s << endl;
}
GPS GPS::tinh(GPS a, GPS b)
{
	int s1 = 0;
	int s2 = 0;
	int s;
	s1 = a.h * 3600 + a.m * 60 + a.s;
	s2 = b.h * 3600 + b.m * 60 + b.s;
	s = abs(s2 - s1);
	GPS time;
	time.m = s / 60;
	time.s = s % 60;
	time.h = time.m / 60;
	time.m = time.m % 60;
	return time;
}



/////CHƯƠNG 5 CON TRỎ 
//Bài 1. Viết chương trình thực hiện các yêu cầu sau :
//a.Khai báo 2 biến x và y kiểu số nguyên.
//b.Khai báo con trỏ p để trỏ đến biến kiểu số nguyên.
//c.Cho con trỏ p trỏ đến x.
//d.Con trỏ p nhận giá trị lưu trữ là 80.
//e.Xuất địa chỉ của biến x.
//f.Xuất địa chỉ lưu trong con trỏ p.
//g.Xuất giá trị của biến mà p trỏ đến.
//h.Xuất giá trị của biến x.Giá trị này có phải là giá trị mà p lưu trữ ?
#include<iostream>
using namespace std;
int main51()
{
	int x, y;
	int* p;
	p = &x;//Cho con trỏ b trỏ đến x, nghĩa là lúc này con trỏ p đang
	//giữ địa chỉ của biến x, giống như nó đang tạo 1 mốt liên kết giữa p và x 
	//Còn con trỏ trỏ đến biến thì ta dùng tham chiếu như trên 
	//Còn con trỏ trỏ đến mảng thì ta không dùng tham chiếu 
	//  VD:
	//int a[30];
	//int *p;
	//p = a; 
	*p = 80; //Cho con trỏ nhận giá trị lưu trữ là 80 
	//   VD:
	//int a ;
	//int *b; //khai báo biến con trỏ b kiểu int (chỉ chỏ đến biến nào kiểu int)
	//b=&a; //Cho con trỏ b trỏ đến biến a 
	//Khi này : 
	//cout<<b; như cout<<&a; //Giá trị của biến b = địa chỉ của biến a 
	//Hay giá trị của biến con trỏ = địa chỉ của con trỏ mà nó trỏ đến 
	//cout<<*b; như cout<<a; //Giá trị mà con trỏ b trỏ đến = giá trị biến a 
	//Hay giá trị của con trỏ b trỏ đến = giá trị của biến mà con trỏ đến luôn 
	cout << "Dia chi cua bien x : " << &x << endl; //Xuất địa chỉ của biến x
	cout << "Gia tri ma con tro b luu (dia chi cua bien x) : " << p << endl; //Xuất địa chỉ lưu trong con trỏ p
	cout << "Gia tri ma con tro b dang tro den (gia tri cua x) : " << *p << endl; //Xuất giá trị của biến mà p trỏ đến
	if (x == *p)
		cout << "Gia tri cua x la gia tri cua p luu tru";
	else
		cout << "Gia tri cua x khong la gia tri cua p luu tru";
	cout << endl;
	system("pause");
	return 0;
}

//Bài 2. Viết chương trình thực hiện các yêu cầu sau :
//a.Khai báo 1 mảng số nguyên tối đa 30 phần tử.
//b.Khởi tạo 1 mảng số nguyên với giá trị ngẫu nhiên(các giá trị nhỏ hơn 10).
//c.Khai báo biến con trỏ p trỏ đến mảng vừa khởi tạo.
//d.Dùng con trỏ và ký pháp độ dời để xuất các giá trị đang lưu trữ trong mảng.
//e.Dùng con trỏ và ký pháp chỉ số để xuất các giá trị đang lưu trữ trong mảng.
#include<iostream>
using namespace std;
#include<iostream>
#include<cstdlib> //Dùng cho rand() và srand()
#include<ctime> //Dùn time 
using namespace std;
int main()
{
	srand(time(0)); //Mỗi lần chạy thì rand() cho ra số khác nhau 
	int a[30]; //Khai báo 1 mảng số nguyên tối đa 30 phần tử.
	int n;
	cout << "Nhap so luong phan tu mang : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		//Khởi tạo 1 mảng số nguyên với giá trị ngẫu nhiên(các giá trị nhỏ hơn 10).
	{
		a[i] = rand() % 10; //lấy số < 10 
	}
	int* pt; //khởi tạo 
	//Khai báo biến con trỏ p trỏ đến mảng vừa khởi tạo
	pt = a; //Con trỏ pt kiểu int trỏ đến mảng a thì không cân dùng tham chiếu 

	//Dùng con trỏ và ký pháp độ dời để xuất các giá trị đang lưu trữ trong mảng
	cout << "Xuat mang bang cach dung do doi : ";
	for (int i = 0; i < n; i++)
	{
		cout << *(pt + i) << "  ";
		//Vì *pt = a[0] nên muốn dùng con trỏ để trỏ đến các vị trí khác trong mảng thì phải dùng độ dời
		//*(pt + i) //i chạy từ 0 đến n-1 
	}
	cout << endl;

	//Dùng con trỏ và ký pháp chỉ số để xuất các giá trị đang lưu trữ trong mảng.
	cout << "Xuat mang bang cach dung chi so : ";
	for (int i = 0; i < n; i++)
	{
		cout << pt[i] << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}
// CÁCH TẠO SỐ NGẪU NHIÊN 
#include<iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;
int mainLT1FTCSLT()
{
	srand(time(0)); //khai báo thư viện #include<ctime> mới dùng được ; có srand thì số tạo ra mỗi lần đều khác nhau 
	//Dùng srand(time(0)) hay srand(time(NULL)) đều được 
	//NULL thì ra số ngẫu nhiên không trùng vs số trước còn 0 thì ngược lạ 
	cout << "Random = " << rand() << endl;
	//rand() là lấy ngẫu nhiên số không bị giớ hạn từ 0 tới RAND_MAX (32767)
	//rand() % 10 số tạo ra trong phạm vi [0;9]
	//VD:Muốn random [39;79] thì phân rả ra 
	// = 39 + rand()%41 
	//VD:Muốn random [-39;50] thì phân rả ra 
	//= -39 +rand()%90
	system("pause");
	return 0;
}

//Bài 3. Viết chương trình dùng cấp phát động để cho phép 2 con trỏ lưu trữ giá trị của 2 số
//nguyên.Sau đó dựa trên địa chỉ mà con trỏ trỏ đến để tìm ước chung lớn nhất của 2 giá trị số
//nguyên này bằng thuật giải Euclid.
//Gợi ý : thuật giải Euclid xem lại ở BTTH Lab2.
#include<iostream>
using namespace std;
//Dùng đệ qui để tìm UCLN
int UCLN(int a, int b)
{
	if (b == 0)
		return a;
	return UCLN(b, a % b); //chạy cho đến khi nào b=0 thì xuất ra (a là UCLN)
}
int main53()
{
	//CÚ PHÁP CẤP PHÁT MẢNG MỘT CHIỀU - MẢNG ĐỘNG 
	//   <kiểu dữ liệu của mảng>*<tên mảng - tên con trỏ quản lí mảng > = new <kiểu dữ liệu của mảng>[số lượng phần tử của mảng];
	//Vùng nhớ do người dùng tự cấp phát nên sau khi dùng xong nhớ xóa bằng hàm delete(); 
	int* p = new int; //Như int* p = new int[1]; 
	int* q = new int;
	cout << "Nhap 2 so nguyen: ";
	cin >> *p >> *q; //Nhập giá tri mà con trỏ nó tham chiếu đến vd *p = a[0] 
	cout << "Uoc chung lon nhat cua " << *p << " va " << *q << " la: " << UCLN(*p, *q) << endl;
	delete p;
	//Trả con trỏ về null 
	p = 0; // Hay p = nullp; đều được 
	delete q;
	q = 0; //Hay q = nullq; đều được 
	system("pause");
	return 0;
}
//Bài 4. Viết chương trình dùng cấp phát động, cho phép :
//-Nhập vào 1 mảng 1 chiều lưu trữ số nguyên tối đa 30 phần tử.
//- Dùng con trỏ và ký pháp độ dời để xuất ra các phần tử nào là số lẻ trong mảng.
//- Trả về địa chỉ của giá trị phần tử lớn nhất trong mảng
//(giả sử các giá trị trong mảng không trùng nhau).
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main54()
{
	int* p;//khai báo con trỏ theo kiểu int vì mảng nó trỏ đến thuộc kiểu int 
	int n; //Số lượng phần tử trong mảng 
	do
	{
		cout << "Nhap so luong phan tu cho mang : ";
		cin >> n;
		if (n <= 0 || n > 30)
			cout << "Nhap so luong mang khong hop le !\n";
	} while (n <= 0 || n > 30); //Khác diều kiện này vòng lập dừng 
	p = new int[n]; //Cấp phát n ô nhớ cho con trỏ p - mảng động 1 chiều(dùng xong nhớ xóa delete())

	//Dùng con trỏ và ký pháp độ dời để xuất ra các phần tử nào là số lẻ trong mảng
	//Nhập mảng - cho số bất kì 
	for (int i = 0; i < n; i++)
	{
		//*p = a[0];
		*(p + i) = rand() % 10; //cho số nhỏ < 10 
	}
	//Xuất toàn mảng 
	cout << "Mang vua nhap : ";
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << " ";
	}
	cout << endl;
	int max = *(p + 0); //Gán biến max bằng giá tị đầu tiên của mảng động 
	//Xuất mảng là các số lẻ + tìm giá trị lớn nhất của mảng 
	cout << "Cac phan tu la so le : ";
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) % 2 != 0)//số lẻ 
			cout << *(p + i) << " ";
		if (*(p + i) > max)
			max = *(p + i);
	}
	cout << endl;
	cout << "Gia tri lon nhat trong mang la : " << max << endl;
	cout << "Dia chi cua bien co gia tri lon nhat trong mang : " << &max << endl;

	system("pause");
	return 0;
}


//Bài 5. Dùng con trỏ viết hàm xuất n giá trị của dãy số Fibonacci
//(n do người dùng nhập, là số nguyên > 1).
//Sau đó viết chương trình kiểm chứng lại hàm vừa xây dựng.
#include<iostream>
using namespace std;
long long fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);

}
int main55()
{
	int n;
	cout << "Nhap so luong so fibonacci (n > 1): ";
	cin >> n;
	int* p;//Khai báo biến con trỏ 
	p = &n; //Khai báo biến con trỏ, con trỏ trỏ đến n - vì là kiểu int nên phải có tham chiếu & khi gán 
	//*p = n; giá trị mà con trỏ trỏ đến = giá trị biến mà con trỏ trỏ tới 
	cout << "So FIBO thu " << *p << " la : " << fibo(*p) << endl;
	//Như cout << "So FIBO thu " << n << " la : " << fibo(n) << endl;
	system("pause");
	return 0;
}

//Bài 6. Dùng con trỏ viết hàm đảo ngược 1 mảng 1 chiều lưu trữ số nguyên.
//Sau đó viết chương trình kiểm chứng lại hàm vừa xây dựng.
#include<iostream>
#include<cstdlib> //Dùng srand() và rand 
#include<ctime>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;
}
void xuat(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
}
void daonguoc(int a[], int n)
{//Dùng phương pháp 3 li nước để đảo mảng 1 chiều 
	for (int i = 0; i < n / 2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
int main56()
{
	srand(time(0));
	int n;//Số lượng phần tử mảng do người dùng nhập
	int* p = new int[20];//Cấp phát tối đa 20 ô nhớ cho con trỏ p - mảng động 
	//Thay vì khai báo mảng tĩnh int a[20] thì ta khai báo con trỏ trỏ đến mảng động 
	//Cho con trỏ p trỏ đến mảng động
	//Dùng xong nhớ xóa vùng nhớ delete()
	cout << "Nhap so luong phan tu mang : ";
	cin >> n;
	nhap(p, n);
	xuat(p, n);
	daonguoc(p, n);
	cout << "\nMang sau khi dao nguoc la: ";
	xuat(p, n);
	delete p;
	p = 0;
	system("pause");
	return 0;
}



//Bài 7. Dùng con trỏ viết hàm tìm kiếm 1 số nguyên có tồn tại trong mảng 1 chiều lưu trữ số
//nguyên hay không ? Nếu có thì trả về vị trí đầu tiên xuất hiện số nguyên đó.
//Nếu không thì trả con trỏ về NULL.
//Sau đó viết chương trình kiểm chứng lại hàm vừa xây dựng.
#include <iostream> 
using namespace std;
#include <cstdlib> 
int* tim(int* a, int n, int x) //đặt trỏ vào tên hàm 
{
	int* p = NULL; //nếu k có trả về NULL
	for (int i = 0; i < n; i++) {
		if (*(a + i) == x)
		{
			p = &i;
			break;
		}
	}
	return p;
}
int main57()
{
	int* a;
	int n, x;
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	a = new int[n];
	//xuất mảng 
	for (int i = 0; i < n; i++) {
		*(a + i) = rand() % 20;
		cout << *(a + i) << "  ";
	}
	cout << "\nNhap so muon tim: ";
	cin >> x;
	if (tim(a, n, x) == NULL)
		cout << "Khong ton tai " << x << " trong mang ";
	else
		cout << "Vi tri dau tien cua " << x << " la: " << tim(a, n, x) << endl;
	delete[]a;
	a = 0;
	system("pause");
	return 0;
}

//Bài 8. Viết chương trình dùng cấp phát động, cho phép :
//-Khai báo mảng 2 chiều là một ma trận vuông cấp h(h > 0).
//- Lưu trữ giá trị của một tam giác Pascal với chiều cao h.
//- Xuất lại tam giác Pascal ra màn hình.
//Gợi ý : tam giác Pascal xem lại ở BTTH Lab1.
#include <iostream> 
using namespace std;
#include <cstdlib> 
#include <iomanip>
int main58()
{
	int** p, n;
	cout << "Nhap chieu cao tam giac: ";
	cin >> n;
	p = new int* [n];
	for (int i = 0; i < n; i++)
		p[i] = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j) {
				p[i][j] = 1;
			}
			else
				p[i][j] = p[i - 1][j] + p[i - 1][j - 1];
			cout << setw(3) << p[i][j];
		}
		cout << endl;
	}
	delete[]p;
	p = 0;
	system("pause");
	return 0;
}


//Bài 9. Viết chương trình dùng cấp phát động của con trỏ để viết hàm nhập, 
//xuất 1 mảng số nguyên r hàng và c cột.Sau đó viết hàm dùng con trỏ 
//để tính tổng các phần tử nào là số nguyên tố.
#include <iostream> 
using namespace std;
#include <iomanip>
#include <cstdlib>
bool ktnguyento(int n)
{
	if (n < 2)
		return false;
	else {
		for (int i = 2; i <= sqrt((double)n); i++)
			if (n % i == 0)
				return false;
	}
	return true;
}
//nhập
void nhap(int** p, int r, int c)
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			p[i][j] = rand() % 10;
		}
	}
}
void xuat(int** p, int r, int c)
{
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << setw(3) << p[i][j];
		}
		cout << endl;
	}
}
int main59()
{
	int** p, r, c;
	int sum = 0;
	cout << "Nhap so dong, so cot cua ma tran: ";
	cin >> r >> c;
	p = new int* [r];
	for (int i = 0; i < r; i++) {
		p[i] = new int[c];
	}
	nhap(p, r, c);
	xuat(p, r, c);
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (ktnguyento(p[i][j]) == true) {
				sum += p[i][j];
			}
		}
	}
	cout << "\nTong cac so nguyen to o tren la: " << sum << endl;
	delete[]p;
	p = 0;
	system("pause");
	return 0;
}

//Bài 10.Viết chương trình dùng cấp phát động để khởi tạo ngẫu nhiên giá trị của 2 mảng số
//nguyên theo dạng thức ma trận.Sau đó tính tổng và tích của 2 ma trận đó.
#include <iostream> 
using namespace std;
#include <iomanip>
#include <cstdlib>
void nhap(int** a, int m, int n)
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = rand() % 10;
		}
	}
}
void xuat(int** a, int m, int n)
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
}
void cong(int** a, int** b, int** c, int m, int n)
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void nhan(int** a, int** b, int** c, int m, int n, int p)  //p là chung của 2 ma trận 
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
int main510()
{
	int** a, ** b, ** c;
	int m, n, p, q;
	cout << "Nhap so dong va cot ma tran A: ";
	cin >> m >> n;
	cout << "Nhap so dong va cot ma tran B: ";
	cin >> p >> q;
	a = new int* [m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	cout << "\nMa tran A: \n";
	nhap(a, m, n);
	xuat(a, m, n);
	b = new int* [p];
	for (int i = 0; i < p; i++)
		b[i] = new int[q];
	cout << "\nMa tran B: \n";
	nhap(b, p, q);
	xuat(b, p, q);
	c = new int* [m]; //dòng của ma trận này, cột của ma trận kia 
	for (int i = 0; i < m; i++)
		c[i] = new int[q];
	cout << "\n\n\t\tTong 2 ma tran\n";
	if (m == p && n == q) {
		cong(a, b, c, m, n);
		xuat(c, m, q);
	}
	else
		cout << "Sai dieu kien! Bat buoc phai la ma tran vuong";
	cout << "\n\n\t\tTich 2 ma tran\n";
	if (m == q) {
		nhan(a, b, c, m, n, q);
		xuat(c, m, q);
	}
	else
		cout << "Sai dieu kien!";
	for (int i = 0; i < m; i++) {
		delete[]a[i];
	}
	delete a[];
	for (int i = 0; i < p; i++) {
		delete[]b[i];
	}
	delete[]b;
	for (int i = 0; i < n; i++) {
		delete[]c[i];
	}
	delete[]c;
	cout << endl;
	system("pause");
	return 0;
}

//////CHƯƠNG 6 ĐỆ QUI 
//Bài 1. Xây dựng các hàm đệ qui tính các biểu thức như sau :
//    a/ S1 = 1 + 2 + 3 + ...+ n (n là số nguyên dương) 
//    b/ S2 = 1^2 + 2^2 + 3^2 +...+n^n (n là số nguyên dương) 
//    c/ S3 = 1 + 1/3 + 1/5 +...+ 1/n (n là số nguyên dương và là số lẻ) 
//    d/ S4 = 1! + 2! + 3! +...+n! (n là số nguyên dương) 
//Viết chương trình để mô phỏng và kiểm tra các hàm vừa xây dựng ở trên.
#include <iostream> 
using namespace std;
#include <cmath> 
#include <iomanip>
//câu a 
int dequy(int n)
{
	if (n == 1)
		return 1;
	else
		return dequy(n - 1) + n;
}
//câu b
int dequy1(int n1)
{
	if (n1 == 1)
		return 1;
	else
		return dequy1(n1 - 1) + n1 * n1;
}
//câu c
int dequy2(int n2)
{
	if (n2 == 0)
		return 1;
	else
		return dequy2(n2 - 2) + 1.0 / n2;
}
//hàm giai thừa
int giaithua(int n3)
{
	if (n3 == 0 || n3 == 1)
		return 1;
	else
		return giaithua(n3 - 1) + giaithua(n3);
}
int main61()
{
	int n, n1, n2, n3;
	do {
		cout << "Nhap n nguyen duong: ";
		cin >> n;
		if (n <= 0)
			cout << "Sai yeu cau! Nhap lai " << endl;
	} while (n <= 0);
	cout << "Cau a = " << dequy(n) << endl;
	do {
		cout << "Nhap n nguyen duong: ";
		cin >> n1;
		if (n1 <= 0)
			cout << "Sai yeu cau! Nhap lai " << endl;
	} while (n1 <= 0);
	cout << "Cau b = " << dequy1(n1) << endl;
	do {
		cout << "Nhap n nguyen duong & la so le: ";
		cin >> n2;
		if (n2 % 2 == 0)
			cout << "Sai yeu cau! Nhap lai " << endl;
	} while (n2 % 2 == 0);
	cout << "Cau c = " << dequy2(n2) << endl;
	do {
		cout << "Nhap n nguyen duong: ";
		cin >> n3;
		if (n3 <= 0)
			cout << "Sai yeu cau! Nhap lai: " << endl;
	} while (n3 <= 0);
	cout << "Cau d = " << giaithua(n3) << endl;
	system("pause");
	return 0;
}


//Bài 2. Viết hàm đệ qui tính giai thừa của một số nguyên không âm.Sau đó xây dựng
//chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include <iostream> 
using namespace std;
int dq(int n)
{
	if (n == 0)
		return 1;
	else
		return dq(n - 1) * n;
}
int main62()
{
	int n;
	do {
		cout << "Nhap n khong am: ";
		cin >> n;
		if (n < 0)
			cout << "Sai yeu cau! Nhap lai " << endl;
	} while (n < 0);
	cout << n << "!= " << dq(n) << endl;
	system("pause");
	return 0;
}

//Bài 3. Viết hàm đệ qui tính giá trị Fibonacci của một số nguyên không âm.Sau đó xây
//dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include <iostream> 
using namespace std;
int Fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main63()
{
	int n;
	do {
		cout << "Nhap n khong am: ";
		cin >> n;
		if (n < 0)
			cout << "Sai yeu cau! Nhap lai " << endl;
	} while (n < 0);
	cout << "So Fibonacci thu " << n << " la: " << Fibonacci(n) << endl;
	system("pause");
	return 0;
}

//Bài 4. Viết hàm đệ qui tính giá trị của x^n
//; với x, n là số nguyên.Sau đó xây dựng
//chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include <iostream> 
using namespace std;
int mu(int x, int n)
//tại vì n phải trừ đi 1 đơn vị sau 1 lần đệ qui nên ko thể dùng tham chiếu 
{
	if (n == 1)
		return x;
	else
		return mu(x, n - 1) * x;
}
int main64()
{
	int n, x;
	cout << "Nhap x nguyen duong: ";
	cin >> x;
	cout << "Nhap n nguyen duong: ";
	cin >> n;
	cout << x << "^" << n << "= " << mu(x, n) << endl;
	system("pause");
	return 0;
}

//Bài 5. Viết hàm đệ qui đếm số chữ số của một số nguyên không âm.Sau đó xây dựng
//chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
//đếm số chữ số của số nguyên không âm 
#include <iostream> 
using namespace std;
int sochuso(int n) //vd: 12567 ==> n=5
{
	if (n < 10)
		return 1;
	else {
		return 1 + sochuso(n / 10);
	}
}
int main65()
{
	int n;
	do {
		cout << "Nhap n khong am: ";
		cin >> n;
		if (n < 0)
			cout << "Nhap sai ! Nhap lai " << endl;
	} while (n < 0);
	cout << n << " co " << sochuso(n) << " chu so" << endl;
	system("pause");
	return 0;
}

//Bài 6. Viết hàm đệ qui tính số đảo ngược của một số nguyên không âm.Sau đó xây
//dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
//Số đảo ngược
#include <iostream> 
using namespace std;
int sdn(int n)
{
	if (n == 0)
		return 0;
	else
	{
		cout << n % 10;
		return sdn(n / 10);
	}
}
int main66()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So dao nguoc cua " << n << " la: ";
	sdn(n);
	cout << endl;
	system("pause");
	return 0;
}



//Bài 7. Viết hàm đệ qui tính tổng các chữ số chẵn / lẻ của một số nguyên không âm.Sau
//đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include <iostream> 
using namespace std;
int tchan = 0, tle = 0;
int tongchan(int n) //n=112
{
	if (n == 0)
	{
		return tchan;
	}
	int temp = n % 10; // 1 1 
	//chỉ xét từ hàng đơn vị - vì nhìn hàng đơn vị có thể biết chẵn lẻ 
	if (temp % 2 == 0)
		tchan += temp; //2 
	return tongchan(n / 10); //11 1 0  
}
int tongle(int n)
{
	if (n == 0)
	{
		return tle;
	}
	int chS = n % 10;
	if (chS % 2 != 0)
		tle += chS;
	return tongle(n / 10);
}
int main67()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong cac chu so chan cua " << n << " la: " << tongchan(n) << endl;
	cout << "Tong cac chu so le cua " << n << " la: " << tongle(n) << endl;
	system("pause");
	return 0;
}

//Bài 8. Viết hàm đệ qui chuyển một số nguyên dương từ hệ thập phân sang nhị phân.Sau
//đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
//chuyển hệ 10 sang 2 
#include <iostream> 
using namespace std;
void convert10_2(int n) //15 
{
	if (n == 0)
		return;
	else
	{
		int chS = n % 2; //1 1 1
		convert10_2(n / 2); //7 3 
		cout << chS; //11
	}
}
int main68()
{
	int n;
	cout << "Nhap so thap phan: ";
	cin >> n;
	cout << n << " chuyen sang nhi phan la: ";
	convert10_2(n);
	cout << endl;
	system("pause");
	return 0;
}

//Bài 9. Viết hàm đệ qui chuyển một số nguyên ở dạng nhị phân sang hệ thập phân.
//chuyển nhị phân sang thập phân
#include <iostream> 
#include <cmath>
using namespace std;
int BintoDec(int bin) // 111  11 1
{
	int chS, i = 0, dec = 0;
	if (bin == 0)
		return 0;
	else
	{
		return BintoDec(bin / 10) * 2 + bin % 10; //1+1*2+1*2+1*2 = 7 
	}
}
int main69()
{
	int bin;
	cout << "Nhap so nhi phan: ";
	cin >> bin;
	cout << "So " << bin << " chuyen sang he 10 la: " << BintoDec(bin) << endl;
	system("pause");
	return 0;
}

//Bài 10. Viết hàm đệ qui tìm ước số chung lớn nhất của hai số nguyên.Sau đó xây
//dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
//Gợi ý : ước chung lớn nhất của 2 số nguyên a và b có thể được tính bằng thuật giải Euclid
//như sau :
//Bước 1 : nếu b = 0 thì trả về kết quả là a và kết thúc, ngược lại sang bước 2.
//Bước 2 : chia a cho b và gán d là số dư.Sang bước 3
//Bước 3 : gán giá trị b cho a và d cho b.Quay lại bước 1.
//tìm UCLN
#include <iostream> 
using namespace std;
int UCLN(int a, int b) // 3_5 5_3 3_2 2_1 1_1 
{
	int d;
	if (b == 0)
		return a;
	if (d = a % b) //3 2 1 1  0   //d khác 0 
	{
		a = b; //5 3  2 1
		b = d; //3 2  1 1
		return UCLN(a, b);
	}
	return b; //return a hay b đều được 
}
int main()
{
	int a, b;
	cout << "Nhap so nguyen thu nhat: ";
	cin >> a;
	cout << "Nhap so nguyen thu hai: ";
	cin >> b;
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << UCLN(a, b) << endl;
	system("pause");
	return 0;
}

//Bài 11. Viết hàm đệ qui tính tổng các giá trị của một mảng 1 chiều lưu trữ số
//nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int tong(int arr[], int n) // 2 5 8 
{
	//Nếu dùng cấp phát động int *arr=new int [n] thì 
	//int tong(int* arr, int n) ko dùng [] 
	if (n == 1) return arr[0];
	return tong(arr, n - 1) + arr[n - 1];
}
int main()
{
	//srand(time(0));
	int n;
	cout << "Nhap so luong phan tu mang : ";
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		//phương pháp chỉ số 
		arr[i] = 1 + rand() % 10; //tới 10
	}
	cout << "Mang la : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Tong cac phan tu trong mang : " << tong(arr, n) << endl;
	//delete[] arr;
	system("pause");
	return 0;
}

//Bài 12. Viết hàm đệ qui tìm giá trị nhỏ nhất của một mảng 1 chiều lưu trữ số
//nguyên.Sau đó xây dựng chương trình để mô phỏng và kiểm tra hàm vừa xây dựng.
#include<iostream>
using namespace std;
int Max(int a[], int n)
{
	if (n == 1)
		return a[0];

	if (Max(a, n - 1) > a[n - 1])
		return Max(a, n - 1);
	else
		return a[n - 1];
}
int main612()
{
	//srand(time(0));
	int n;
	cout << "Nhap so luong phan tu mang : ";
	cin >> n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		//phương pháp chỉ số 
		arr[i] = 1 + rand() % 10; //tới 10
	}
	cout << "Mang la : ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Phan tu lon nhat trong mang la : " << Max(arr, n) << endl;
	system("pause");
	return 0;
}

//Bài 13. Viết hàm đệ qui để xuất ra 1 tam giác Pascal.Biết rằng 1 tam giác Pascal
//có dạng như sau với chiều cao là 5:
//1
//1  1 
//1  2  1 
//1  3  3  1 
//1  4  6  4  1 

