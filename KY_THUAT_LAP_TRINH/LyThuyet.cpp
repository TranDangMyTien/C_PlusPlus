#include<iostream>
using namespace std;

int mainLT1()
{
char hoten[50];
cin.get(hoten, 50);
cout << hoten << endl;
/*cin.ignore(); *///bỏ qua enter và 1 ký tự trong luồng nhập,
 //hoặc cin.ignore(1)
cin.get(hoten, 50);
cout << hoten << endl;
//Nếu không có lệnh cin.ignore() thì lần nhập hoten thứ 2
//không được diễn ra.
system("pause");
return 0;
}


//Tập tin và luồng 
//Khai báo thư viện #include<fstream>
//Đọc file lên chương trình thì dùng ifstream (ĐỌC)
//Đọc dữ liệu từ chương trình xuống 1 file ofstream (GHI)
//ifstream: đây là lớp - có chức năng hỗ trợ chúng ta ĐOC dữ liệu từ file về chương trình (ĐỌC)
//giống cin (đọc dữ liệu từ bàn phím) thì ifstream đọc dữ liệu từ file 
//ofstream: đây là lớp - có chức năng hỗ trợ chúng ta GHI dữ liệu từ CHƯƠNG TRÌNH vào file (GHI)
//giống cout (ghi dữ liệu ra màn hình) thì ofstream ghi dữ liệu vào file 
#include<iostream>
#include<fstream>
using namespace std;
void mainLT2()
{
	//Đọc file 
	ifstream file; //ifstream đọc file lên chương trình ; file là tên mình đặt 
	//Muốn đọc file lên chương trình thì phải đọc file và mở file
	file.open("D://KTLT/Text1A.txt"); // mở file
	//Đường dẫn tuyệt đối D://../..
	int a[20];
	int n;
	file >> n; // thay vì dùng cin thì mình dùng file 
	cout << "Gia tri cua n : " << n << endl;
	for (int i = 0; i < n; i++)
	{
		file >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Gia tri thu " << i + 1 << " la : " << a[i] << endl;
	}
	file.close();  // đóng file 
	//Ghi file 
	ofstream file1("giatri.txt"); // file 1 là mình đặt tên ; cú pháp mở file ghi khác với cách mở file đọc 
	for (int i = n-1; i >= 0; i--)
	{
		file1 << a[i] << endl;
	}
	file1.close(); //Cách đóng file ghi giống với cách đóng file đọc 


	system("pause");
}

// CÁCH TẠO SỐ NGẪU NHIÊN 
#include<iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;
int mainLT3()
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


#include<iostream>
#include<fstream>
using namespace std;
int mainLT4()
{
	//====================== ĐỌC FILE ===================
	// CÚ PHÁP: ifstream <Tên biến file>;
	// BƯỚC 1: KHAI BÁO RA BIẾN ĐỀ ĐỌC FILE
	ifstream FileIn; // khai báo ra 1 biền FileIn để đọcdữ liệu từ file 
	// BUỚC 2: MỞ FILE CẦN ĐỌC DỮ LIỆU
	// open (<Tên đường dẫn đến file cần mở để đọc>, <chế độ làm việc với file>)
	FileIn.open("D://ABCD/CCCC.txt", ios_base::in);
	if (FileIn.fail() == true) // Kiểm tra xem có được file không 
	{
		cout << "File khong ton tai \n";
		return 0; //kết thúc chương trình 
	}
	//Hoặc kiểm tra bằng cách 
	//if (inFile.is_open())
	cout << "Mo file thanh cong \n";
	//BƯỚC 3 : XỬ LÍ FILE - ĐỌC DỮ LIỆU TỪ FILE RA CHƯƠNG TRÌNH 
	int x;
	int y;
	//cin >> x;
	FileIn >> x; // đọc dữ liệu từ file
	//cin >> y;
	FileIn >> y; // đọc dữ liệu từ file 
	//BƯỚC 4 : ĐÓNG FILE LẠI SAU KHI ĐÃ XỬ LÍ 
	FileIn.close(); // đóng file lại sau khi xử lí
	//cout << "Tong cua 2 so nguyen : " << x + y ;
	cout << endl;
    //=====================GHI FILE=======================
	ofstream FileOut;
	FileOut.open("D://ABCD/DDDD.txt", ios_base::out); 
	// Không cần kiểm tra như ifstream vì nếu không có file theo đường dẫn nó sẽ tạo ra cái mới 
	FileOut << x + y; // lấy x + y rồi ghi vào file CCCC.txt 
	FileOut.close(); // đóng file ghi lại 
	system("pause");
	return 0;
}








// ios::in  Mở một tệp tin để đọc
// ios::out Mở một tệp tin có sẵn để ghi
// ios : app Mở một tệp tin có sẵn để thêm dữ liệu vào cuối tệp.
// ios::ate  Mở tệp tin và đặt con trỏ tệp tin vào cuối tệp.
// ios::trunc  Nếu tệp tin đã có sẵn thì dữ liệu của nó sẽ bị mất.
// ios::nocreate  Mở một tệp tin, tệp tin này bắt buộc phải tồn tại
// ios::noreplace  Chỉ mở tếp tin khi tệp tin chưa tồn tại.
// ios::binary  Mở một tệp tin ở chế độ nhị phân.Khi mà file được mở ra
// ở chế độ này thì dữ liệu sẽ được đọc hay ghi từ 1 định dạng nguyên thủy nhị phân.
// ios::text  Mở một tệp tin ở chế độ văn bản.



#include<iostream>
#include<fstream>
using namespace std;
bool KTSNT(int n);
int mainLT5()
{
	// ĐỌC DỮ LIỆU TỪ FILE 
	ifstream FileIn; //khai báo ra lớp để đọc dữ liệu từ file 
	FileIn.open("INPUT.txt");  // có thể bỏ ios_base::in 
	if (FileIn.is_open())
		cout << "Mo file thanh cong \n";
	else
		cout << "Mo file that bai \n";
	int x;
	FileIn >> x;
	ofstream FileOut;
	FileOut.open("KETQUA.TXT"); // Nếu không có file sẵn thì nó tự tạo cái mới 
	if (KTSNT(x) == true) // là số nguyên tố 
		FileOut << "True \n";  // Ghi dữ liệu vào file 
	else  // không là số nguyên tố 
		FileOut << "False \n"; // Ghi dữ liệu vào file 
	FileOut.close();
	FileIn.close(); // đóng file ĐỌC 

	system("pause");
	return 0;
}
bool KTSNT(int n)
{
	if (n < 2)
		return false;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false; // hay return 0; 
	}
	return true;
}


#include<iostream>
#include<fstream>
using namespace std;
#define MAX 30 
bool KTSNTMang(int n);

int mainLT6()
{
	//Đọc file 
	ifstream FileIn;
	FileIn.open("Mang.txt");
	if (FileIn.is_open())
		cout << "Mo file thanh cong \n";
	else
	{
		cout << "Mo file khong thanh cong\n";
		system("pause");
		return 0;
	}
	int n;
	FileIn >> n; // đọc số nguyên ở dòng đầu tiên từ file 
	int a[MAX];
	for (int i = 0; i < n; i++) 
	{
		FileIn >> a[i]; //đọc dữ liệu từ file 
	}
	ofstream FileOut;
	FileOut.open("KQ.TXT");
	for (int i = 0; i < n; i++)
	{
		if (KTSNTMang(a[i]) == true)
		{
			FileOut << a[i]<<"\t";
		}
	}

	FileOut.close();
	FileIn.close();
	system("pause");
	return 0;
}
bool KTSNTMang(int n)
{
	if (n < 2)
		return false;
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false; // hay return 0; 
	}
	return true;
}


#include<iostream>
#include<fstream>
using namespace std;
int mainLT7()
{
	ifstream FileIn; // Đọc file 
	FileIn.open("Mang1.txt"); //Mở file đọc 
	if (FileIn.is_open())
		cout << "Mo file thanh cong \n";
	else
	{
		cout << "Mo file khong thanh cong \n";
		system("pause");
		return 0;
	}
	int a[30], i=0;
	int dem = 0;
	
	//Đọc mảng số nguyên từ file bằng cách kiểm tra nếu con trỏ chỉ vị chưa đến cuối file thì tiếp tục đọc 
	while (FileIn.eof() == false) //eof là end of file (kết thúc file) ; == true là đã đến cuối file 
	//FileIn.eof() == false <=> !FileIn.eof 
	{
		FileIn >> a[i]; //Đọc từng số nguyên có trong file 
		i++;
		dem++;
	}
	for (int i = 0; i < dem; i++) //BƯỚC KIỂM TRA 
	{ 
		if (KTSNTMang(a[i]) == true)
		{
			cout << a[i]<<"\t";
		}
	}
	cout << endl;

	ofstream FileOut;
	FileOut.open("Kq.txt");
	for (int i = 0; i < dem; i++)
	{
		if (KTSNTMang(a[i])==true)
			FileOut << a[i]<<"\t";
	}

	FileOut.close();
	FileIn.close();//Đóng file đọc 

	system("pause");
	return 0;
}

//================STRUCT=============== 
//struct : bản chất là 1 kiểu dữ liệu do người lập trình định nghĩa
//STRUCT LÀ CƠ SỞ CỦA CLASS - LẬP TRÌNH HƯỚNG ĐỐI TƯỢNG
//Đặt vấn đề :
//-Kiểu số nguyên : chỉ lưu được số nguyên
//- Kiểu số thực : chi lưu được kiểu số thực
//- Kiểu kí tự : chỉ lưu được kí tự
//Muốn lưu thông tin sinh viên :
//-Tên sinh viên : chuỗi
//- Mã số sinh viên : chuỗi
//- Điểm : số thực


