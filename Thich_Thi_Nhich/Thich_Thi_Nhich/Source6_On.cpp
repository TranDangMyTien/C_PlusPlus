// Dùng các hàm thì phải khai báo thư viện
// #include<cmath> (cmath cho c++, math.h cho c) khi dùng sqrt() pow( , ) acos( )
// sqrt() : căn bậc 2 của 1 số ; pow(x,y) : x mũ y (x hệ số, y số mũ)
// #include<iomanip> khi dùng setw ; fixed << setprecision 


//abs(x)                 |x|
//exp(x)                 e^x  , e = 2.718
//pow(x, y)              x^y 
//sqrt(x)                x^1/2 or căn bậc 2 x
//sin(x)                 sinx, x: radians
//cos(x)                 cosx, x: radians
//tan(x)                 tanx, x: radians
//log(x)                 ln(x),x > 0
//log10(x)               log10(x),x > 0



//     Hàm acos() trong C / C++ tính cosin trong C và C++
//     Cú pháp : acos(data_type x)  
//     Trong đó x là giá trị cần truyền vào, có hai dạng đó là Degrees (độ) và Radians
//     Chuyển từ độ sang rad : Độ => độ*pi(3.14)/180 rad
//     Chuyển từ rad sang độ : Rad => chuyển pi(3.14) thành 180 rồi tính bình thường độ



//Cú pháp ép kiểu 
// static_cast<kiểu int hay ...>(số cần ép kiểu)


// define tenVietHoa giá trị (không cần dấu ";") 

// CÁCH TẠO SỐ NGẪU NHIÊN 
#include<iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;
int main1()
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

//Toán tử 3 ngôi 
// nếu phép toán trước dấu ? đúng thì sẽ trả về kết quả trước dấu : còn nếu sai thì trả về kết quả sau dấu :

//getline(cin, strTen);
//(chép hết dữ liệu từ stdin vào biến strTen)
// cin.getline(strTen,5);
//(cho phép nhập 5-1 kí tự vào xâu strTen)

//KhacNhauGiua_++x_x++

#include <iostream>
using namespace std;

int mainLT_1()
{
	// Truong hop dat sau
	int x = 10;
	cout << x++ << endl; // in ra 10
	cout << x << endl; // in ra 11

	// Truong hop dat truoc
	x = 10;
	cout << ++x << endl; // in ra 11
	system("pause");
	return 1;

}

// ÉP KIỂU
#include <iostream>
#include <iomanip>	// for std::setprecision()
using namespace std;

int mainLT_2()
{
	int n{ 75 };
	cout << static_cast<char>(n) << endl;
	// in ký tự với mã ASCII 75
	char ch{ 'K' };
	cout << static_cast<int>(ch) << endl;
	// in mã ASCII của ký tự 'K'
	return 0;
}
// Cú pháp ép kiểu static_cast< kiểu biến >(tên biến);

//ĐÃ IN 
//______________________________________________________________________________________________________
//___________________________________________________________________________________________________________

//cout : lệnh xuất 1 chuỗi thông báo ra màn hình ==> Câu lệnh xuất 
//Vừa xuất thông báo, vừa xuất giá trị 
//cin : lệnh nhập gía trị cho biến tư bàn phím 
//system("pause"); // lệnh dừng màn hình 
//NGÔN NGỮ C 
//%d : đặt tả cho SỐ NGUYÊN 
//%f : đặt tả cho SỐ THỰC 
//%c : đặt tả cho KÝ TỰ 
//%s : đặt tả cho CHUỖI 

//TẠO PROJECT mới có đuôi .c thì mới chạy c được 
//#include<stdio.h> // Thư viện hỗ trợ nhập xuất chính
//#include<conio.h> // Nó chứa lệnh getch () - dừng màn hình để xem 
// Hàm chính - xử lí các lệnh của chương trình 
//void main()
//{
	//xuất thông báo hay giá trị của biến ra màn hình 
	/*printf("Hello World "); *///Hay printf_s(" ");
	//printf giống cout 
	//scanf giống cin 
	/*int a;*/
	/*scanf("%d", &a);*/// "%d" là đặt tả phải có, đặt tả cho số nguyên 
	//Nhập vào số nguyên a 
//	printf("Gia tri cua bien a: %d", a); //xuất cũng phải có đặt tả luôn
//
//	getch(); // dừng màn hình để xem 
//}

