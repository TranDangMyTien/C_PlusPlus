//Bài 1. Cộng 2 chuỗi số - Cộng 2 số nguyên không giới hạn số lượng chữ số 
//Phép tính cho chữ số dưới 5 chữ số 
//NÂNG CAO : 
//- Làm phép tính cộng do người dùng nhập 
//- Phép tính cộng nhưng dấu của 2 số khác nhau (cái + cái -)
//- Đưa thêm phần xuất file và ghi file vào 
//Bài 2. Nhập vào 1 chuỗi bất kì. Sắp xếp các i=kí tự tăng dần theo mã ASCII 
//VD: "beda"
//==>"abde"
//Bài 3.Nhập vào 1 chuỗi bất kì. Thống kê tần suất xuất hiện của từng kí tự trong chuỗi 
//VD: "asda"
//a: 2
//s: 1
//d: 1
//Bài 4. Nhập vào 1 chuỗi bất kì. Đảo ngược chuỗi ban đầu 
//VD:"ABCDE"==>"EDCBA"
//Bài 5.Nhập vào 1 chuỗi bất kì. Đếm số lượng từ hiện có trong chuỗi
//VD:"Nghe thuat chi la 1 anh trang lua doi"==>9 từ 
//Bài 6. Nhập vào 1 chuỗi từ bàn phím. Viết hàm chuẩn hóa chuỗi vừa nhập theo yêu cầu sau:
//   +  Không tồn tại kí tự khoảng trắng ở đầu chuỗi 
//   +  Không tồn tại kí tự khoảng trắng ở cuối chuỗi 
//   +  Mỗi từ chỉ cách nhau 1 kí tự khoảng trắng 
//Bài 7. Nhập vào 1 chuỗi bất kì. In hoa các kí tự trong chuỗi 
//VD : "ADGajk" ==>"ABGAJK"
//Bài 8. Nhập vào 1 chuỗi bất kì. Xóa các kí tự khoảng trắng trong chuỗi 
//VD: "ABC df"==>"ABCdf"
//Bài 9. Nhập vào 1 chuỗi bất kì. Xóa các kí tự trùng nhau 
//VD: "ADGHH"==>"ADGH"
//Bài 10. Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một sinh viên(SinhVien).
//   Biết rằng1sinh viên gồm những thông tin như sau :
//   Mã số sinh viên : chuỗi tối đa 20 kí tự
//   Họ tên sinh viên : chuỗi tối đa 30 kí tự
//   Điểm Ki thuat lap trinh : kiểu số thực -
//   Điểm Toan roi rac : kiểu số thực
//   Điểm CTDL_GT : kiểu số thực
//Bài 11.Thiết kế chương trình lưu trữ thông tin sinh viên của 1 trường đại học
//biết thông tin sinh viên gồm :
//   Mã số
//   Họ tên
//   Năm sinh
//   Điểm trung bình
//1. Khai báo cấu trúc sinh viên
//2. Nhập danh sách sinh viên
//3. Xuất danh sách sinh viên
//4. Tìm kiếm thông tin sinh viên dựa vào điểm 
//5. Thêm 1 sinh viên vào vị trí bất kỳ 
//6. Xóa 1 sinh viên có điểm trung bình dưới 5 
//7. Sắp xếp sinh viên tăng dần theo điểm trung bình 
//Bài 12. Kết hợp STRUCT và CON TRỎ 
//Bài 13. Bài tập cộng, trừ, gút gọn phân số 