//=============KHAI BÁO CẤU TRÚC STRUCT===============
//struct <tên biến cấu trúc>
//{
//	<kiểu dữ liệu thành phần 1> <tên thành phần 1>;
//	<kiểu dữ liệu thành phần 2> <tên thành phần 2>;
//  ......
//};
//VD:
// KHAI BÁO CẤU TRÚC 1 SINH VIÊN
//struct SinhVien
//{
//	string HoTen;
//	string MSSV
//	float diem;
//}

//////////////////////////////////////////////////////////////////////////////////////////////
////1. Nhập thông tin 1 thằng sinh viên - Xuất ra màn hình thông tin của sinh viên
//#include<iostream>
//using namespace std;
//#include<string> // khai báo thư viện chuỗi bên C++ 
//
////Thông tin sinh viên gồm :
////+Họ tên
////+Mã số sinh viên :
////+Điểm
////1. Nhập thông tin 1 thằng sinh viên - Xuất ra màn hình thông tin của sinh viên
////==============KHAI BÁO CẤU TRÚC SINH VIÊN================
//
//struct sinhvien
//{
//	string hovaten;
//	string mssv;
//	double diem;
//} ;
////Định nghĩa lại struct (để chạy bên C thì bị lỗi)
//typedef struct sinhvien SinhVien;
////Định nghĩa sinhvien thành SinhVien 
//
////TRUY XUẤT ĐẾN 1 THÀNH PHẦN TRONG STRUCT 
////<tên biến cấu trúc đích>.<tên thành phần cần truy xuất>
////SinhVien x;
////x.HoTen;
////x.MSSV;
//// hàm nhập thông tin sinh viên
//void Nhap_Thong_Tin_1_Thang_Sinh_Vien(SinhVien& sv)//sv là biến ; SinhVien &sv giống int &sv ; bởi vi có lưu và thay đổi nên cần có tham chiéu & 
////Biến sv bị thay đổi nên phải dùng tham chiếu 
//{
//	//Trước khi nhập chuỗi nhớ xóa bộ nhớ đệm 
//	//Nhập họ và tên cho sinh viên 
//	fflush(stdin); // xóa bộ nhớ đệm 
//	cout << "Nhap ho va ten sinh vien : ";
//	getline(cin, sv.hovaten);//Hàm nhập chuỗi bên string - lấy cả khoảng trắng 
//	//Khi dùng hàm getline nhớ xóa bộ nhớ đệm, vì khi có enter nó sẽ kết thúc việc nhập chuỗi luôn 
//	//Thường thì khi dùng sau cin >> a; thì phải xóa bộ nhớ đệm fflush(stdin); 
//	//hoặc dùng cin.ignore() để bỏ qua kí tự ENTER 
//	
//	//Sau khi dùng cin >> a; thì ENTER (kết thúc việc nhập khi dùng cin) 
//	//ENTER sẽ lưu vào bộ nhớ đệm 
//	//Mà khi dùng getline(cin,s) thì nó sẽ truy cập vào bộ nhớ đệm trước rồi mới cho nhập
//	//Nếu bộ nhớ đệm không có gì thì nó cho nhập. Còn khi bộ nhớ đệm còn ENTER thì nó ngừng cho nhập 
//
//	
//	//Nhập mssv 
//	fflush(stdin); // xóa bộ nhớ đệm 
//	cout << "Nhap ma so sinh vien : ";
//	getline(cin, sv.mssv); 
//	//Nhập điểm cho sinh viên (kiểu số thực nên không cần xóa bộ nhớ đệm)
//	cout << "Nhap diem cho sinh vien : ";
//	cin >> sv.diem; // điểm là số thực không cần dùng getline
//}
//// hàm xuất thông tin sinh viên 
//void Xuat_Thong_Tin_1_Thang_Sinh_Vien(SinhVien  sv)//sv là biến ; SinhVien &sv giống int &sv ; hàm xuất nên không cần tham chiếu & 
//// đổi tên struct sinhvien thành SinhVien - để khi chạy trên trình biên dịch thuần C nó không bị lỗi 
//{
//	
//	//Xuất họ và tên cho sinh viên 
//	cout << "Ho va ten sinh vien : " << sv.hovaten << endl;
//	//Xuất mã số sinh viên 
//	cout << "Ma so sinh vien : " << sv.mssv << endl;
//	//Xuất điểm sinh viên 
//	cout << "Diem sinh vien : " << sv.diem << endl;
//	
//}
//
////================GÁN DỮ LIỆU KIỂU STRUCT===================
////Cách 1. Gán struct này cho struct kia thông qua toán tử gán
//
//int mainLT8()
//{
//	//SinhVien x; // Khai báo ra 1 thằng sinh viên x 
//	//cout << "NHAP THONG TIN SINH VIEN \n";
//	//Nhap_Thong_Tin_1_Thang_Sinh_Vien(x);
//	//cout << "XUAT THONG TIN SINH VIEN \n";
//	//Xuat_Thong_Tin_1_Thang_Sinh_Vien(x);
//
//	SinhVien x; // khai báo ra 1 thằng sinh viên x
//	SinhVien y; // khai báo ra 1 thằng sinh vien y
//	cout << "\n\n\t\t NHAP THONG TIN SINH VIEN x\n";
//	Nhap_Thong_Tin_1_Thang_Sinh_Vien(x);
//	//Cách 1 
//	//y = x; // gán struct sinh vien x cho struct sinh vien y 
//	
//	/*NÉU TRONG STRUCT SINH VIEN ĐANG CHÚỨA 1 BIẾN CON TRỎ THÌ
//	KHÔNG DÙNG ĐƯỢC TOÁN TỬ GÁN ĐỂ GÁN GIÁ TỪ STRUCT SANG
//	STRUCT KIA*/
//
//	//Cách 2 : gán từng thành phần tương ứng của struct này cho struct kia 
//	y.hovaten = x.hovaten;
//	y.mssv = x.mssv;
//	y.diem = x.diem;
//
//	cout << "\n\n\t\t THONG TIN SINH VIEN x \n";
//	Xuat_Thong_Tin_1_Thang_Sinh_Vien(x);
//	cout << "\n\n\t\t THONG TIN SINH VIEN y \n";
//	Xuat_Thong_Tin_1_Thang_Sinh_Vien(y);
//
//
//	system("pause");
//	return 0; 
//}
////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//Nhập vào tọa độ 3 đỉnh của 1 tam giác. Tính độ dài của từng cạnh 
//Khai báo cấu trúc struct tọa độ 
//Struct 1 : Tạo tạo độ x,y 
struct toado
{
	double x; //tọa độ điểm x 
	double y; //tọa độ điểm y 
};

//Định nghĩa lại struct để chạy bên C không bị lỗi 
typedef struct toado TOADO; 

void Nhap_Toa_Do(struct toado& td) //td là tên biến mình đặt 
//Nếu không định nghĩa nghĩa thì mình nhập (struct toado td)
{
	cout << "Nhap vao diem x : ";
	cin >> td.x; //Nhập tọa điểm x 
	cout << "Nhap vao diem y : ";
	cin >> td.y; //Nhập tọa điểm x 
}
void Xuat_Toa_Do(TOADO d) //d là tên biến mình đặt 
// Hoặc (struct toado d) 
{
	cout << "(" << d.x <<","<<d.y<< ")"; //(x,y) 
}

//Hàm tính độ dài cạnh 
double Do_Dai_Canh(struct toado A, struct toado B)//Hoặc (struct toado A, struct toado B)  
{
	return sqrt(pow((B.x - A.x),2) + pow((B.y - A.y),2));
}

//Struct 2 : Tọa tam giác 
struct tamgiac
{
	struct toado A;
	struct toado B;
	struct toado C;
};
//Định nghĩa lại tam giác 
typedef struct tamgiac TAMGIAC;

//Hàm nhập tam giác 
void Nhap_Tam_Giac(struct tamgiac& tg)
{
	cout << "\t \t NHAP TOA DO DIEM A  \n";
	Nhap_Toa_Do(tg.A);
	cout << "\t \t NHAP TOA DO DIEM B  \n";
	Nhap_Toa_Do(tg.B);
	cout << "\t \t NHAP TOA DO DIEM C  \n";
	Nhap_Toa_Do(tg.C);
}

//Hàm xuất tam giác 
void Xuat_Tam_Giac(struct tamgiac tg)
{
	cout << "Toa do diem A : ";
	Xuat_Toa_Do(tg.A);
	cout << endl;
	cout << "Toa do diem B : ";
	Xuat_Toa_Do(tg.B);
	cout << endl;
	cout << "Toa do diem C : ";
	Xuat_Toa_Do(tg.C);
	cout << endl;
}