///////////BIẾN CON TRỎ//////////////////////////////
//1 biến bình thường gồm 2 thành phần
//  + giá trị 
//  + địa chỉ 


// VD : int a; // hệ điều hành sẽ đi cấp phát cho chúng ta 1 vùng nhớ ngẫu nhiên đâu đó trong bộ nhớ máy tính
// và hệ điều hành gán cho biến đó 1 địa chỉ để quản lý

//Biến con trỏ cũng giống như 1 biến bình thường cũng có 2 phần nhưng nó có 1 tính chất mà các biến bình thường 
//không có - đó là miền giá trị 

//Biến con trỏ có 3 thành phần 
//    + giá tị 
//    + địa chỉ
//    + miền giá trị 


//Miền giá trị là địa chỉ của cái biến mà con trỏ đó trỏ tới
//Nó có quyền trỏ lung tung trong bộ nhớ 


#include<iostream>
using namespace std;
int main2()
{
	int a = 6; // khởi tạo biến a có giá trị là 6
	int* b; //khai báo biến con trỏ có kiểu dữ liệu là int
	//  Kiểu dữ liệu con trỏ không phải là kiểu dữ liệu của nó, mà đó chính là
	//kiểu dữ liệu của cái biến mà con trỏ đó sẽ trỏ tới
	//  Con trỏ b chỉ có thể trỏ đến các cái biến int mà thôi 
	b = &a; //cho con trỏ b trỏ đến biến a, nghĩa là lúc này con trỏ b đang
	//giữ địa chỉ của biến a, giống như nó đang tạo 1 mốt liên kết giữa a và b 
	//TÍNH CHẤT CỦA CON TRỎ LÀ LẤY ĐỊA CHỈ CỦA 1 BIẾN MÀ NÓ TRỎ ĐẾN 
	// & : là toán tử địa chỉ 
	int* c; //khai báo biến con trỏ c 
	c = b; //con trỏ c đang trỏ đến con trỏ b 
	cout << "Gia tri cua bien a : " << a << endl;
	cout << "Dia chi cua bien a :  " << &a << endl;
	//a++; //Giá trị của a thay đổi thì cảu b cũng thay đổi 
	//(b)++; //Thay đổi giá trị biến b thì biến a cũng thay đổi theo 
	cout << "Gia tri cua bien a : " << a << endl;
	cout << "Dia chi cua bien a :  " << &a << endl;
	cout << "Gia tri cua bien b : " << *b << endl; //Khi lấy giá trị của biến con trỏ thì cần dấu "*" trước biến 
	cout << "Dia chi cua bien b : " << &b << endl;
	cout << "Mien gia tri cua con tro b : " << b << endl;

	cout << "Gia tri cua bien c: " <<*c << endl; //Khi lấy giá trị của biến con trỏ thì cần dấu "*" trước biến 
	cout << "Dia chi cua bien c: " <<&b<<endl;
	cout << "Mien gia tri cua con tro c: " << c << endl;
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
int main3()
{
	int a;
	int* b; //con trỏ chỉ có địa chỉ, nhưng chưa có vùng nhớ để chứa giá trị 
	//kích thước con trỏ luôn là 4 byte
	system("pause");
	return 0;
}

///////CON TRỎ VÔ KIỂU/////////
//void * : con trỏ này có thể nhận mọi kiểu dữ liệu 
/////CƠ CHẾ CẤP PHÁT BỘ NHỚ VÀ GIẢI PHÓNG BỘ NHỚ 
//   Tại sao phải cấp phát bộ nhớ cho con trỏ?
//Khi ta khai báo int *b - nghĩa là lúc này biến b chỉ có địa chỉ, chưa hề tồn 
//tại vùng nhớ để chứa giá trị.Nếu như ban đầu ta muốn cho con trỏ b đó chứa giá trị thì sẽ bị lỗi, 
//bởi vì con trỏ đó chưa có bộ nhớ. Vì vậy chúng ta cần cấp phát cho con trỏ đó bộ nhớ hợp lệ
//   Tại sao phải giải phóng bộ nhớ ?


//  * Trong ngôn ngữ lập trình C có các hàm cấp phát bộ nhớ cho con trỏ như :
//+ malloc :Nếu như ta không gán giá trị cho ô nhớ thì nó sẽ mang giá trị rác 
// Giá trị rác chính là giá trị không xác định thuộc kiẻu dữ liệu của biến đó 
//+ calloc :Nếu ta không gán giá trị cho ô nhớ thì nó sẽ mang giá trị là 0 
//+ realloc (hàm cha của 2 hàm kia) :
//     ++ Nếu như con trỏ chưa hề được cấp phát vùng nhớ thì hàm realloc sẽ cấp phát cho nó q vùng nhớ mới 
//     ++ Nếu như con trỏ đã có vùng nhớ thì hàm realloc có tác dụng cấp phát lại vùng nhớ 
// cho con trỏ - nghĩa là có thể nới rộng vùng nhớ hoặc thu hẹp vùng nhớ 
//   Dùng hàm free() : giải phóng bộ nhớ cho con trỏ 

//   Trong ngôn ngữ lập trình C++ có toán tử new để cấp phát bộ nhớ cho con trỏ 
//   Dùng delete: giải phóng vùng nhớ cho con trỏ 

//==> Tất cả các vùng nhớ mà cấp phát cho con trỏ đều nằm trên vùng nhớ HEAP SEGMENT 
//==> Vì vậy khi chúng ta cấp phát bộ nhớ cho con trỏ, khi không sử dụng nữa thì phải giải phóng cho nó 
//NẾU KHÔNG GIẢI PHÓNG sẽ bị lỗi tràn bộ nhớ (MEMORY LEAK)


//    Nếu chúng ta chỉ khai báo - int *c - thì lúc này con trỏ c chỉ có địa chỉ - nó chưa hề tồn tại vùng nhớ
//    Vậy thì con trỏ c có vùng nhớ khi nào?
//+Nếu con trỏ c này mà trỏ đến 1 cái biến hợp lệ (con trỏ thuộc kiểu dữ liêu nào thì có thể trỏ đến biến thuộc kiểu dữ liệu đó) thì 
//lúc này vùng nhớ của con trỏ mới tồn tại. Nghĩa là con trỏ sẽ sử dụng ké cái vùng nhớ của biến mà nó trỏ tới 
//+Khi ta cấp phát vùn nhớ hợp lệ thì con trỏ mới tồn tại vùng nhớ để lưu giá trị 


////////CẤP PHÁT VÙNG NHỚ CHO CON TRỎ 
//     -Tại sao phải cấp phát vùng nhớ cho con trỏ ?
//Bởi vì khi khai báo int *a thì con trỏ a không có vùng nhớ để chứa giá trị.
//Vì vậy cấp phát cho con trỏ a 1 vùng nhớ hợp lệ để sử dụng con trỏ 1 cách dễ dàng 
//*a = 69; sẽ bị lỗi, vì lúc này con trỏ a chưa hề tồn tại vùng nhớ để chứa giá trị 
//     -Tại sao phải giải phóng vùng nhớ cho con trỏ ?
//Biến toàn cục, cục bộ thì do CPU - thì khi không dùng nữa hay kết thúc chương trình thì CPU sẽ
//đến đó và giải phóng cho các biến 
//Vùng nhớ chứa con trỏ là vùng nhớ do người lập trình quản lí, khi ta cấp phát 
//vùng nhớ cho con trỏ, thì khi ta không dùng nữa thì ta phải đi giải phóng vùng nhớ đó


//BÊN C 
//#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h> //thư viện này hỗ trợ dùng các hàm cấp phát bộ nhớ cho con trỏ 
//
//int main4()
//{
//	int* a; //khai báo con trỏ a, lúc này con trỏ a chưa có vùng nhớ, vì vậy ta đi cấp phát vùng nhớ cho con trỏ 
	
	//cấp phát vùng nhớ cho con trỏ bằng hàm malloc 
	
	//malloc : là 1 cái hàm yêu cầu hệ điều hành cấp phát ra 1 vùng nhớ trong bộ nhớ máy tính
	//a = (int *) malloc(sizeof(int *)); //sizeof(kiểu dữ liệu) ; vd sizeof(int) cho ra kích thước của kiẻu dữ liệu 
	//malloc thuộc kiểu void * nên phải ép kiểu 
	//Sau khi cấp phát vùng nhớ thì gán giá trị cho biến con trỏ 1 cách bình thường 
	

	//cấp phát vùng nhớ cho con trỏ bằng hàm calloc 
	//a = (int*)calloc(1,sizeof(int*)); //Trong hàm calloc (kích thước ô nhớ, kích thước vùng nhớ) 

	//cấp phát vùng nhớ cho con trỏ bằng hàm realloc
	//realloc cũng là hàm void* 
	/*a = (int*)realloc(0, sizeof(int *));*/ //Cấp phát vùng nhớ mới cho con trỏ nên thêm số 0
	
	// a = (int*)realloc(a, sizeof(int *));									 
	//Còn cấp phát lại vùng nhớ cho con trỏ thì thêm tên biến (a trong bài này)
	//  a = (int*)realloc(a, sizeof(int *)*5); //tạo ra 5 ô nhớ 	
	
	//*a=69;
	//printf("Gia tri cua bien con tro a : %d", *a);
	//free(a); //giải phóng vùng nhớ cho con trỏ a 
	//getch();
	//return 0; 
//}

//BÊN C++
//<Kiểu dữ liệu>*<Tên con trỏ cần cấp phát vùng nhớ> = new <kiểu dữ liệu> [số lượng ô nhớ cần cấp phát]
#include<iostream>
using namespace std;
int main5()
{
	int* a = new int[5]; 
	// int *a = new int [1] đồng nghĩa int *a = new int // cấp phát 1 ô nhớ 
	*a = 69;
	cout << "Gia tri cua con tro a : " << a;
	delete a ; // hàm giải phóng vùng nhớ bên C++
	system("pause");
	return 0; 
}

//////MẢNG 1 CHIỀU - CẤP PHÁT ĐỘNG 
//Mảng 1 chiều là mảng có thể thay đổi số lượng phần tử của mảng trong quá tình chương trình chạy 
//CÚ PHÁP:
//   <kiểu dữ liệu của mảng>*<tên mảng - tên con trỏ quản lí mảng > = new <kiểu dữ liệu của mảng>[số lượng phần tử của mảng];
//Hạn chế dư thừa bộ nhớ 

//Nhập vào mảng 1 chiều các số nguyên.Viết chương trình in ra các phần tử là số chẵn của mảng.

//MẢNG TỈNH 

#include<iostream>
using namespace std;
#define M 100
void nhap1(int arr[], int n);
void xuat1(int arr[], int n);
int main6()
{
	int a[M];
	int n;
	do
	{
		cout << "Nhap so phan tu cho mang : "; 
		cin >> n; 
		if (n <= 0 || n > M)
			cout << "Nhap so luong phan tu cho mang khong hop le !\n";
	} while (n <= 0 || n > M);
	nhap1(a, n);
	xuat1(a, n);
	system("pause");
	return 0;
}
void nhap1(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho mang thu " << i <<" = "; cin >> arr[i];
	}
}
void xuat1(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			cout << "Gia tri cua a[ " << i << " ] = " << arr[i];
			cout << endl;
		}
	}
}