//Bài 1. Cộng 2 chuỗi số - Cộng 2 số nguyên không giới hạn số lượng chữ số 
//Phép tính cho chữ số dưới 5 chữ số 
#include<iostream>
#include<string>
//#pragma warning (disable:4996)
using namespace std;
void Them_ki_tu(char s[], int vt, char kitu); //char s như kiểu int a 
int mainBT1()
{
	char s1[6] = "1"; // 5 kí tự số và 1 kí tự '\0'
	char s2[6] = "57879";  // 5 kí tự số và 1 kí tự '\0'
	//           103546 
	//HÀM TÍNH ĐỘ DÀI CHUỖI 
	//strlen(); 

	int len_s1 = strlen(s1); //Tính độ dài chuỗi s1 
	int len_s2 = strlen(s2); //Tính độ dài chuỗi s2 
	//Đồng nhất độ dài 2 chuỗi 
	if (strlen(s1) > strlen(s2))
	{
		int sl_them = strlen(s1) - strlen(s2);
		for (int i = 1; i <= sl_them ; i++)
		{
			Them_ki_tu(s2,0,'0');
		}
	}
	else if (strlen(s1) < strlen(s2))
	{
		int sl_them = strlen(s2) - strlen(s1);
			for (int i = 1; i <= sl_them ; i++)
			{
				Them_ki_tu(s1, 0, '0');
			}
	}
	cout << s1;
	cout << endl;
	cout << s2;
	cout << endl;
	int nho = 0; //giữ phần nhớ của phép tính 
	int kq = 0; //kết quả của phép tính 
	char ket_qua[7] = "";
	int k = 0; //chỉ số của chuỗi kí tự kết quả 
	for (int i = strlen(s1) - 1; i >= 0; i--)
	// Chuyển từ kí tự chữ số sang kí tự sô 
		// 8 + 48 = '8' hay '8' - 48 = 8
		// 1--> 9 
	{
		kq = (s1[i] - 48) + (s2[i] - 48) + nho;
		nho = kq / 10; //lấy phần nhớ của phép 
		ket_qua[k] = (kq % 10) + 48; // +48 để trở về kiểu chuỗi 
		k++;
	}
	//Sau khi thực hiện phép tính cuối cùng thì kiểm tra 
	//Nếu biến nhớ còn thì đưa vào chuỗi  ket_qua 
	if (nho != 0)
	{
		ket_qua[k] = nho + 48;
	}
	//In kết quả ra màn hình <==> duyệt ngược chuỗi kết quả 
	for (int i = strlen(ket_qua)-1; i >= 0; i--)
	{
		cout << ket_qua[i];
	}
	//int n = strlen(ket_qua);
	//ket_qua[n] = '\0'; //gán kí tự '\0' cho mảng ket_qua[k]
	cout << endl;
	system("pause");
	return 0; 
}
void Them_ki_tu(char s[], int vt, char kitu)
//Thêm kí tự thì dịch về bên phải, bắt đầu từ cuối chuỗi 
{
	//Thêm kí tự là dịch sang phải, bắt đầu từ cuối hàng trước 
	int n = strlen(s);
	n++; //Độ dài chuỗi thêm 1 đơn vị 
	for (int i = n - 1 ; i >= vt; i--)
	{
		s[i + 1] = s[i];
	}
	s[vt] = kitu;
	s[n] = '\0'; //Mỗi lần dùng hàm thì kí tự '\0' sẽ được dịch vào cuối chuỗi 
 //Hàm thêm phải có kí tự đặc biệt
}
//Hơi thắc mắc là khi cộng 2 chuỗi như vậy thì kí tự '\0' có được cộng ko, 
//rồi không thêm kí tự '\0' có bị lỗi ko ?  