int main()
{
	//TOADO A; //Khai báo tọa độ cho biến A 
	////Có thể khai báo bằng struct toado A 
	//TOADO B;
	//TOADO C;
	//struct toado A;
	//struct toado B;
	//struct toado C;

	//struct tamgiac chứa struct toado hay struct 2 chứa struct 1 


	struct tamgiac tg;
	Nhap_Tam_Giac(tg);
	Xuat_Tam_Giac(tg);
	
	cout << "Do dai canh AB : " << Do_Dai_Canh(tg.A, tg.B) << endl;
	cout << "Do dai canh AC : " << Do_Dai_Canh(tg.A, tg.C) << endl;
	cout << "Do dai canh BC : " << Do_Dai_Canh(tg.B, tg.C) << endl;

	system("pause");
	return 0; 
}
//GIẢI THÍCH : 
//Bước 1: Ta tạo struct tamgiac để tạo ra 3 điểm A,B,C của tam giác 
//Bước 2: Ta tạo struct toado để tạo ra tọa độ điểm x,y : struct toado A_B_C nằm trong struct tamgiac 
//Bước 3: Hàm main ta gán tên cho struct tamgiac tg là tg để dể gọi 
//Bước 4: Ta tạo hàm Nhap_Tam_Giac(tg) (lấy 1 trong 3 điêm A,B,C) ==> struct tamgiac A_B_C 
//==>Tạo hàm Nhap_Toa_Do(struct toado& td) (lấy 1 trong 2 toa do x,y) ==> struct taodo x_y 
//Bước 5: Ta tạo hàm Xuat_Tam_Giac(tg) (lấy 1 trong 3 điêm A,B,C) ==> struct tamgiac A_B_C 
//==>Tao hàm Xuat_Toa_Do(struct toado td) (lấy 1 trong 2 toa do x,y) ==> struct taodo x_y 






////////////////////////////////////////////////////////////////////////////////////////////
  

