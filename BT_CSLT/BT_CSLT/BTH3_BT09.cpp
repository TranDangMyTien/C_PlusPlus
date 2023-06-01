//9. Viết chương trình có chức năng như máy tính cầm tay(sử dụng switch)
//- Nhận vào 2 số nguyên và 1 phép toán(+-*/ )
//- Xuất ra màn hình kết quả tương ứng.
//Lưu ý : phép chia cho 0 thì phải thông báo là lỗi chia 0. Phép chia thực hiện lấy
//kết quả có 2 chữ số thập phân.
//Giao diện chương trình khi thực hiện được mô phỏng ở 3 ví dụ dưới đây.
//Ví dụ 1 :
//    Nhap 2 so nguyen va 1 phep toan : 1 3 /
//    1 / 3 = 0.33
//    Ví dụ 2 :
//    Nhap 2 so nguyen va 1 phep toan : 2 0 /
//    Loi chia 0
//    Ví dụ 3 :
//    Nhap 2 so nguyen va 1 phep toan : 3 5 +
//    3 + 5 = 8

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    char phepTinh;
    double num1, num2;

    cout << "Nhap 2 so nguyen va 1 phep toan ( + , - , * , / ) : ";
    cin >> num1 >> phepTinh  >> num2 ;

    switch (phepTinh)
    {
    case '+':
        cout << "Ket qua la: " << fixed << setprecision(2) << num1 + num2  << endl;
        break;

    case '-':
        cout << "Ket qua la: " << fixed << setprecision(2) << num1 - num2 << endl;
        break;
    case '*':
        cout << "Ket qua la: " << fixed << setprecision(2) << num1 * num2 << endl;
        break;

    case '/':
        if (num2 == 0)
        {
            cout << " Loi chia cho 0 " << endl;
        }
        else
        {
            cout << "Ket qua la: " << fixed << setprecision(2) << num1 / num2 << endl;
        }
        break;

    default:
        cout << " Phep toan khong the thuc hien";
        break;
    }
    return 0;

}