//Bài 3.Nhập vào 1 chuỗi bất kì. Thống kê tần suất xuất hiện của từng kí tự trong chuỗi 
//VD: "asda"
//a: 2
//s: 1
//d: 1
//BỊ LỖI 
#include<iostream>
#include<string>
//Chuỗi dùng mảng tĩnh 
using namespace std;
//void Tan_suat_xuat_hien(char s[]);
//afgaatt 
bool Kiem_tra(char s[], int i)
{
	int kt = 0;
	for (int j = 0; j < i; j++)
	{
		if (s[i] == s[j])
			kt++;
	}
	if (kt > 1) //vì nhỏ nhất là = 1 rồi (1 lần xuất hiện)
		return 0; //false
	return 1; //true 
}
int Dem(char s[], int i)
{
	int dem = 0; 
	int n = strlen(s);
	for (int j = i; j < n; j++)
	{
		if (s[i] == s[j])
			dem++;
	}
	return dem;
}
int mainBT3()
{
	char s[50] = "";// để = " " để không bị lỗi đếm kí tự 
	cout << "Nhap chuoi : ";
	//getline(cin, s); //Hàm nhập chuỗi, lấy kí tự khoảng trắng
    //Lưu ý : getline chỉ nhận string 
	gets_s(s); //Hàm nhập cho mảng kí tự char, lấy khoảng trắng, chỉ dừng khi gặp newline hay enter 
	int n = strlen(s);
	int demTrang = 0; 
	for (int i = 0; i < n; i++)
	{
		if((s[i] != ' ')&&(Kiem_tra(s,i)==1))
			cout <<"Ki tu "<<s[i]<<" co "<< Dem(s,i) <<" lan xuat hien"<<endl;
		if (s[i] == ' ')
			demTrang++;
	}
	cout << "So ki tu khoang trang la " << demTrang;

	//Tan_suat_xuat_hien(s);
	cout << endl;
	system("pause");
	return 0;
}
//void Tan_suat_xuat_hien(char s[])
////LỖI KHI CHẠY THỬ : adfgaatt (lỗi bị lập kí tự nhiều lần) 
//{
//	int n = strlen(s); //Đỡ mất thời gian cho vòng lập 
//	for (int i = 0; i < n; i++) //asdfaatt
//	{
//		bool KT = true; //giả sử s[i] là phần tử phân biệt 
//		//duyệt ngược về đầu chuỗi để kiểm tra cái giả sử ban đầu 
//		for (int j = i - 1; j > 0; j--)
//		{ //Kiểm tra kí tự hiện tại có giống kí tự trước ko
//			// Có giống thì dừng chương trình 
//			if (s[i] == s[j])
//			{
//				KT == false;
//				break;
//			}
//		}
//		if (KT == true)
//		{
//			//lấy s[i] phân biệt duyệt lại với chuỗi ban đầu để đếm số lần xuất hiện 
//			int dem = 0; 
//			for (int k = 0; k < n; k++)
//			{
//				if (s[i] == s[k])
//				{
//					dem++;
//				}
//			}
//			cout << "Ki tu " << s[i] << " xuat hien " << dem << " lan !\n";
//		}
//	}
//}

//Bài 10. Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một sinh viên(SinhVien).
//   Biết rằng 1 sinh viên gồm những thông tin như sau :
//   Mã số sinh viên : chuỗi tối đa 20 kí tự
//   Họ tên sinh viên : chuỗi tối đa 30 kí tự
//   Điểm Ki thuat lap trinh : kiểu số thực -
//   Điểm Toan roi rac : kiểu số thực
//   Điểm CTDL_GT : kiểu số thực

#include<iostream>
#include<string>
#include<conio.h> //dùng getchar()
using namespace std;
//khai báo cấu trúc sinh viên 
struct sinhvien
{
	string hoten;
	string maso;
	double diemKTLT;
	double diemTRR;
	double diemCTDL_GT;
};
//Muốn chạy bên C thì định nghĩa lại tên struct
typedef struct sinhvien SINHVIEN;

