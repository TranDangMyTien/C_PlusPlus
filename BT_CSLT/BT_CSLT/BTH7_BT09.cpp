//9. Viết hàm nhận vào 3 số ngày, tháng, năm; trả về số ngày cách ngày đầu tiên trong
//năm.Viết chương trình kiểm tra hàm vừa viết.
//Ví dụ :
//3 giá trị ngày - tháng - năm là 1 - 1 - 2006 thì kết quả là 1.
//3 giá trị ngày - tháng - năm là 25 - 12 - 2006 thì kết quả là 359


#include <iostream>
using namespace std;
bool namNhuan(int nam);
int soNgay(int thang, int nam);
int main() 
{
    int ngay, thang, nam;
    int tongngay = 0;
    cout << "Nhap ngay, thang, nam: ";
    cin >> ngay >> thang >> nam;
    if (nam < 0 || thang < 0 || thang> 12 || ngay < 0 || ngay> 31)
        cout << "Khong hop le!!" << endl;
    else {
        if (thang == 1)
            tongngay = ngay;
        else
            tongngay = 0;
        for (int i = 1; i <= thang - 1; i++)
            tongngay += soNgay(i, nam);
        tongngay += ngay;
        cout << "Tong so ngay la: " << tongngay << endl;
    }
    system("pause");
    return 0;
}
bool namNhuan(int nam) {
    return(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0));
}
int soNgay(int thang, int nam) 
{
    int songay = 0 ;
    switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        songay = 31;
        break;
    case 4: case 6: case 9: case 11:
        songay = 30;
        break;
    case 2:
        if (namNhuan(nam))
            songay = 29;
        else
            songay = 28;
        break;
    }
    return songay;
}



