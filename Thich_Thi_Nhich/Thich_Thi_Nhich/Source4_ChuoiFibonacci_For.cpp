//Chương trình hiển thị chuỗi Fibonacci sử dụng vòng lặp For.
#include <iostream>
using namespace std;
int main()
{
    int count, first_term = 0, second_term = 1, next_term ;
    do {
        cout << "Nhập vào số lượng các số trong chuỗi Fibonacci" << endl;
        cin >> count;
        if (count <= 0)
            cout << "Nhap sai nhap lai so luong ! ";
    } while (count <= 0);
    cout << count << " số đầu tiên trong dãy Fibonacci là: " << endl;
    for (int i = 0; i < count; i++)
    {
        if (i <= 1)
            next_term = i; 
        else
        {
            next_term = first_term + second_term; 
            first_term = second_term; 
            second_term = next_term;
        }
        cout << next_term << endl;
    }
    cout << "\n----------------------------\n";
}