void Nhap_ThongTin(sinhvien& x)
//Biến x do mình đặt tên - phải có tham chiếu vì sẽ giá trị sẽ thay doi 
//Trong ngoặc tròn có thề ghi (struct sinhvien& x) - (SINHVIEN& X)
{
	while (getchar() != '\n'); //xóa bộ nhớ đệm 
	//Bởi vì thông tin đã nhập đã được lưu bên mảng dssv 
	//Nếu không xóa bộ nhớ đệm thì enter ở phần trước sẽ gây ra lỗi ko cho nhập tiếp 

	//bắt điều kiện mã số sinh viên 
	do
	{
		cout << "Nhap ma so sinh vien : ";
		getline(cin, x.maso); //Hàm nhập bên string - lấy cả khoảng trắng 
		if (x.maso.length() > 20)
		//Giống như bên chuỗi string 
	    //x.maso : là 1 cái chuỗi như s 
		{
			cout << "Do dai khong hop le !\n";
			system("pause");//Dừng lại cho xem 
		}
	} while (x.maso.length() > 20);//khi nào độ dài <= 20 thì dừng 

	//bắt điều kiện họ tên sinh viên 
	do
	{
		cout << "Nhap ho ten sinh vien : ";
		getline(cin, x.hoten); //Hàm nhập bên string - lấy cả khoảng trắng 
		if (x.hoten.length() > 30)
		{
			cout << "Do dai khong hop le !\n";
			system("pause");//Dừng lại cho xem 
		}
	} while (x.hoten.length() > 30);//khi nào độ dài <= 30 thì dừng 

	do
	{
		cout << "Nhap diem KTLT sinh vien : ";
		cin >> x.diemKTLT;
		if (x.diemKTLT < 0 || x.diemKTLT > 10)
		{
			cout << "Diem khong hop le !\n";
			system("pause");//Dừng lại cho xem 
		}
	} while (x.diemKTLT < 0 || x.diemKTLT > 10);
	do
	{
		cout << "Nhap diem TRR sinh vien : ";
		cin >> x.diemTRR;
		if (x.diemTRR < 0 || x.diemTRR > 10)
		{
			cout << "Diem khong hop le !\n";
			system("pause");//Dừng lại cho xem 
		}
	} while (x.diemTRR < 0 || x.diemTRR > 10);
	do
	{
		cout << "Nhap diem CTDL_GT sinh vien : ";
		cin >> x.diemCTDL_GT;
		if (x.diemCTDL_GT < 0 || x.diemCTDL_GT > 10)
		{
			cout << "Diem khong hop le !\n";
			system("pause");//Dừng lại cho xem 
		}
	} while (x.diemCTDL_GT < 0 || x.diemCTDL_GT > 10);
}
//Hàm xuất thông tin sinh viên
void Xuat_ThongTin(sinhvien x)
{
	cout << "Ma so sinh vien " << x.maso << endl;
	cout << "Ho ten sinh vien " << x.hoten << endl;
	cout << "Diem KTLT sinh vien " << x.diemKTLT << endl;
	cout << "Diem TRR sinh vien " << x.diemTRR << endl;
	cout << "Diem CTDL_GT sinh vien " << x.diemCTDL_GT << endl;
}
//Khai báo cấu trúc lưu trữ danh sách sinh viên 
struct danhsach
{ //Giống kiểu int* a;
	sinhvien* dssv[100];//khai báo mảng 1 chiều các con trỏ sinh viên  
	int n;
};

//Hàm xuất danh sách sinh viên 
void Xuat_DanhSachSinhVien(danhsach ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		cout << "\t \t \t THONG TIN SINH VIEN \n";
		Xuat_ThongTin(*ds.dssv[i]);
		//Như Xuat_ThongTin(*dssv[i]);
		//Vì là biến con trỏ nên phải có * 
	}
}

