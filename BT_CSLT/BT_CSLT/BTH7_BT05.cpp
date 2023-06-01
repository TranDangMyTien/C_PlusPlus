//5. Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết :
//a.Hàm hoán đổi giá trị 2 số nguyên.
//b.Hàm sắp xếp 2 số nguyên tăng dần (sử dụng lại hàm hoán đổi ở câu a)
#include <iostream>
using namespace std;
void hoanvi(int& a, int& b);
void sapxep(int a, int b);
int main()
{
    int a, b;
    cout <<"Nhap 2 so a, b: ";
    cin >> a >> b ;
    cout << "So a ban dau da nhap la "<< a << "\nSo b ban dau da nhap la " << b;
    hoanvi(a, b);
    cout << endl;
    cout << "Sau khi goi ham hoan vi \n";
    cout << "a co gia tri " << a << " va b co gia tri " << b << endl;
    sapxep(a, b);
    
    system("pause");
    return 0;
}

void hoanvi(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sapxep(int a, int b)
{
    if (a > b)
        hoanvi(a, b);  
    cout << "Sap xep tang dan : " << a << " " << b << endl;
}

