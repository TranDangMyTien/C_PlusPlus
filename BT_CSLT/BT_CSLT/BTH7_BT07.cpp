//7. Viết các hàm sau đây :
//a.Hàm kiểm tra một ký tự có phải là ký tự in hoa hay không ?
//b.Hàm kiểm tra một ký tự có phải là ký tự in thường hay không ?
//c.Chương trình nhận vào một chuỗi(string), xuất kết quả chuỗi vừa nhập có bao
//nhiêu ký tự in hoa ? bao nhiêu ký tự in thường ? Lưu ý : sử dụng 2 hàm đã xây
//dựng ở trên
#include <iostream>
#include <string>
using namespace std;
bool check1(char);
bool check2(char);
int main()
{
	string s;
	cout << "Nhap mot chuoi : ";
	getline(cin, s);
	int demInHoa = 0;
	int demThuong = 0;
	for (int i = 0; i < s.length(); i++)
	{

		if (check1(s[i]))
			demInHoa++;
		if (check2(s[i]))
			demThuong++;
	}
	
	cout << s << " co " << demInHoa << " chu in hoa va " << demThuong << " chu in thuong \n";
	system("pause");
	return 0;
}
bool check1(char kiemtra) // Hàm kiểm tra ký tự in hoa
{
	if (((kiemtra >= 'A') && (kiemtra <= 'Z')) )
		return 1; // true
	return 0; // false
}
bool check2(char kiemtra) // Hàm kiểm tra ký tự in thường
{
	if ((kiemtra >= 'a') && (kiemtra <= 'z'))
		return 1; //true
	return 0; //false
}