//Hàm quản lý danh sách sinh viên 
void Menu(danhsach& ds)//Có thay đổi nên dùng tham chiếu để lưu
{
	int luachon;
	while (true)
	{
		system("cls");// Lệnh xóa màn hình 
		cout << "======================QUAN LY SINH VIEN =========================\n";
		cout << "1. Them thong tin sinh vien \n";
		cout << "2. Xuat thong tin sinh vien \n";
		cout << "0.Ket thuc chuong trinh\n";
		cout << "===========================  END  ========================\n";
		cout << "Nhap lua chon : ";
		cin >> luachon;
		if (luachon == 1)
		{

			//Như int *a = new [n];
			//x là mình tự đặt tên 
			//Khai báo biến con trỏ thuộc kiểu struct 
			//và cấp phát cho nó struct sinhvien ô nhớ 
			//(số ô nhớ phụ thuộc struct đã khai báo)
			sinhvien* x = new sinhvien; //Như sinhvien* x = new sinhvien[1];
			//Kết giữa struct - con trỏ - mảng động 
			cout << "NHAP THONG TIN SINH VIEN \n";
			Nhap_ThongTin(*x);
			//Như Nhap_ThongTin(a) mà ở đây là biến con trỏ nên thêm *
			ds.dssv[ds.n] = x;
			//Như dssv[n] = x;
			//Gán cái struct (x) == mảng dssv[n]
			//Thêm thông tin về ms, ten, điểm của sinh viên x vào mảng dssv 
			ds.n++; //Tăng số lượng sinh viên lên 
			//Như n++;

		}
		else if (luachon == 2)
		{
			cout << "\t \t DANH SACH SINH VIEN\n";
			Xuat_DanhSachSinhVien(ds);
			system("pause"); //dừng lại để xem
		}
		else //==0
			break; //thoát khỏi vòng lập 

	}

}
int mainBT10()
{
	//sinhvien x; //hoặc struct sinhvien x hay SINHVIEN x đều được 
	////x là biến dữ liệu : nó chứa các kiểu dữ liệu trong struct 
	danhsach ds;//khởi tạo danh sách sinh viên hay đưa struct vào bài 
	ds.n = 0; //Vì ban đầu không có sinh viên nào nên ta cho n = 0;
	Menu(ds);
	
	//Dùng con trỏ khai báo bộ nhớ thì nhớ xóa 
	for (int i = 0; i < ds.n; i++)
	{
		delete ds.dssv[i];
		//Giải phóng từng ô nhớ vì giải phóng nguyên nùi bị lỗi 
	}

	system("pause");
	return 0;
}

//Bài 11.Thiết kế chương trình lưu trữ thông tin sinh viên của 1 trường đại học
//biết thông tin sinh viên gồm :
//   Mã số
//   Họ tên
//   Năm sinh
//   Điểm trung bình
//1. Khai báo cấu trúc sinh viên
//2. Nhập danh sách sinh viên
//3. Xuất danh sách sinh viên
//4. Tìm kiếm thông tin sinh viên dựa vào điểm trung bình 
//5. Thêm 1 sinh viên vào vị trí bất kỳ 
//6. Xóa 1 sinh viên có điểm trung bình dưới 5 
//7. Sắp xếp sinh viên tăng dần theo điểm trung bình 

#include<iostream>
#include<string>

using namespace std;