//MẢNG ĐỘNG 
//XÓA GIÁ TRỊ DỊCH VỀ BÊN TRÁI 
//THÊM GIÁ TRỊ DICH VỀ BÊN PHẢI 
//THÊM PHẦN TỬ BẤT KỲ VÀO TRONG MẢNG ĐỘNG 
//Dùng phương pháp gián tiếp, vì trực tiếp sẽ mất đi giá trị của mảng 
//a = new int [n+1] thì những giá trị của mảng a có n phần tử sẽ bị xóa
//Để không bị mất giá trị của mảng thì ta cần dùng phương pháp thêm mảng phụ để chứa các giá trị của mảng a trước khi tạo mới
//Nhớ phải delete[] temp (mảng phụ) - giải phòng vùng nhớ khi không còn dùng nữa 
//XÓA PHẦN TỬ BẤT  KỲ TRONG MẢNG 


//HẠN CHẾ BÀI NÀY, NÓ BỊ GÌ Á 
#include<iostream>
using namespace std;

void nhap(int arr[], int n);
void xuat(int arr[], int n);
//void them(int *&a, int& n, int vt, int x);
void xoa(int a[], int& n, int vt );
int main7()
{
	
	int n;
	do
	{
		cout << "Nhap so phan tu cho mang : ";
		cin >> n;
		if (n <= 0 )
			cout << "Nhap so luong phan tu cho mang khong hop le !\n";
	} while (n <= 0 );
	//CÁCH KHAI BÁO 1 
	//t* a; //khai báo con trỏ a - con trỏ a có nhiệm vụ trỏ đến ô nhớ đầu tiên của mảng 
	//= new int [n]; //khai báo mảng động có n phần tử được quản lí bởi con trỏ a 
	//CÁCH KHAI BÁO 2 
	int* a = new int[n]; //Vế bên phải hàm new yêu cầu máy cấp phát vùng nhớ chứa n ô nhớ, mỗi ô nhớ có kiểu int (4 byte)
	//cấp phát mảng động có n ô nhớ 
	nhap(a, n); 
	xuat(a, n);
	cout << endl;
	/*int x;
	cout << "Nhap phan tu can them : "; cin >> x;

	int vt;
	cout << "Nhap vi tri can them : ";
	cin >> vt; */

	int v;
	cout << "Nhap vi tri can xoa : "; cin >> v; 


	/*them(a, n, vt, x);
	xuat(a, n);
	cout << endl;*/
	xoa(a, n, v);
	xuat(a, n);
	cout << endl;
	delete[] a;// Hàm giải phóng vùng nhớ cho cả mảng 
	//delete a; //Hàm chỉ giải phóng ô đầu tiên 
	system("pause");
	return 0;
}
void nhap(int arr[], int n) //mảng động nên *a 
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri cho mang thu " << i << " = "; 
		cin >> arr[i];//có thể ghi cin >> *(a+i) hay i[a] 
	}
}
void xuat(int arr[], int n) //mảng động nên *a 
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = " << arr[i];
		cout << endl;
	}
}
//void them(int *&a, int& n, int vt, int x) //Vì có thay đổi số lượng mảng nên bắt buộc dùng tham chiếu &
////Thêm & để lưu lại việc thay đổi 
//{
//	//Bước 1 : Tạo mảng phụ temp chứa các phần tử của mảng a 
//	int* temp = new int[n]; //Số lượng phần tử trong mảng temp phải bằng mảng a ban đầu 
//	for (int i = 0; i < n; i++)
//	{
//		temp[i] = a[i]; //bỏ lần lượt các phân tử của mảng a sang cho mảng temp 
//	}
//	//Bước 2 : Giải phóng vùng nhớ cũ của a 
//	delete[] a; //Giải phóng vùng nhớ cho cả mảng  
//	//Bước 3 : Cấp phát lại vùng nhớ mới cho a ==> mảng a sẽ tăng lên 1 ô nhớ 
//	a = new int[n + 1];//cấp phát lại vùng nhớ cho mảng a với số lượng phần tử mảng tăng lên 1 ô nhớ 
//	//Bước 4 : Đổ tất cả các phần tử của mảng temp về lại cho mảng a mới được cấp phát 
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = temp[i];
//	}
//	delete[] temp;//giải phóng vùng nhớ cho mảng temp khi không dùng nữa 
//	n++;
//	for (int i = n - 1; i > n; i--)
//	{
//		a[i] = a[i - 1];
//	}
//	a[vt] = x;
//}
void xoa(int a[], int& n, int vt)
{
	//Sau khi xóa phần tử tại vị trí vt - thì chúng ta cần phải thu hẹp vùng nhớ nhớ ban đầu 
	//Bước 1 : Tạo mảng phụ temp chứa các phần tử của mảng a 
	int* temp = new int[n]; //Số lượng phần tử trong mảng temp phải bằng mảng a ban đầu 
	for (int i = 0; i < n; i++)
	{
		temp[i] = a[i]; //bỏ lần lượt các phân tử của mảng a sang cho mảng temp 
	}
	//Bước 2 : Giải phóng vùng nhớ cũ của a 
	delete[] a; //Giải phóng vùng nhớ cho cả mảng  
	//Bước 3 : Cấp phát lại vùng nhớ mới cho a ==> mảng a sẽ giảm 1 ô nhớ 
	a = new int[n - 1];//cấp phát lại vùng nhớ cho mảng a với số lượng phần tử mảng giảm xuống 1 ô nhớ 
	//Bước 4 : Đổ tất cả các phần tử của mảng temp về lại cho mảng a mới được cấp phát 
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
	delete[] temp;//giải phóng vùng nhớ cho mảng temp khi không dùng nữa 
	n--; 
	for (int i = vt ; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	 
}

// n = 5 
// 0 1 2 3 4 
// 5 6 3 2 8 
//xóa tại vị trí a[2]=3 
// giảm n ; n = 4 
// 0 1 2 3 
// 5 6 2 8 
//==> Nếu giảm n trước thi không biết giá trị trong mảng còn lưu hay không 
// Chạy thử thì n-- trước hay sau đều cũng được 