//ĐỀ 1 
//Câu 1: Viết chương trình thực hiện các yêu cầu sau đây :
//a.Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột(tối đa 10 hàng và
//	15 cột, nếu nhập sai các giá trị r hay c thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục). (1 điểm)
//b.In ra tổng các số trên từng hàng(in ra tổng giá trị và vị trí hàng) (2 điểm)
//c.Hàm main dưới dạng menu lựa chọn : Nhập mảng và In tổng giá trị hàng, trình bày code(1 điểm)
//Câu 2: Cho tập tin NhanVien.txt được lưu trữ trong ổ đĩa D : \ chứa thông tin về nhân viên của cửa
//hàng Circle K, dòng đầu tiên là mô tả, từ dòng thứ 2 bao gồm các thông tin sau : Mã nhân viên
//(MaNV – kiểu chuỗi), Họ và Tên(kiểu chuỗi), Ngày sinh(kiểu chuỗi), Quê quán(kiểu chuỗi),
//Thâm niên công tác(kiểu số nguyên), Hệ số lương(kiểu số thực).
//Sinh viên viết chương trình cho phép người dùng thực hiện nhiều lần các công việc sau đây :
//a.Khai báo cấu trúc struct phù hợp để lưu trữ thông tin của mỗi nhân viên trong tập tin trên.
//Đọc tập tin và lưu thông tin vào mảng(tối đa 100 phần tử) với cấu trúc dữ liệu vừa khai báo
//(1 điểm)
//
//ĐỀ 02
//
//b.Xuất tất cả nhân viên trong mảng ra màn hình theo định dạng xuất sau(1 điểm) :
//
//	======================== =
//	Mã NV : NV01
//	Họ và Tên : Nguyen Van B
//	Ngày sinh : 25 - 01 - 2002
//	Quê quán : Dong Thap
//	Thâm niên công tác : 3
//	Hệ số lương : 2.34
//	======================== =
//
//	c.Nhập vào quê quán, xuất ra màn hình tất cả thông tin của nhân viên có quê quán vừa nhập
//	theo định dạng xuất ở Câu b. (0.5 điểm)
//	d.Nhập vào 2 số nguyên A và B với A <= B, xuất ra màn hình thông tin của tất cả nhân viên có
//	thâm niên công tác >= A và <= B theo định dạng xuất ở Câu b. (1 điểm)
//	e.Tính lương tháng 01 năm 2022 cho tất cả nhân viên trong tập tin và lưu vào tập tin
//	TinhLuong.txt(tập tin này chưa được tạo trước đó, nếu đã có thì xóa và ghi từ đầu tập tin)
//	trong ổ đĩa D : \ với các thông tin của mỗi nhân viên như sau(1.5 điểm) :
//	MaNV, Họ và Tên, Thâm niên công tác, Hệ số lương, Lương thực nhận
//	Trong đó, lương thực nhận được tính theo công thức :
//Lương thực nhận = thâm niên công tác * định mức(D) + hệ số lương * 1.490.000
//Ghi chú :
//-Thâm niên công tác < 3 năm : D = 1.000.000
//	- Thâm niên công tác >= 3 : D = 1.500.000
//	f.Hàm main dưới dạng menu lựa chọn, trình bày code(1 điểm)

