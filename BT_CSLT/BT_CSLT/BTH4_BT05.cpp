//Viết chương trình nhận vào 1 số nguyên dương n.Xuất ra màn hình số đảo
//ngược của n.Ví dụ n là 352 thì số đảo ngược của nó là 253.
//Lưu ý : thực hiện việc kiểm tra giá trị n ban đầu nhập vào.Nếu n <= 0 thì thông
//báo nhập sai và cho phép nhập lại cho đến khi nào n > 0 như đề toán yêu cầu thì
//mới dừng việc nhập để tính toán.

#include <iostream>
using namespace std;
int main() 
{
    int n, t;
    int r = 0;
    do
    {
        cout << "Nhap so nguyen n : ";
        cin >> n;
        if (n <= 0)
        cout << "Nhap sai hay nhap lai (n > 0)\n";
    } while (n <= 0);
    while (n > 0)
    {  // vd n=345
        t = n % 10;    // t=5   ; t=4  ; t=3
        r = r * 10 + t;  // r=5  ; r= 5*10 + 4 = 54 ; r= 54*10 + 3 = 543
        n = n / 10;  // n=34  ; n=3 ; n=0 dừng
    }
    cout << "So dao nguoc cua " << n << " la :"<< r << endl;
	system("pause");
	return 0;
}