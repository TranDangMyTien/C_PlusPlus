//4. Viết các hàm sau đây :
//a.Hàm kiểm tra một ký tự có phải là ký tự số hay không ?
//b.Hàm kiểm tra một ký tự có phải là ký tự chữ cái hay không ?
//c.Chương trình nhận vào một chuỗi(string), xuất kết quả chuỗi vừa nhập có bao
//nhiêu ký tự số ? bao nhiêu ký tự chữ ? Lưu ý : sử dụng 2 hàm đã xây dựng ở trên.


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
	int demSo = 0;
	int demChu = 0;
	for (int i = 0; i < s.length(); i++)
	{

		if (check2(s[i]))
			demSo++;
		if (check1(s[i]))
			demChu++;
	}
	/*char kiemtra;
	cout << "Ban nhap du lieu : ";
	cin >> kiemtra;
	if (check1(kiemtra) == true)
		cout << "Du lieu nhap vao la ky tu chu ! \n";
	else if (check2(kiemtra) == true)
		cout << "Du lieu nhap vao la ky tu so ! \n";
	else
		cout << "Du lieu nhap vao khong la ky tu chu va ky tu so ! \n";*/
	cout << s << " co " << demSo << " chu so va " << demChu << " chu cai \n";
	system("pause");
	return 0;
}
bool check1(char kiemtra ) // Hàm kiểm tra ký tự chữ
{
	if (((kiemtra >= 'A') && (kiemtra <= 'Z')) || ((kiemtra >= 'a') && (kiemtra <= 'z')))
		return 1; // true
	return 0; // false
}
bool check2(char kiemtra) // Hàm kiểm tra ký tự số
{
	if ((kiemtra >= '0') && (kiemtra <= '9'))
		return 1; //true
	return 0; //false
}