//ĐỀ 2 
//Câu 1: Viết chương trình thực hiện các yêu cầu sau đây :
//a.Cho phép người dùng nhập vào một mảng số nguyên gồm r hàng và c cột(tối đa 10 hàng và
//	15 cột, nếu nhập sai các giá trị r hoặc c thì yêu cầu nhập lại cho đến khi đúng mới tiếp tục).
//	(1 điểm)
//	b.In ra màn hình tất cả các phần tử có giá trị là số chẵn(in ra giá trị và vị trí hàng cột của phần
//		tử này) (2 điểm)
//	c.Hàm main dưới dạng menu có 2 lựa chọn : Nhập mảng và In kết quả(1 điểm)
//Câu 2 : Cho tập tin SinhVien.txt được lưu trữ trong ổ đĩa D : \ chứa thông tin về điểm của môn học Kỹ
//	thuật lập trình.Dòng đầu là thông tin chung về tập tin, từ dòng thứ 2 bao gồm các thông tin sau : Mã
//	số sinh viên(MSSV – kiểu chuỗi), Họ và Tên(kiểu chuỗi), Ngày sinh(kiểu chuỗi), Quê quán
//	(kiểu chuỗi), Điểm giữa kỳ(kiểu số nguyên), Điểm cuối kỳ(kiểu số nguyên).
//	Sinh viên viết chương trình cho phép người dùng thực hiện nhiều lần các công việc sau đây :
//a.Khai báo cấu trúc struct phù hợp để lưu trữ thông tin của mỗi sinh viên trong tập tin trên.
//Đọc tập tin và lưu thông tin vào mảng(tối đa 100 phần tử) với cấu trúc dữ liệu vừa khai báo (1 điểm)
//b.Xuất tất cả sinh viên trong mảng ra màn hình theo định dạng xuất sau(1 điểm) :
//
//	------------------------------------------
//	MSSV : 2151010001
//	Họ và Tên : Nguyen Van A
//	Ngày sinh : 25 - 01 - 2002
//	Quê quán : Dong Thap
//	Điểm giữa kỳ : 9
//	Điểm cuối kỳ : 10
//	------------------------------------------
//
//	c.Nhập vào điểm giữa kỳ K, xuất ra màn hình tất cả thông tin của sinh viên có điểm giữa kỳ
//	< K theo định dạng xuất ở Câu b. (0.5 điểm)
//	d.Nhập vào 2 điểm A và B với A <= B, xuất ra màn hình thông tin của tất cả sinh viên có điểm
//	cuối kỳ lớn hơn hay bằng A và nhỏ hơn hay bằng B theo định dạng xuất ở Câu b. (1 điểm)
//	e.Tính điểm tổng kết môn học Kỹ thuật lập trình của tất cả sinh viên trong tập tin và lưu vào
//	tập tin DTK.txt(tập tin này chưa được tạo trước đó, nếu đã có thì xóa và ghi từ đầu tập tin)
//	trong ổ đĩa D : \ với các thông tin của mỗi dòng như sau(1.5 điểm) :
//	MSSV, Họ và Tên, Điểm giữa kỳ, Điểm cuối kỳ, Điểm tổng kết môn học
//	Trong đó, điểm tổng kết môn học được tính theo công thức :
//  Điểm tổng kết môn học = 40 % *điểm giữa kỳ + 60 % *điểm cuối kỳ
//  f.Trình bày code(1 điểm)

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
const int MAX = 30;
//--------Struct--------
struct NgayThangNam
{
	int ngay, thang, nam;
};
struct SanPham
{
	string MaSP, TenSP;
	int TrangThai;
	NgayThangNam NgayNhap;
	double GiaNhap, GiaBanT3;
};
//--------function------
bool inputData(int& i);
void outputData(int i);
void menu(int i);
void loinhuan(int i);
void maxLoinhuan(int i);
SanPham ABC[MAX];
int mainBT_MAU()
{
	int i = 0;
	if (inputData(i) == 1) menu(i);
	system("pause");
	return 0;
}
bool inputData(int& i)
{
	ifstream fi;
	fi.open("S:\\De 03\\sanpham.txt", ios::in);
	if (fi.is_open())
	{
		cout << "Mo file thanh cong !!\n";
		while (!fi.eof())
		{
			getline(fi, ABC[i].MaSP, ',');
			getline(fi, ABC[i].TenSP, ',');
			fi >> ABC[i].TrangThai;
			fi.ignore(1);
			fi >> ABC[i].NgayNhap.ngay;
			fi.ignore(1);
			fi >> ABC[i].NgayNhap.thang;
			fi.ignore(1);
			fi >> ABC[i].NgayNhap.nam;
			fi.ignore(1);
			fi >> ABC[i].GiaNhap;
			fi.ignore(1);
			fi >> ABC[i].GiaBanT3;
			fi.ignore(1);
			i++;
		}
		fi.close();
		return 1;
	}
	else
	{
		cout << "Mo file that bai !!\n";
		return 0;
	}

}
void outputData(int i)
{
	for (int j = 0; j < i; j++)
		cout << setw(10) << ABC[j].MaSP << " " << setw(20) << ABC[j].TenSP << " "
		<< setw(1) << ABC[j].TrangThai << " " << setw(2) << ABC[j].NgayNhap.ngay << "/"
		<< setw(2) << ABC[j].NgayNhap.thang << "/" << setw(2) << ABC[j].NgayNhap.nam << " "
		<< setw(10) << ABC[j].GiaNhap << " " << setw(10) << ABC[j].GiaBanT3 << endl;
}
void menu(int i)
{
	do
	{
		cout << "1. In ra thong tin cac san pham.\n";
		cout << "2. Ghi file loi nhuan cua cac san pham.\n";
		cout << "3. Xuat thong tin san pham co loi nhuan cao nhat trong thang 3.\n";
		cout << "4. Ket thuc\n";
		int choose;
		cout << "Chon 1/2/3/4: ";
		cin >> choose;
		if (choose == 1) outputData(i);
		if (choose == 2)	loinhuan(i);
		if (choose == 3) maxLoinhuan(i);
		if (choose == 4) return;
		system("pause");
		system("cls");
	} while (true);
}
void loinhuan(int i)
{
	double profit;
	ofstream fo;
	fo.open("loinhuan.txt", ios::out);
	if (fo.is_open())
	{
		for (int j = 0; j < i; j++)
		{
			profit = ABC[j].GiaBanT3 - ABC[j].GiaNhap;
			fo << ABC[j].MaSP << "#" << profit << endl;
		}
		cout << "Ghi file thanh cong\n";
		fo.close();
	}
	else
	{
		cout << "Ghi file that bai !!\n";
	}

}
void maxLoinhuan(int i)
{
	ifstream fi;
	double maxx;
	int pos = 0;
	double value;
	fi.open("loinhuan.txt", ios::in);
	if (fi.is_open())
	{
		string temp;
		getline(fi, temp, '#');
		fi >> maxx;
		fi.ignore(1);
		for (int j = 1; j < i; j++)
		{
			getline(fi, temp, '#');
			fi >> value;
			fi.ignore(1);
			if (value > maxx)
			{
				maxx = value;
				pos = j;
			}
		}
		cout << setw(10) << ABC[pos].MaSP << " " << setw(20) << ABC[pos].TenSP << " "
			<< setw(1) << ABC[pos].TrangThai << " " << setw(2) << ABC[pos].NgayNhap.ngay << "/"
			<< setw(2) << ABC[pos].NgayNhap.thang << "/" << setw(2) << ABC[pos].NgayNhap.nam << " "
			<< setw(10) << ABC[pos].GiaNhap << " " << setw(10) << ABC[pos].GiaBanT3 << endl;
	}
	return;
}