//khai báo cấu trúc 1 sinh viên 
struct sinhVien
{
	string ms;
	string ht;
	int namsinh;
	double diemtb;
};
//Hàm nhập thông tin 1 sinh viên
void Nhapthongtin( sinhVien& sv)//sv do mình đặt tên 
//Trong ngoặc có thể ghi là (sinhVien& sv)
{
	//Cách 1 :
	// fflush(stdin);
	//Cách 2 :
	// rewind(stdin)
	//Cách 3 : khi dùng nhớ khai báo thư viện #include<conio.h>
	// while(getchar() != '\n')
	while (getchar() != '\n'); //xóa bộ nhớ đệm 
	cout << "Nhap ma so sv : ";
	getline(cin, sv.ms);
	cout << "Nhap ho ten sv : ";
	getline(cin, sv.ht);
	cout << "Nhap nam sinh sv : ";
	cin >> sv.namsinh;
	cout << "Nhap siem trung binh sv : ";
	cin >> sv.diemtb;
}
//Hàm xuất thông tin 1 sinh viên 
void Xuatthongtin(sinhVien sv)
{
	cout << "Xuat ma so sv : " << sv.ms << endl;
	cout << "Xuat ho ten sv : " << sv.ht << endl;
	cout << "Xuat nam sinh sv : " << sv.namsinh << endl;
	cout << "Xuat siem trung binh sv : " << sv.diemtb << endl;
}
//Hàm nhập nhiều sinh viên - hàm nhập danh sách sinh viên 
void Nhapdanhsachsinhvien(sinhVien arr[], int n)
//n là số lượng sinh viên 
{
	for (int i = 0; i < n; i++)
	{
		cout << "\t \t NHAP THONG TIN SINH VIEN\n";
		Nhapthongtin(arr[i]);
	}
}
//Hàm xuất danh sách sinh viên 
void Xuatdanhsachsinhvien(sinhVien arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\t \t XUAT THONG TIN SINH VIEN\n";
		cout << "Sinh vien thu " << i + 1 << endl;
		Xuatthongtin(arr[i]);
	}
}
//Hàm tìm kiếm thông tin sinh viên dựa vào điểm 
void Timkiemsinhvien(sinhVien arr[], int n, double diem)
{
	int dem = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].diemtb == diem)
		{
			cout << "XUAT THONG TIN SINH VIEN THU " << dem++ << endl;
			Xuatthongtin(arr[i]);
		}
	}
}
//Hàm thêm sinh viên vòa vị trí bất kì 
void Themsv(sinhVien arr[], int& n, int vt, sinhVien x)
//Như (int arr[100], int&n, int vt, int x)
//Thêm vào mảng struct [100] (100 sinh viên) 1 struct của 1 sinh viên 
//  1 struct bao gồm nhiều thông tin 
//Thêm sẽ làm thay đổi n nên dùng tham chiếu & để lưu lại 
//x do ta đặt tên 
//Thêm thì dịch sang phải, bắt đầu từ cuối mảng
{
	n++;
	for (int i = n - 1; i >= vt; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[vt] = x; //gán struct cho mảng ở vị trí vt 

}
//Hàm xóa sinh vien bất kì 
void Xoasv(sinhVien arr[], int& n, int vt)
//Xóa n thay đổi nên dùng tham chiếu 
//Xóa là dịch về bên trái, đi từ đầu xuống 
//Chỉ có chuỗi bên c-string mới cần gán kí tự '\0' vào cuối chuỗi 
{
	for (int i = vt; i < n; i++)
	{

		arr[i] = arr[i + 1];
	}
	n--;
}
//Hàm xóa sinh viên có điểm trung bình dưới 5
void Xoaduoi5(sinhVien arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i].diemtb < 5)
		{
			Xoasv(arr, n, i);
			i--;
			//Tại vì sau khi xóa thì thứ tự thay đổi mà i không trừ đi 1
			//thì thằng phía bên phải sẽ bị bỏ qua khi xét 
		}
	}
}
//Hàm hoán vị 
void HoanVi(sinhVien& x, sinhVien& y)
//Hoán vị làm thay đổi nên dùng tham chiếu cho x,y 
{
	sinhVien tam;
	//Như int tam mà ở đây là struct 
	tam = x;
	x = y;
	y = tam;


}
//Hàm sắp xếp danh sách sinh viên tăng dần theo điểm tb
void Sapxepdiemtb(sinhVien arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i].diemtb > arr[j].diemtb)
				HoanVi(arr[i], arr[j]);
		}
	}
}