//Nhập dữ kiệu với cin 
#include <iostream>
#include <string> //Khai báo thư viện khi dùng chuỗi 
using namespace std;
void InputString()
{
	string s = ""; //Khai báo chuỗi s 
	//cout << "Dung cin de nhap chuoi: khong the nhap chuoi co khoang trang!! Xem vi du duoi day" << endl;
	//cout << "Nhap vao mot chuoi co nhieu tu cach nhau khoang trang: ";
	//cin >> s;
	//fflush(stdin);  //Thu xoa bo dong lenh nay va chay chuong trinh xem co chuyen gi xay ra!!
	//cout << "Chuoi ban vua nhap la:";
	//cout << s << endl;

	/*cout << "\nDung getline de nhap chuoi: cho phep nhap chuoi co khoang trang!! Xem vi du duoi day" << endl;
	cout << "Nhap vao mot chuoi co nhieu tu cach nhau khoang trang: ";
	getline(cin, s);
	cout << "Chuoi ban vua nhap la:";
	cout << s << endl;*/


	string t;
	cout << "\nDung getline de nhap chuoi cung cho phep mo ta ky tu ngan cach!! Xem vi du duoi day" << endl;
	cout << "Nhap vao hai (2) chuoi co nhieu tu cach nhau khoang trang, giua 2 chuoi dung dau phay: ";
	//Vi du nhap vao:  Tran Hung Dung, Le Huy Cuong, sau do an Enter (co dau phay sau Cuong)
	getline(cin, s, ',');
	getline(cin, t, ',');
	cout << "Chuoi 1= " << s << endl;
	cout << "Chuoi 2= " << t << endl;


	cout << "\nDung ky tu %  de ngan cach 2 chuoi!! Xem vi du duoi day" << endl;
	cout << "Nhap vao hai (2) chuoi co nhieu tu cach nhau khoang trang, giua 2 chuoi dung dau %: ";
	//Vi du nhap vao:  Tran Hung Dung%Le Huy Cuong% sau do an Enter (co dau phay sau Cuong)
	getline(cin, s, '%');
	getline(cin, t, '%');
	cout << "Chuoi 1= " << s << endl;
	cout << "Chuoi 2= " << t << endl;
	return;

}
void InputNumber()
{
	long l = 0;
	double d = 0;
	/*cout << "Dung cin de nhap so: Nhap xong an phim enter\n";
	cout << "Nhap 1 so nguyen: ";
	cin >> l;
	cout << "So ban vua nhap la: " << l << endl;*/


	cout << "\nDung cin de nhap so trên cung 1 dong: nhap xong 2 so roi an phim enter, 2 so cach nhau it nhat 1 khoang trang\n";
	cout << "Nhap 1 so nguyen, sau do la so thuc, 2 so cach nhau it nhat 1 khoang trang: ";
	//Vi du se nhap vao:  45  23.12
	cin >> l >> d;
	cout << "So nguyen ban vua nhap la: " << l << endl;;
	cout << "So thuc ban vua nhap la: " << d << endl;


	cout << "\nDung cin de nhap so tren cung 1 dong: nhap xong 2 so roi an phim enter, 2 so cach nhau bang dau phay ,\n";
	cout << "Nhap 1 so nguyen, sau do la so thuc, 2 so cach nhau bang dau phay: ";
	//Vi du se nhap vao:  45,23.12
	cin >> l; //doc xong so dau tien
	cin.ignore(1); //Bỏ 1 ký tự 
	cin >> d;//doc so ke tiep
	cout << "So nguyen ban vua nhap la: " << l << endl;
	cout << "So thuc ban vua nhap la: " << d << endl;
}
void InputMix()
{
	string s;
	long l;
	double d;
	//Gia su ta muon nhap chuoi s sau do an Enter, tiep tuc nhap so l sau do an Enter, cuoi cung nhap l
	cout << "Nhap chuoi: "; getline(cin, s);
	cout << "Nhap so nguyen: "; cin >> l;
	cout << "Nhap so thuc: "; cin >> d;
	cout << "s= " << s << " l= " << l << " d= " << d << endl;
	fflush(stdin); // Xóa bộ nhớ (enter) 
	//Gia su ta muon nhap chuoi s, so nguyen l va so thuc d tren  cung 1 dong va su dung dau phay de ngan cach
	//hinh dung se nhap:   Le Anh Huy,45,1.56
	//==> getline voi ky tu ',' de nhap chuoi
	//ke tiep cin>>l va cuoi cung cin>>d
	cout << "Nhap 1 chuoi, 1 so nguyen va 1 so thuc tren cung 1 dong cach nhau bang dau phay ,: ";
	getline(cin, s, ',');  //',' gặp dấu "," là dừng lại 
	cin >> l;
	cin.ignore(1); //Bỏ 1 ký tự (bỏ dấu ",")
	cin >> d;
	cout << "s= " << s << " l= " << l << " d= " << d << endl;

	return;
}
int mainLT9()
{   /*InputNumber();*/
	/*InputString();*/
	InputMix();
	system("pause");
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int mainLT10()
{
	long l;
	string s;
	double d;
	cout << "Nhap 1 so nguyen d: ";
	cin >> l;
	cout << "Nhap 1 so thuc l: ";
	cin >> d;
	cout << "Nhap 1 chuoi s (cho phep co khoang trang): ";
	//Loai bo ky tu Enter!! neu khong thi se nhay qua luon ma khong nhap s
	cin.ignore(1);
	getline(cin, s);
	cout << "Ket qua vua nhap nhu sau:" << endl;
	cout << "So nguyen d ban nhap la: " << l << endl;
	cout << "So thuc l ban nhap la: " << d << endl;
	cout << "Chuoi s ban nhap la: " << s << endl; 

	string t;
	cout << "Nhap lai  chuoi s (cho phep co khoang trang): ";
	getline(cin, s);
	//Khong can loai bo ky tu Enter vi mac dinh ket thuc chuoi la Enter
	cout << "Nhap chuoi t (cho phep co khoang trang): ";
	getline(cin, t);
	cout << "Chuoi s ban nhap la: " << s << endl;
	cout << "Chuoi t ban nhap la: " << t << endl;

	system("pause");
	return 0;
}

#include <iostream>
#include <string>
using namespace std;
int mainLT11()
{
	string s, t;
	cout << "Nhap vao chuoi s: ";
	getline(cin, s);
	//Khong can ignore de loai bo ky tu Enter
	cout << "Nhap vao chuoi t: ";
	getline(cin, t);

	cout << "Chuoi s ban nhap la: " << s << endl;
	cout << "Chuoi t ban nhap la: " << t << endl;

	cout << "Nhap vao chuoi s: ";
	cin >> s;
	cout << "Nhap vao chuoi t: ";
	cin >> t;
	cout << "Chuoi s ban nhap la: " << s << endl;
	cout << "Chuoi t ban nhap la: " << t << endl;

	system("pause");
	return 0;
}

/*
Nhan xet:
Khi nhap tu ban phim: neu nhap so thi se con lai ky tu Enter
Neu lenh nhap ke tiep la nhap 1 chuoi --> phai ignore nham loai bo ky tu nay
Neu nhap chuoi bang getline thi ky tu Enter tu dong huy bo
*/


#include <iostream>
#include <string>
//Nhap nhieu du lieu tren cung 1 dong
using namespace std;
int mainLT12()
{

	string s1, t1;
	
	//Vi du se nhap vao:  Le Hoang , Tran Vu [Enter]
	cout<<"Nhap vao 2 chuoi s1 va t1 cho phep co khoang trang va 2 chuoi cach nhau dau phay, ket thuc bang cach nhan Enter: ";
	getline(cin,s1,',');
	getline(cin,t1);

	string s2,t2;
	cout<<"Nhap vao 2 chuoi s2 va t2 cho phep co khoang trang va 2 chuoi cach nhau dau phay, ket thuc bang cach nhan Enter: ";
	getline(cin,s2,',');
	//Khong can ignore de loai bo ky tu Enter
	getline(cin,t2);

	cout<<"Chuoi s1 ban nhap la: "<<s1<<endl;
	cout<<"Chuoi t1 ban nhap la: "<<t1<<endl;
	cout<<"Chuoi s2 ban nhap la: "<<s2<<endl;
	cout<<"Chuoi t2 ban nhap la: "<<t2<<endl;
	
	long d1, d2;
	//Vi du se nhap vao:  156  789 [Enter]
	/*
	cout<<"Nhap vao 2 so d1 va d2, giua 2 so cach nhau khoang trang: ";
	cin>>d1;
	cin>>d2;

	cout<<"Nhap vao 2 chuoi s1 va t1 cho phep co khoang trang va 2 chuoi cach nhau dau phay, ket thuc bang cach nhan Enter: ";
	getline(cin,s1,',');
	getline(cin,t1);
	cout<<"So d1 ban nhap la: "<<d1<<endl;
	cout<<"So d2 ban nhap la: "<<d2<<endl;
	cout<<"Chuoi s1 ban nhap la: "<<s1<<endl;
	cout<<"Chuoi t1 ban nhap la: "<<t1<<endl;

	cout<<"Nhap vao 1 so nguyen sau do la 1 chuoi (cho phep co khoang trang), ket thuc bang cach nhan Enter: ";
	//Vi du se nNhap vao: 561 Le Thanh Hoang
	cin>>d1;
	getline(cin,s1);
	cout<<"So d1 ban nhap la: "<<d1<<endl;
	cout<<"Chuoi s1 ban nhap la: "<<s1<<endl;
	*/
	cout << "Thu phan tich nhap nhieu du lieu tren 1 dong" << endl;
	cout << "Vi du se nhap vao:  Tran, Hoang Long % 45.7  456  213  Lam Thanh Huy" << endl;
	getline(cin, s1, ',');
	getline(cin, t1, '%');
	double f;
	cin >> f;
	cin >> d1;
	cin >> d2;
	string u;
	getline(cin, u);
	cout << s1 << endl;
	cout << t1 << endl;
	cout << f << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	cout << u << endl;
	system("pause");
	return 0;
}


/*
Gia su tap tin co 2 dong va co noi dung sau

Tran Minh%Hoang Quan, 31.5 78  Le Van Minh Man
123 Tran Phu Quan 5, 2012  0903111222

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int mainLT13()
{
	ifstream ifn;
	ifn.open("d:\\NhapDuLieu.txt", ios::in);
	if (!ifn.is_open()) {
		cout << "Thua!!";
		system("pause");
		exit(0);
	}
	string s1, s2, s3, s4, s5;
	double d;
	long l1 = 0, l2 = 0;
	getline(ifn, s1, '%');
	getline(ifn, s2, ',');
	ifn >> d;
	ifn >> l1;
	getline(ifn, s3);
	getline(ifn, s4, ',');
	ifn >> l2;
	getline(ifn, s5);
	cout << "Cac thong tin doc tu tap tin la:" << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << d << endl;
	cout << l1 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << l2 << endl;
	cout << s5 << endl;
	ifn.close();
	system("pause");
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int mainLT14()
{
	ifstream inFile;
	string inFileName = "";
	cout << "Nhap vi tri va ten tap tin text can in ra man hinh: ";
	cin >> inFileName;
	inFile.open(inFileName); //Mở file đọc theo đường dẫn 
	//Nhâp ở đây là D://ABCD/Nutamxuan.txt còn màn hình là D:\ABCD\Nutamxuan.txt
	string line = "";
	if (inFile.is_open())
		//neu open duoc tap tin thi moi doc       {
	{
		while (!inFile.eof()) //Điều kiện chưa kết thúc file 
		{
			getline(inFile, line); //Đọc cả 1 dòng từ tập tin vào biến line
			cout << line << endl;      // in ra man hinh
		}
		inFile.close(); //Đóng filie đọc 
	}
	else cout << "Khong mo duoc file de doc du lieu" << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int mainLT15()
{
	//Tap tin text co nhieu dong
	//Dong 1 la ho ten SV
	//Dong 2 la nam sinh
	//Dong 3 la diem TB
	//Dong 4 la ho ten SV ke tiep!!
	//..............
	ifstream iFile;
	iFile.open("D:/ABCD/DSSV-vd1.txt", ios::in);

	string hoten;
	long namsinh;
	double diemTB;
	int kq;
	if (iFile.is_open())
	{
		while (!iFile.eof())
		{
			getline(iFile, hoten);
			if (hoten.length() == 0) break;
			iFile >> namsinh;
			iFile.ignore(1);
			iFile >> diemTB;
			iFile.ignore(1);
			cout << "Sinh vien: " << hoten << " sinh nam " << namsinh << " co diem TB = " << diemTB << endl;
		}
		iFile.close();
		cout << "Da doc het tap tin!" << endl;
	}
	else
		cout << "Khong mo duoc file de doc du lieu" << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int mainLT16()
{
	//Tap tin text co nhieu dong
	//Dong 1 ho ten SV,nam sinh, diem TB
	//Dong 2 ho ten SV,nam sinh, diem TB
	//Dong 3 ho ten SV,nam sinh, diem TB
	//Dong 4 .........
	//..............
	ifstream iFile;
	iFile.open("D:/ABCD/DSSV-vd2.txt", ios::in);

	string hoten;
	long namsinh;
	double diemTB;
	int kq;
	if (iFile.is_open())
	{
		while (!iFile.eof())
		{
			getline(iFile, hoten, ',');
			iFile >> namsinh;
			iFile.ignore(1);
			iFile >> diemTB;
			iFile.ignore(1);
			cout << "Sinh vien: " << hoten << " sinh nam " << namsinh << " co diem TB = " << diemTB << endl;
		}
		iFile.close();
		cout << "Da doc het tap tin!" << endl;
	}
	else
		cout << "Khong mo duoc file de doc du lieu" << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Nhap tung dong tu ban phim sau do ghi thanh tung dong tren tap tin
Ket thuc khi nhap vao 1 dong rong (chi an Enter)
*/
int mainLT17()
{
	//GHI 
	ofstream outFile;
	string fname = "";
	cout << "Nhap vi tri va ten tap tin ban muon luu: ";
	cin >> fname;
	cin.ignore(1); //Xóa ký tự enter 
	outFile.open(fname, ios::out);
	string line;
	if (outFile.is_open()) //Bước kiểm tra 
	{
		do
		{
			cout << "==>: ";
			getline(cin, line); //Lệnh nhập từ bàn phím 
			if (line == "") break;
			outFile << line << endl; //Lệnh GHI ra vào file 
		} while (true); //Nếu chuỗi nhập là rỗng thì thoát vòng lập 
		outFile.close(); //Đóng file GHI 
		cout << "Da ghi len tap tin!" << endl;
	}
	else
		cout << "Khong mo duoc file de ghi du lieu" << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Doc du lieu sinh vien tu ban phim, sau do ghi ra tap tin tren dia
Thong tín  sinh vien gom ho ten, nam sinh va diem trung binh
Trong vi du nay thi moi thong tin se nam tren 1 dong rieng biet
*/
int mainLT18()
{
	ofstream outFile;
	string fname = "";
	cout << "Nhap vi tri va ten tap tin tren dia: ";
	getline(cin, fname); //D:\ABCD\LAPTRINH\taptinsinhvien.txt
	outFile.open(fname, ios::out);

	string hoten;
	long namsinh;
	double diemTB;
	int kq;
	if (outFile.is_open())
	{
		do
		{
			cout << "Nhap ho ten sinh vien: ";
			getline(cin, hoten);

			cout << "Nhap nam sinh sinh vien " << hoten << ": ";
			cin >> namsinh;
			//cin.ignore(1)
			cout << "Nhap diem trung binh sinh vien " << hoten << ": ";
			cin >> diemTB;
			//cin.ignore(1)
			outFile << hoten << endl;
			outFile << namsinh << endl;
			outFile << diemTB << endl;
			cout << "Nhap tiep C/K (1/0):";
			int tiep;
			cin >> tiep;
			cin.ignore(1);
			if (tiep == 0) break;
		} while (true);
		outFile.close();
		cout << "Da ghi len tap tin!" << endl;
	}
	else
		cout << "Khong mo duoc file de ghi du lieu" << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Doc du lieu sinh vien tu ban phim, sau do ghi ra tap tin tren dia
Thong tín  sinh vien gom ho ten, nam sinh va diem trung binh
Trong vi du nay thi khi ghi ra thì cac thong tin se nam tren cung 1 dong cach nhau bang dau phay .
*/
int mainLT19()
{
	ofstream outFile;
	string fname = "";
	cout << "Nhap vi tri va ten tap tin tren dia: "; //D:\ABCD\LAPTRINH\taptinsinhvien.txt
	getline(cin, fname);
	outFile.open(fname, ios::out);

	string hoten;
	long namsinh;
	double diemTB;
	int kq;
	if (outFile.is_open())
	{
		do
		{
			cout << "Nhap ho ten sinh vien: ";
			getline(cin, hoten);
			cout << "Nhap nam sinh sinh vien " << hoten << ": ";
			//cin.ignore(1);
			cin >> namsinh;
			cout << "Nhap diem trung binh sinh vien " << hoten << ": ";
			cin >> diemTB;
			//cin.ignore(1);
			outFile << hoten << "," << namsinh << "," << diemTB << endl;
			cout << "Nhap tiep C/K (1/0):";
			int tiep;
			cin >> tiep;
			cin.ignore(1);
			if (tiep == 0) break;
		} while (true);
		outFile.close();
		cout << "Da ghi len tap tin!" << endl;
	}
	else
		cout << "Khong mo duoc file de ghi du lieu" << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*
Mo tap tin chua cac he so cua PTB1 ax+b=0
Moi dong chua cac he so a va b cach nhau it nhat 1 khoang trang
Ket qua giai PTB1 se ghi ra 1 file text
*/
string GiaiPTB1(double x, double y)
{
	if (x == 0 && y == 0) return "PT vo so nghiem";
	if (x == 0 && y != 0) return "PT vo nghiem";
	if (x != 0) return "Nghiem X= " + to_string((long double)(-y / x));
}
//--------------------------------------------------------------------------
int mainLT20()
{

	ifstream inFile;
	ofstream outFile;
	string inFileName = "";
	cout << "Nhap vi tri va ten tap tin chua cac PTB1: ";
	//D:\ABCD\LAPTRINH\PTB1.txt
	cin >> inFileName;
	inFile.open(inFileName);
	if (!inFile.is_open())
	{
		cout << "Khong tim thay tap tin nay. Chuong trinh ket thuc";
		system("pause");
		return 1;  //ma loi: khong mo duoc tap tin de doc
	}
	string outFileName = "";
	cout << "Nhap vi tri va ten tap tin ban muon luu ket qua: ";
	cin >> outFileName;
	outFile.open(outFileName, ios::out);
	if (!outFile.is_open())
	{
		cout << "Khong the ghi ra tap tin nay. Chuong trinh ket thuc";
		system("pause");
		return 2; //ma loi: khong the mo tap tin de ghi
	}
	while (!inFile.eof())
	{
		double a, b;
		inFile >> a;
		inFile.ignore(1);
		inFile >> b;
		string kq = GiaiPTB1(a, b);
		outFile << a << "x + " << b << " = 0 ==> " << kq << endl;
		cout << a << "x + " << b << " = 0 ==> " << kq << endl;
	}
	inFile.close();
	outFile.close();
	cout << "Da giai xong het cac PTB1 trong tap tin " << inFileName << " va ghi ket qua len tap tin " << outFileName << endl;
	system("pause");
	return 0;
}

/*
Bai tap:
Viet lai chuong trinh nay nhung noi dung tap tin chua cac he so de qui uoc la cac he so cach nhau dau phay
VD  0,0
	0,1
	1,3
	....
Bai tap:
Viet chuong trinh

*/


// getline(cin, strTen);
//(chép hết dữ liệu từ stdin vào biến strTen)
// cin.getline(strTen,5);
//(cho phép nhập 5-1 kí tự vào xâu strTen)


#include <iostream>
#include <string> //Khai bao thu vien nay khi muon dung bien string
using namespace std;
int mainLT30()
{
	string s1 = "Ky Thuat Lap Trinh";
	string s2 = "Hoc ky 2 nam hoc 2019-2020";
	//Phep toan + dung de ghep chuoi
	s1 = s1 + "\n" + s2;
	cout << "s1= " << s1 << endl;
	//Co the so sanh lon hon hay nho hon giua 2 chuoi
	string t1 = "abcdeF", t2 = "abcDef";
	cout << t1 << "<" << t2 << " = " << (t1 < t2) << endl; //SAI=0
	//Co the so sanh bang nhau == giua 2 chuoi
	string u1 = "123456", u2 = "123456";
	cout << u1 << "<" << u2 << " = " << (u1 == u2) << endl; //TRUE=1
	//Duyet va in ra tung ky tu trong chuoi, phuong thuc length() va chi so vi tri
	string v = "Hello Class";
	for (int i = 0; i < v.length(); i++) cout << "v[" << i << "] = " << v[i] << endl;
	system("pause");
	return 0;
}


#include <iostream>
#include <string> //Khai bao thu vien nay khi muon dung bien string
using namespace std;
int mainLT31()
{
	string s1 = "Ky Thuat Lap Trinh";
	string s2 = "Hoc ky 2 nam hoc 2019-2020";
	s1 = s1 + "\n" + s2;
	cout << s1 << endl;
	//Doi sang chu hoa: doi tung ky tu sang chu hoa
	cout << "Doi sang chu hoa" << endl;
	for (int i = 0; i < s1.length(); i++)
		s1[i] = toupper(s1[i]); // Đổi chữ thường thành hoa 
	cout << "===> " << s1 << endl;
	//Xoa 1 so ky tu trong 1 chuoi
	string s = "La con gai that tuyet";
	cout << s << endl;
	s.erase(0, 3); //Xóa 3 ký tự bắt đầu bằng ký tự đầu tiên (thứ 0) 
	//Có thể có 1 số đầu số thứ hai bỏ ==> xóa toàn bộ chuỗi 
	cout << "Xoa 1 so ky tu trong chuoi" << endl;
	cout << "===> " << s << endl;
	//Thay the 1 so ky tu trong chuoi bang 1 chuoi khac
	s = "La con gai that tuyet";
	s1 = "kinh lam";
	cout << s << endl;
	s.replace(11, 10, s1); //Thay thế s1 vào chuỗi bắt đầu từ ký tự thứ 11 (tính ký tự 0) số ký tự thay thế là 10 
	cout << "Thay the 1 so ky tu bang chuoi khac" << endl;
	cout << "===> " << s << endl;
	//Chen 1 chuoi vao vi tri trong 1 chuoi
	s = "La con gai that tuyet";
	cout << s << endl;
	s.insert(15, " khong the nao");
	cout << "Chen 1 chuoi vao mot vi tri trong chuoi" << endl;
	cout << "===> " << s << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include <string> //Khai bao thu vien nay khi muon dung bien string
using namespace std;
//Tim va thay the chuoi
int mainLT32()
{
	string s, t;
	cout << "Nhap vao 1 chuoi van ban bat ky: ";
	getline(cin, s);
	cout << "Ban muon tim chuoi nao trong chuoi vua nhap: ";
	getline(cin, t);
	long vitri = s.find(t, 0);
	//Hàm find trả về số nguyên
	//Nếu TÌM THẤY trả về số >= 0
	//Nếu KHÔNG TÌM THẤY trả về số < 0
	if (vitri < 0) cout << "Khong tim thay " << t << " trong " << s << endl;
	else
	{
		cout << "Tim thay " << t << " trong " << s << " tai vi tri " << vitri + 1 << endl;
		cout << "Ban muon thay the chuoi " << t << " bang chuoi nao: ";
		string u;
		getline(cin, u);
		s.replace(vitri, t.length(), u); 
		//Hàm thay thế : Nơi thay thế bắt đầu từ vị trí _ Chiều dài cần thay thế _ Chuỗi thay thế 
		cout << "Da thay the xong!!" << endl;
		cout << s << endl;
	}
	system("pause");
	return 0;
}

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
const long AX = 4000;
string HOLOT[AX], TEN[AX];

void TimSinhVien(string khuondang, long soluong)
{
	for (long i = 1; i <= soluong; i++)
	{
		long vitri = TEN[i].find(khuondang);  //tim vi tri xuat hien khuon dang trong chuoi TEN[i]
		if (vitri == 0) //neu tim duoc o ngay vi tri dau tien
			cout << HOLOT[i] << " " << TEN[i] << endl;
	}
	return;
}
void Doc_File(long& dem)
{
	ifstream Input;
	string fname = "D:\\SinhVien.txt", temp = "";
	Input.open(fname, ios::in);//Mở file đọc 
	if (!Input.is_open())
	{
		cout << "Loi khi mo tap tin\n";
		system("pause");
		exit(0); //Lệnh kết thúc chương trình 
	}
	cout << "Dang doc du lieu" << endl;
	while (!Input.eof()) //Khi mà chưa hết tập tin 
	{
		dem++; //Đếm số sinh viên 
		getline(Input, temp, ',');       //bo qua ma so sv
		getline(Input, HOLOT[dem], ','); //lay ho va ten lot
		getline(Input, TEN[dem], ',');   //lay ten
		getline(Input, temp, '\n');      //bo het phan con lai cho den het dong
	}
	Input.close();
	cout << "Da doc xong du lieu" << endl;
}

int mainLT33()
{
	long soluongSV = 0;
	Doc_File(soluongSV);
	string find = "";
	cout << "Nhap khuon dang ten: ";
	cin >> find;
	TimSinhVien(find, soluongSV);
	system("pause");
	return 0;
}
////////////////ĐÃ IN //////////////////////////////////////
////////////////CHUỖI//////////////////
//Trong ngôn ngữ lập trình C/C++ không có khái niệm kiểu dữ liệu chuỗi 
//Bên C
//char : lưu 1 ký tự 
//chuỗi : là tập hợp các kí tự - char
//Bên C++
//Lớp string (thư viện) : hỗ trợ thao tác trên chuỗi 

//Ký tự : là các chữ cái riêng lẻ nhau được đặt trong dấu nháy đơn ' '
//VD : 'L', 's'
//Chuỗi : là tập hợp 1 hoặc nhiều kí tự được đặt trong dấu nháy kép " "
//VD : "l", "lap trinh" (khoảng trắng cũng là 1 kí tự )


//////CHUỖI BÊN NGÔN NGỮ C /////////////
//Chuỗi là tập hợp 1 hoặc nhiều kí lại với nhau 
// bản chất : là mảng 1 chiều các kí tự - char
//- Mảng số nguyên : int a[100]
//Khai báo : 
//char HoTen[30]; // khai báo mảng kí tự chứa 29 kí tự - chừa ra ô nhớ cuối cùng 
//để chứa kí tự '\0' - kí tự kết thúc chuỗi 

//Độ dài chuỗi ko chứa kí tự \0
//Kích thước thì chứa kí tự \0 

//Hàm gets() BÊN C nó làm việc : lấy dữ liệu từ ộ nhớ đệm trước, nếu trong bộ nhớ đệm 
//không có thông tin nó sẽ cho chúng ta nhập từ bàn phím 

//LƯU Ý : Trước khi nhập chuỗi nhớ xóa bộ nhớ đệm 
//Cách xóa bộ nhớ đệm 
//Bên C : fflush(stdin);
//Bên C++ : cin.ignore(); hay cin.ignore(1);

//Tất cả các kí tự trên bàn phím đêu được lưu dưới dạng mã ASCII
//Mã ascii là mã hệ thập phân - hệ 10. 
//Mã ascii của kí tự in thường luôn lớn hơn mã ascii của kí tự in hoa
//A : 65 => Z : 90
//a : 97 ==> z : 122 
//Khi làm việc trên kí tự - là nó đang thao tác trên mã ascii 

//BT: Nhập vào 1 chuỗi số. Chuyển chuỗi số đó thành 1 số nguyên 
//VD: S = "123" ==> 123
//+ 1 kí tự số mà muốn chuyển sang 1 số nguyên 
//==> kí tự số - 48 
//+ 1 số nguyên mà muốn chuyển sang kí tự số 
//==> chữ số nguyên + 48 

//getch() ==> _getch() mới chạy được 

//-Chuỗi C++ : được hỗ trợ bởi class string 
//#include<string> //khai báo thư viện hộ trợ các hàm xử lí 


#include<iostream>
#include<string>
using namespace std;
//Nhập thông tin sinh viên gồm : họ tên, tuổi. Xuất kết quả 
int mainLT34()
{
	//string s; // khai báo chuỗi string s 
	//cout << "Nhap chuoi : ";
	////cin >> s; // Cin nhập chuỗi mà không lấy kí tự khoảng trắng 
	//getline(cin, s); //hàm nhập chuỗi s - lấy luôn kí tự khoảng trắng 

	//cout << "Chuoi nhap duoc : " << s;
	//string hoten;//khai báo chuỗi chứa họ tên
	//int tuoi; 
	//cout << "Nhap tuoi cho sinh vien : ";
	//cin >> tuoi;

	//Cách xóa bộ nhớ đệm 
	//Bên C: 
	//fflush(stdin); //dùng được Bên C++ luôn 
	//Bên C++
	//cin.ignore();

	//cin.ignore();//lệnh xóa bộ nhớ đệm 
	//cout << "Nhap ho va ten sinh vien : ";
	//getline(cin, hoten);
	//cout << "Ho va ten sinh vien : " << hoten;
	//cout << endl;
	//cout << "Tuoi cua sinh vien : " << tuoi; 

	string s = "lap trinh";
	//HÀM TÍNH ĐỘ DÀI 
	cout << "Do dai cua chuoi la : " << s.length();
	cout << endl; 

	//HÀM XÓA 
	s.erase(s.begin() + 3); // xóa kí tự thứ 3 trong chuỗi s 
	cout << "Chuoi sau khi xoa : " << s;
	cout << endl;
	cout << "Do dai cua chuoi sau khi xoa la : " << s.length();
	cout << endl;

	//HÀM THÊM 1 KÍ TỰ CUỐI CHUỖI 
	s.push_back('C'); //thêm 1 kí tự - vào cuối chuỗi 
	cout << "Chuoi sau khi them 1 ki tu vao cuoi chuoi : " << s;
	cout << endl;

	//HÀM THÊM 
	s.insert(s.begin() + 3, '+'); // thêm vào chuỗi s tứ tự 'T' ở vị trí thứ 3 
	cout << "Chuoi sau khi them : " << s; 
	cout << endl;
	cout << "Do dai cua chuoi sau khi them la : " << s.length();
	cout << endl;
	//Khi dùng hàm thêm hoặc xóa thì độ dài của chuỗi sẽ tự cập nhật 
	
	system("pause");
	return 0; 
}

//string là lớp 
//char là kiểu dữ liệu 
 
//KHAI BÁO C-string
//char tên biến [số lượng kí tự] ;
//số lượng kí tự thực - 1 (vì có 1 kí tự kết thúc chuỗi '\0')
//KHAI BÁO String
//string tên biến =" "; 
//Cho chuỗi khai báo ban đầu = " " để ko bị lỗi khi đếm kí tự khi chưa nhập chuỗi 

//Nhập chuỗi bằng cách : 
//Cách 1 : C-string 
//       cin.get(tên biến chuỗi, số kí tự tối đa lưu trữ)   
//VD : cin.get(hoten,50); // nhập vào biến hoten (49 kí tự và 1 kí tự '\0')
//       cin.ignore() hay cin.ignore(1) // lệnh xóa bộ nhớ đệm, qua qua enter 
//Cách 2 : C-string 
//       cin.getline(tên biến chuỗi, số kí tự tối đa lưu trữ) 
//VD : cin.getline(hoten,50,'\n') //nhập vaò biến hoten tối đa 49 kí tự kể cả khoảng trắng, gặp kí tự '\n' 
//sẽ bỏ qua 
//Cách 3 : String 
//       getline(cin,s[,delimiter])
//       s : tên chuỗi 
//       delimiter : kí tự kết thúc nhập, mặc định là newline 

//Hàm cin.get() và cin.getline sẽ dừng nhận kí tự tự khi gặp kí tự newline hay enter 
//kí tự newline, mình lập trình khi gặp nó thì sẽ bỏ qua như ví dụ trên 

//Hàm strlen(tên biến chuỗi) trả về độ dài của biến chuỗi (không tính kí tự '\0') - trả về số nguyên 

//CÁC THAO TÁC CƠ BẢN TRONG C-STRING 
//int isalnum(int ch) : trả về số khác 0 nếu ch là ký tự chữ hoặc số.
//int isalpha(int ch) : trả về số khác 0 nếu ch là chữ.
//int isdigit(int ch) : trả về số khác 0 nếu ch là số.
//int islower(int ch) : trả về số khác 0 nếu ch là ký tự thường.
//int ispunct(int ch) : trả về số khác 0 nếu ch là ký tư dấu câu.
//int isspace(int ch) : trả về số khác 0 nếu ch là ký tự khoảng
//trắng(spaces, tabs, newlines).
//int isupper(int ch) : trả về số khác 0 nếu ch là ký tự hoa.

//CÁC HÀM CƠ BẢN TRONG C-STRING 
// 
//•   Hàm strcat(s1,s2)
// Hàm nối chuỗi s2 vào cuối chuỗi s1. Trả về chuỗi s1 sau khi nối.
// Lưu ý: phải đảm bảo chuỗi s1 đủ để chứa chuỗi s2 sau khi nối.
//•   Hàm strncat(s1,s2,n)
// Hàm nối n ký tự của chuỗi s2 vào cuối chuỗi s1. Trả về chuỗi s1
// sau khi nối.
// Lưu ý: phải đảm bảo chuỗi s1 đủ để chứa chuỗi s2 sau khi nối.
//•   Hàm strchr(s,'c')
// Công dụng: định vị lần xuất hiện đầu tiên của ký tự c trong chuỗi s.
// Nếu c được tìm thấy trong chuỗi s thì con trỏ trỏ đến c trong s sẽ được
// trả về.Ngược lại con trỏ NULL được trả về.
//•   Hàm strcmp(s1,s2)
// Công dụng: so sánh chuỗi 1 với chuỗi 2 (so sánh theo ASCII).
// Nếu s1 == s2 thì trả về 0
// Nếu s1 > s2 thì trả về > 0
// Nếu s1 < s2 thì trả về < 0
//•   Hàm strncmp(s1,s2,n)
// Công dụng: tương tự như strcmp() nhưng so sánh đến n ký tự.
//•   Hàm strcpy(s1,s2)
// Công dụng: sao chép chuỗi s2 vào mảng ký tự s1. Trả về giá trị s1
// Lưu ý: mảng s1 phải đủ kích thước chứa s2
//•   Hàm strncpy(s1,s2,n)
// Công dụng: Tương tự strcpy() nhưng sao chép tối đa n ký tự.
// Lưu ý: mảng s1 phải đủ kích thước chứa s2
//•   Hàm strlen(s)
// Hàm trả về độ dài của chuỗi - trả về số nguyên - không tính kí tự '\0' 
//•   Hàm strtok(s1,s2)
// Công dụng: ngắt s1 thành các token (từ tố) bởi ký tự của s2.
//•   Hàm atof(s)
// Công dụng: chuyển chuỗi s thành giá trị double. 
// Lưu ý: nếu không thể chuyển thì kết quả là 0 
//•   Hàm atoi(s)
// Công dụng: chuyển chuỗi s thành giá trị int. 
// Lưu ý: nếu không thể chuyển thì kết quả là 0
//•   Hàm atol(s)
// Công dụng: chuyển chuỗi s thành giá trị long int. 
// Lưu ý: nếu không thể chuyển thì kết quả là 0


//MỘT SỐ THAO TÁC Ở STRING 
//•   Truy xuất chỉ số từng phần tử trong chuỗi string : 
// dùng cặp dấu [] (bắt đầu từ 0)
//•   s.length() : là hàm thuộc tính trả về 1 số nguyên là số ký tự
//trong chuỗi s
//•   toupper(char kt) : chuyển ký tự kt thành in hoa.
//Trả về 1 ký tự sau khi in hoa.Không thể tự gọi đơn thuần mà phải gán
//kết quả cho 1 biến cùng kiểu.
//•   tolower(char kt) : chuyển ký tự kt thành in thường.
//Trả về 1 ký tự sau khi in thường.Không thể tự gọi đơn thuần mà
//phải gán kết quả cho 1 biến cùng kiểu.
//•   s.substr(begin_position[, size_t_n]) : lấy chuỗi
//con bắt đầu từ vị trí begin_position và số ký tự lấy là
//size_t_n.Trả về 1 chuỗi con(dạng string).
//    VD: 
//string s = ”Dai hoc Mo TPHCM";
//string str = s.substr(4, 3);
//cout << str << endl;
//==> Kết quả : hoc 
//•   s.find(search_string, begin_position_search) : tìm 1 chuỗi
//con search_string xem có ở trong s hay không(kể từ vị trí bắt đầu là
//begin_position_search về cuối chuỗi).Nếu không tìm thấy sẽ trả về - 1,
//nếu có trả về vị trí đầu tiên xuất hiện.
//    VD :
//string s = ”Dai hoc Mo TPHCM";
//string search_s = ”hoc";
//int kq = s.find(search_s, 0);
//cout << kq << endl;
//==> Kết quả : 4
//•   s.erase(begin_position[, size_t_n]) : xóa đi size_t_n
//ký tự kể từ vị trí bắt đầu xóa là begin_position.Nếu không ấn
//định size_t_n thì sẽ xóa kể từ vị trí bắt đầu về cuối chuỗi.Trả về
//chuỗi sau khi xóa.
//    VD: 
//string s = ”Dai hoc Mo TPHCM";
//s.erase(0, 4);
//cout << s << endl;
//==>Kết quả : hoc Mo TPHCM 
//•   s.replace(begin_position, size_t_n, replace_string) :
//thay thế chuỗi thay thế replace_string với số ký tự cần thay thế là
//size_t_n kể từ vị trí bắt đầu begin_position.Kết quả trả về 1 chuỗi sau
//khi thay thế.
//    VD:
//string s = ”Dai hoc Mo TPHCM";
//string s1 = ”Hoc";
//s.replace(4, 3, s1);
//cout << s << endl;
//•   s.insert(begin_position, insert_string) : Chèn
//chuỗi insert_string vào chuỗi s kể từ vị trí bắt đầu
//begin_position.Kết quả trả về chuỗi sau khi chèn.
//    VD: 
//string s = ”Dai hoc Mo TPHCM";
//s.insert(16, ” – Khoa CNTT”);
//cout << s << endl;
//==> Kết quả : Dai hoc Mo TPHCM – Khoa CNTT
//•   s.assign(count, assign_char) : Gán ký tự assign_char
//vào chuỗi s với count số lần.Kết quả trả về chuỗi sau khi gán.
//    VD:
//string s = ”Khoa CNTT";
//s.assign(5, '-');
//cout << s << endl;
//==> Kết quả : -----
//•   stringstream : toán tử có thể phân tách các chuỗi bằng dấu cách 
//nhưng không được bằng dấu phẩy
//Khi dùng stringstream thì nhớ khai báo thư viện #include<sstream> 


//CÁC HÀM CƠ BẢN TRONG STRING 
// s.size()
// số kí tự có trong chuỗi s 

// s.lenght()
// số kí tự có trong chuỗi s 

// s.c_str() 
// chuyển chuỗi s sang chuỗi c-string   

// s.insert(pos,x)
// chèn x trước vị trí pos trong chuỗi s, x là kí tự 

// s.append(pos,x)
// chèn x sau vị trí pos trong chuỗi s, x là kí tự 

// s.erase(pos)
// loại bỏ kí tự tại vị trí pos, kích thước chuỗi s bị giảm 1 

// pos = s.find(x) 
// tìm x trong chuỗi s, x là kí tự, string hoặc c-string, pos là chỉ số kí tự đầu tiên tìm được thấy 

// s1.compare(s2)
// So sánh chuỗi s1 với s2.Giá trị trả về là -1 nếu s1 < s2, bằng 0 nếu s1 == s2, là 1 nếu s1 > s2.

// s1.swap(s2)
// Hoán đổi nội dung hai chuỗi.

#include<string>
string str; 
 ///////////////    XÓA   //////////////////
//str.erase(str.begin() + 3) ; // Xóa 1 kí tự tại vị trí 3 
//str.erase(x,y); //Xóa đi y kí tự bắt đầu tại vị trí x 
//str.erase(str.begin() + x); // Xóa đi kí tự tại vị trí x
//str.erase(str.begin() + x, str.begin() + y); // Xóa đi các kí tự 
//    từ chỉ số x đến chỉ số y - 1 

///////////////     THÊM   ////////////////////
//str.insert(str.begin() + 3,'y'); //Thêm 1 kí tự 'y' tại vị trí số 3
//str.insert(x,"y",z); //Thêm z kí tự từ chuỗi y vào vị trí x.
//    Nếu z có độ dài lớn hơn độ dài chuỗi y thì tiếp tục thêm vào 1 khoảng trắng và 
//    sau đó lại bắt đầu thêm vào các kí tự của chuỗi từ vị trí 0 ==> sao cho đủ z thì thôi 
//str.insert(x,y,'z'); //Thêm y lần kí tự z vào vị trí x
//str.insert(str.begin() + x,'y'); //Thêm kí tự y vào vị trí x 
//str.insert(str.begin() + x,y,'z'); //Thêm y lần kí tự z vào vị trí x 
//str.insert(str.begin() + x,str2.begin() + y,str2.begin() + z); // Thêm chuỗi kí tự con 
//của chuỗi str2 bắt đầu từ vị trí y cho đến vị trí z-1 vào vị trí x trong chuỗi str 

////////// LẤY CHUỖI CON ///////////////
//string str2 = str.substr(x,y); // Lấy ra chuỗi con của chuỗi str bắt đầu từ vị trí x và lấy ra y kí tự 
//string str2 = str.substr(x); // Lấy ra chuỗi con của chuỗi str bắt đầu từ vị trí x cho đến cuối chuỗi 

////////// TÌM KIẾM  //////////////
//int found = str.find('x');
//if(found != string ::npos)==> trả về found chính là vị trí xuất hiện đầu tiên của kí tự x trong chuỗi str.
//Trả về else ==> Không tồn tại kí tự x trong chuỗi str 

//int found = str.find("x");
//if(found != string::npos)==> trả về found chính là vị trí xuất hiện đầu tiên của chuỗi x trong chuỗi str.
//Trả về else ==> Không tồn tại chuỗi x trong chuỗi str.

//getchar() : nhập 1 kí tự từ bàn phím 
//Khi thành công, hàm getchar() trả về ký tự đã nhập.
//Khi thất bại, nó trả về EOF.
//Dùng getchar() nhập thì phải dùng getchar() để xuất 
//   VD
//char x;
//x = getchar(); //khi nào enter thì hàm getchar mới đọc dữ liệu 
//putchar(x); //xuất cái vừa nhập lên màn hình

//getche(): nhận 1 kí tự từ bàn phím (nhập ngay khi nhấn phim)
//   VD:
//char x;
//x = getche();
//putchar(x); //xuất cái vừa nhập lên màn hình

//getch(): nhận 1 kí tự từ bàn phím (nhập ngay khi nhấn phim)
//giống như getche nhưng nó ko hiện kí tự nhập vào lên màn hình
//   VD:
//char x ;
//x= getch();
//putchar(x); //xuất cái vừa nhập lên màn hình 

//gets() : nhập vào 1 xâu kí tự - chuỗi - lấy cả khoảng trắng 
//   VD :
//char s[50];
//gets(s);
//puts(s); //xuất chuỗi s 

//Hàm getchar()
//Hàm "int getchar (void)" đọc kí tự có sẵn tiếp theo từ màn hình 
//và trả về một Số nguyên (integer).
//Hàm này chỉ đọc một kí tu đơn tại một thời điểm.
//Chúng ta có thể sử dụng phương thức này 
//trong vòng lặp trong trường hợp chúng ta 
//muốn đọc nhiều hơn một ký tự từ màn hình.
//Khi thành công, hàm getchar() trả về ký tự đã nhập.
//Khi thất bại, nó trả về EOF.
//EOF : kết thúc 

//Hàm putchar()
//Hàm "int putchar (int)" đặt kí tự đã được truyền vào 
//lên màn hình và trả về chính kí tự đó 
//Hàm này chỉ đặt một kí tự đơn một thời điểm 
//Chúng ta có thể sử dụng phương thức này trong vòng lập 
//trong trường hợp chúng ta muôn hiển thị nhiều hơn 1 kí tự 
//trên màn hình 

//Hàm getch()
//1. Dừng màn hình để xem
//2. Nhận1kí tự từ bàn phím(lấy kí tự từ bộ nhớ đệm) 
//và không hiển thị kí tự đó lên màn hình

//Dùng hàm getch(), getche(), getchar(),...phải khai báo thư viện #include<conio.h>


//XÓA BỘ NHỚ ĐỆM 
//Cách 1 :
// fflush(stdin);
//Cách 2 :
// rewind(stdin)
//Cách 3 : khi dùng nhớ khai báo thư viện #include<conio.h>
// while(getchar() != '\n')

///////////////// LỆNH NHẬP-XUẤT C VÀ C++///////////////////////////
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


//////////////// BIẾN CON TRỎ /////////////////////////////////
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

//Con trỏ NULL là con trỏ chưa khai báo giá trị 

#include<iostream>
using namespace std;
int mainLT34()
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

	cout << "Gia tri cua bien c: " << *c << endl; //Khi lấy giá trị của biến con trỏ thì cần dấu "*" trước biến 
	cout << "Dia chi cua bien c: " << &b << endl;
	cout << "Mien gia tri cua con tro c: " << c << endl;
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
int mainLT35()
{
	int a;
	int* b; //con trỏ chỉ có địa chỉ, nhưng chưa có vùng nhớ để chứa giá trị 
	//kích thước con trỏ luôn là 4 byte
	system("pause");
	return 0;
}


//////////////////////// CON TRỎ VÔ KIỂU  //////////////////////////
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
//+  Nếu con trỏ c này mà trỏ đến 1 cái biến hợp lệ (con trỏ thuộc kiểu dữ liêu nào thì có thể trỏ đến biến thuộc kiểu dữ liệu đó) thì 
//lúc này vùng nhớ của con trỏ mới tồn tại. Nghĩa là con trỏ sẽ sử dụng ké cái vùng nhớ của biến mà nó trỏ tới 
//+  Khi ta cấp phát vùn nhớ hợp lệ thì con trỏ mới tồn tại vùng nhớ để lưu giá trị 


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
int mainLT36()
{
	int* a = new int[5];
	// int *a = new int [1] đồng nghĩa int *a = new int // cấp phát 1 ô nhớ 
	*a = 69;
	cout << "Gia tri cua con tro a : " << a;
	delete a; // hàm giải phóng vùng nhớ bên C++
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
int mainLT37()
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
		cout << "Nhap gia tri cho mang thu " << i << " = "; cin >> arr[i];
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
void xoa(int a[], int& n, int vt);
int mainLT38()
{

	int n;
	do
	{
		cout << "Nhap so phan tu cho mang : ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap so luong phan tu cho mang khong hop le !\n";
	} while (n <= 0);
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
	for (int i = vt; i < n; i++)
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

////////////////////////// ĐỆ QUI /////////////////////////////
//Muốn dùng đệ qui vào bài tập thì phải có đk dừng 
//Đệ qui là gọi lại chính nó 

#include<iostream>
using namespace std;
//Cách bình thường 
long gt(int n)
{
	long x = 1;
	for (int i = 1; i <= n; i++)
	{
		x *= i;
	}
	return x;
}
//Cách theo đệ qui 
//Tính n! theo đệ qui
//n!=1*2*3*4*...*n 
//0!=1
long gth(int n)
{
	//Trường hợp cơ bản - điều kiện dừng 
	//1!=1 và 0!= 1
	if (n == 0 || n == 1)
		return 1;
	else
		return n * gth(n - 1);
}
//Hàm tính tổng từ 1 đến n theo đệ qui 
int sum1ton(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum1ton(n - 1);
}
//Hàm tính fibo theo đệ qui 
long long fibo(int n)
{
	if (n == 1 || n ==2 )
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);

}
//Tính nCk theo đệ qui 
int nCk(int n, int k)
{
	if (k == 0 || n == k)
		return 1;
	else
		return nCk(n - 1, k) + nCk(n - 1, k - 1);
}
//Tính ước chung lớn nhất theo đệ qui 
int ucln(int a, int b) //điều kiện vào là a >= b
{
	if (b == 0)
		return a;
	else
		return ucln(b, a % b);
}
//Tính lũy thừa theo đệ qui 
//a^b
//kq = 1 khi b = 0
//kq = a^(b/2)*a^(b/2)*a khi b lẻ 
//kq = a^(b/2)*a^(b/2) khi b chẵn 
//VD: a^10 = a^5 * a^5
// a^11 = a^5 * a^5 * a 
int mu(int a, int b)
{
	if (b == 0)
		return 1;
	int x = mu(a, b / 2);
	if (b % 2 == 1)//b lẻ
		return a * x * x;
	else
		return x * x;
}
//Đếm số lượng chữ số của 1 số nguyên 
//VD: n = 12345
//c(n) : 1 ; n n <10
//       1 + c(n/10)
int dem(int n)
{
	if (n < 10)
		return 1;
	else
		return 1 + dem(n / 10);
}
//Kiểm tra mảng có đối xứng không theo đệ qui 

int mainLT39()
{
	int n, k, a, b, x, y, e;
	cout << "Nhap n tai day : ";
	cin >> n;
	cout << "Giai thua cua n (N!) : " << gth(n) << endl;
	cout << "Tong tu 1 den n la : " << sum1ton(n) << endl;
	cout << "So fibo thu n la : " << fibo(n) << endl;
	cout << "Nhap k cua nCk : ";
	cin >> k;
	cout << "To hop nCk la : " << nCk(n, k) << endl;
	cout << "Nhap 2 so a,b can tim uoc chung lon nhat : ";
	cin >> a >> b;
	if (a >= b)
		cout << "UCLN giua " << a << " va " << b << " la : " << ucln(a, b) << endl;
	else
		cout << "UCLN giua " << a << " va " << b << " la : " << ucln(b, a) << endl;
	cout << "Nhap a va b de tinh a^b : ";
	cin >> x >> y;
	cout << "Ket qua a^b la : " << mu(x, y) << endl;
	cout << "Nhap so nguyen can dem so luong : ";
	cin >> e;
	cout << "So luong chu so trong so nguyen tren la : " << dem(e) << endl;
	system("pause");
	return 0;
}

int mainLT40()
{
	int n;
	cin >> n;
	//cấp phát một biến
	int* p = new int;
	//cấp phát mảng 1 chiều 
	int* arr = new int[n];
	//cấp phát mảng 2 chiều 
	int** brr = new int* [n];
	for (int i = 0; i < n; i++)
		brr[i] = new int[n];
	// giải phóng bộ nhớ 
	// một biến
	delete  p;
	// mảng 1 chiều
	delete[] arr;
	// mảng 2 chiều
	for (int i = 0; i < n; i++)
		delete[] brr[i];
	delete[] brr;
	brr = nullptr;
}

//7 / Tìm chữ số đầu tiên của số nguyên dương n.

int ChuSoDauTien(int a)
{
	if (a < 10)
		return a;
	else
		return ChuSoDauTien(a / 10);
}

//8 / Tính  P(n) = 1.3.5...(2n + 1) với n >= 0

long Tich(int n)
{
	if (n == 0)
		return 1;
	else
		return(2 * n + 1) * Tich(n - 1);
}
//9 / Tính S(n) = 1 + 3 + 5 + … + (2.n + 1) với n >= 0

long  Tong(unsigned n)
{
	if (n == 0)
		return 1;
	return n + Tong(n - 2);
}

//10 / Tính S(n) = 1 - 2 + 3 - 4 + … + ((-1) ^ (n + 1)).n với n > 0

int Tong(usigned  n)
{
	if (n == 0)
		return 0;
	return pow(-1, (double)n + 1) * n + Tong(n - 1);
}
//pow(-1,n+1)=(-1)^(n+1)
//HOẶC
int Tong(usigned  n)
{
	if (n == 0)
		return 0;
	if (n % 2 == 0)
		return –n + Tong(n - 1);
	return n + Tong(n - 1);
}

//11 / Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3…n với n > 0

long GiaiThua(int n)
{

	if (n == 1)
	{
		return 1;
	}

	return GiaiThua(n - 1) * n;
}

long Tong(int n)

{

	if (n == 1)

	{

		return 1;
	}

	return Tong(n - 1) + GiaiThua(n - 1) * n;

}

//12 / Tính S(n) = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + .... + n ^ 2 với n > 0

long TongBinhPhuong(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * n + TongBinhPhuong(n - 1);
}

//13 / Tính P(x, y) = x ^ y

float LuyThua(int x, int y)
{
	if (y == 0)
		return 1;
	else
		if (y < 0)
			return LuyThua(x, y + 1) * (float)1 / x;
		else
			return x * LuyThua(x, y - 1);
}

//14 / Tính S(n) = 1 + 1 / 2 + 1 / 3 + ... + 1 / n với n > 0

float Tinh(float n)
{
	if (n == 1)
		return 1;
	return Tinh(n - 1) + 1 / n;
}

//15 / Tính S(n) = 1 + 1 / 2 + 1 / (2.4) + 1 / (2.4.6) + … + 1 / (2.4.6.2n) với n > 0

float T(unsigned n)
{
	if (n == 0)
		return 1;
	return T(n - 1) * 2 * n;
}
float  Tong(unsigned n)
{
	if (n == 0)
		return 1;
	return Tong(n - 1) + 1 / T;
}

//16 . Viết hàm đệ quy xuất ngược một mảng

void XuatNguoc(int a[], int n)
{
	if (n == 1)
		cout << a[0];

	else
	{
		cout << a[n - 1];
		XuatNguoc(a, n - 1);
	}
}
//Hoặc 
void Nguoc(int arr[], int left, int right)
{
	if (left >= right)
		return;
	Hoandoi(arr[left], arr[right]);
	return Nguoc(arr, left + 1, right - 1);
}
void Hoandoi(int& x, int& y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}

#include<iostream>
using namespace std;
void Hoandoi(int& x, int& y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}
void Nguoc(int arr[], int left, int right)
{
	if (left > right) return;
	else
	{
		Hoandoi(arr[left], arr[right]);
		return Nguoc(arr, left + 1, right - 1);
	}
}

int mainLT41()
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
	cout << "Mang nguoc la : ";
	Nguoc(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}