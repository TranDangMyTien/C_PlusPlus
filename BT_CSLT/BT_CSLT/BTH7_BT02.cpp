//2. Viết hàm tìm ước chung lớn nhất của 2 số nguyên dương bằng thuật giải Euclid.
//Thuật giải Euclid :
//-Nhận vào : 2 số nguyên dương m và n.
//- Trả về : ước chung lớn nhất của m và n.
//- Thuật giải :
//o Bước 1 : nếu n = 0 thì kết quả là m và kết thúc.Ngược lại sang bước 2.
//o Bước 2 : tính số dư r của phép chia m cho n.
//o Bước 3 : gán n cho m, r cho n.Quay lại bước 1.
//Viết chương trình nhận vào 1 phân số(gồm tử số và mẫu số), xuất kết quả rút gọn
//của phân số(dùng hàm ước chung lớn nhất vừa xây dựng).

#include <iostream>
using namespace std;

int UCLN(int , int );
//int BCNN(int , int );
int main()
{
    int tuso, mauso;
    cout << "Tu so : ";
    cin >> tuso;
    do
    {
        cout << "Mau so (#0) : ";
        cin >> mauso;
    } while (mauso == 0);
    int usc = UCLN(tuso, mauso);
    if (usc != 0)
    {
        tuso /= usc;
        mauso /= usc;
    }
    cout << "Phan sp sau khi rut gon la : " << tuso << " / " << mauso << endl;
    system("pause");
    return 0;
}
int UCLN(int m, int n)
{
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
//int BCNN(int m, int n)
//{
//    int result;
//    result = m * n / UCLN(m, n);
//    return result;
//}