int mainBT11()
{
	sinhVien arr[100]; //khai báo 1 cái mảng 1 chiều chứa nhieuef sinh viên 
	//Như kiểu int a[100] thì ở đây là struct (bao gồm và nhiều thứ khác)
	int n;
	cout << "Nhap so luong sinh vien : ";
	cin >> n;
	cout << "\t \t \t NHAP DANH SACH SINH VIEN \n";
	Nhapdanhsachsinhvien(arr, n);
	cout << "\t \t \t XUAT DANH SACH SINH VIEN \n";
	Xuatdanhsachsinhvien(arr, n);
	//int diem;
	//cout << "Nhap diem can tim kiem : ";
	//cin >> diem;
	//Timkiemsinhvien(arr, n,diem);
	//int vt;
	//sinhVien x; //Như int x 
	//cout << "Nhap vi tri can them : ";
	//cin >> vt;
	//cout << "NHAP THONG TIN SINH VIEN CAN THEM \n";
	//Nhapthongtin(x);
	//Themsv(arr, n, vt, x);
	//cout << "\t \t \t XUAT DANH SACH SINH VIEN SAU KHI THEM\n";
	//Xuatdanhsachsinhvien(arr, n);
	//int vtcanxoa;
	//cout << "Nhap diem trung binh can xoa : ";
	//cin >> vtcanxoa;
	//Xoaduoi5(arr,n);
	//cout << "\t \t \t XUAT DANH SACH SAU KHI XOA \n";
	//Xuatdanhsachsinhvien(arr, n);
	Sapxepdiemtb(arr, n);
	cout << "\t \t \t XUAT DANH SACH SAU KHI SAP XEP TANG DAN \n";
	Xuatdanhsachsinhvien(arr, n);
	system("pause");
	return 0;
}
//LƯU Ý : Phảm sắp xếp struct và hàm theo thứ tự chạy, cái nào cần trước thì đưa lên trên
//không là bị lỗi 

//Bài 11 mình có thể đưa thêm 1 struct danhsachsinhvien cho bài nó đẹp với dễ quản lí
//struct danhsach
//{
//	sinhVien arr[100]; //khai báo ra mảng 1 chiều các sinh viên - chứa tối đa 100 sinh viên 
//	int n; //số lượng sinh viên hiện có trong danh sách 
//};
//
////Hàm nhập danh sách sinh viên 
//void Nhapdanhsach_sinhvien(danhsach& ds)
//{
//	//Vòng lập cho chúng ta nhập nhiều sinh viên 
//	for (int i = 0; i < ds.n; i++)
//	{
//		//Gọi lại hàm nhập 1 sinh viên 
//		//Nhập thông tin sinh viên thứ arr[i]
//		Nhapthongtin(ds.arr[i]);
//	}
//}
////Hàm xuất danh sách sinh viên 
//void Xuatdanhsach_sinhvien(danhsach ds)
//{
//	//Vòng lập cho chúng ta xuất nhiều sinh viên 
//	for (int i = 0; i < ds.n; i++)
//	{
//		//Gọi lại hàm xuất 1 sinh viên 
//		//Xuất thông tin sinh viên thứ arr[i]
//		Xuatthongtin(ds.arr[i]);
//	}
//}

//Trong hàm main thì
//danhsach ds; //Khai báo struct danh sách sinh viên 
//cin>>ds.n; //Nhập giá trị số lượng sinh viên 
//Nhapdanhsach_sinhvien(ds);
//Xuatdanhsach-sinhvien(ds);

//Trả về sinh viên có điểm trung bình thấp nhất
//Vì có thể có nhiều sinh viên có điểm thấp nhất nên minh tìm điểm nhỏ nhất
//rồi xuất thông tin những ai có điểm đó ra 
//void Timsinhviencotbthapnhat(danhsach ds)
//{
//    //Bước 1: duyệt danh sách sinh viên tìm ra điểm nhỏ nhất 
// int min=ds.arr[0].diemtb;
// for(int i = 0; i,ds.n; i++)
// {
//      if(ds.arr[i].diemtb<min)
//      {
//         min =ds.arr[i].diemtb;
//      }
//  }
//    //Bước 2: Duyệt danh sách sinh viên - sinh viên nào có điểm trung bình 
//      //bằng cái điểm min thì mình xuất 
//  for(int i =0; i<ds,n; i++)
//  {
//     if(ds.arr[i].diemtb==min)
//       Xuatthongtin(ds.arr[i]);
//  }
//}

//Bài 12. Kết hợp STRUCT và CON TRỎ 
#include<iostream>
using namespace std;
struct person
{
	int age;
	double weight;
};
int mainBT12()
{
	//Khai báo con trỏ kiểu struct, và khai báo 1 stuct tên person1 
	person* Pt, person1;
	//Chỉ có con trỏ kiểu mảng thì mới không dùng tham chiếu khi gán 
	//Còn con trỏ kiểu struct và int long ... thì phải có tham chiều khi gán 
	Pt = &person1;
	cout << "Enter age : ";
	cin >> Pt->age; //stuct mà có con trỏ thì phải dùng -> thay vì chấm 
	cout << "Enter weight : ";
	cin >> Pt->weight;
	cout << "Disphaying age : " << Pt->age << endl;
	cout << "Disphaying weight : " << Pt->weight << endl;
	system("pause");
	return 0;
}

//Bài 13. Bài tập cộng, trừ, nhân, chia, gút gọn phân số 
#include<iostream>
using namespace std;
struct PhanSo
{
	int tuso;
	int mauso;
};
void NhapPhanSo(PhanSo* ps)
//void NhapPhanSo(PhanSo &ps) ta có thể tham chiếu & thành con trỏ *
{
	cout << "Nhap tu so : ";
	cin >> ps->tuso;
	do
	{
		cout << "Nhap mau so (mau so != 0) : ";
		cin >> ps->mauso;
		if (ps->mauso == 0)
		{
			cout << "Nhap mau so khong hop le !\n";
			cin >> ps->mauso;
		}
	} while (ps->mauso == 0);//Khi nào mẫu số khác ko thì dừng 
	if (ps->mauso < 0) //Đổi dấu khi mẫu số âm 
	{
		ps->tuso *= -1; // tương đương ps->tuso = ps->tuso * (-1)
		ps->mauso *= -1;
	}
}

PhanSo Tong(PhanSo ps1, PhanSo ps2) //ps1,ps2 do mình đặt ra 
{
	//Vì là hàm struct nên phải trả giá trị struct 
	PhanSo ps; //gán tên cho struct phân số 
	ps.tuso = ps1.tuso * ps2.mauso + ps1.mauso * ps2.tuso;
	ps.mauso = ps1.mauso * ps2.mauso;
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
void rutgon(PhanSo* ps)
{
	cout << "Phan so vua nhap : ";
	cout << ps->tuso / UCLN(ps->tuso, ps->mauso) << "/" << ps->mauso / UCLN(ps->tuso, ps->mauso) << endl;
}
PhanSo Hieu(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tuso = ps1.tuso * ps2.mauso - ps1.mauso * ps2.tuso;
	ps.mauso = ps1.mauso * ps2.mauso;
	return ps;
}
PhanSo Tich(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tuso = ps1.tuso * ps2.tuso;
	ps.mauso = ps1.mauso * ps2.mauso;
	return ps;
}
PhanSo Thuong(PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.tuso = ps1.tuso * ps2.mauso;
	ps.mauso = ps1.mauso * ps2.tuso;
	return ps;
}
int main()
{
	PhanSo ps1, ps2, tong, hieu, tich, thuong;//Khai báo strcut ps1,ps2 
	NhapPhanSo(&ps1); //Như NhapPhanSo(ps1)
	//Mà hàm NhapPhanSo dùng con trỏ nên phải đưa tham chiếu & ở hàm main 
	rutgon(&ps1);
	NhapPhanSo(&ps2);
	rutgon(&ps2);
	cout << "Tong 2 phan so la: ";
	tong = Tong(ps1, ps2);
	//Phải làm hàm struct tong và gán  struct tong (hàm main) = hàm struct Tong
	//để lấy phân số 
	rutgon(&tong);
	cout << "Hieu 2 phan so la: ";
	hieu = Hieu(ps1, ps2);
	rutgon(&hieu);
	cout << "Tich 2 phan so la: ";
	tich = Tich(ps1, ps2);
	rutgon(&tich);
	cout << "Thuong 2 phan so la: ";
	thuong = Thuong(ps1, ps2);
	rutgon(&thuong);
	system("pause");
	return 0;
}