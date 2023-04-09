#include<iostream>
using namespace std;
#define MAX 100
void nhap(int arr[],int n);
void xuat(const int arr[],int n);
void sapXepTangDan(int arr[], int n);
void hoanDoi(int& a, int& b);
int main() {
    int n;
    int arr[MAX];
    do
    {
        cout << "Nhap so luong phan tu cho mang : ";
        cin >> n;
        if (n <= 0 || n > MAX)
        {
            cout << "Nhap so luong phan tu mang khong hop le !\n";
            /*system("pause");*/
        }
    } while (n <= 0 || n > MAX);
    nhap(arr, n);
    sapXepTangDan(arr,n);
    cout << "Mang sap xep theo chieu tang dan la : ";
    xuat(arr, n);
    cout << endl;
    system("pause");
    return 0;
}
void nhap(int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        cout << "Nhap gia tri cho phan tu thu " << i + 1 << " : arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void xuat(const int arr[], int n)
{
    for (int i = 0; i < n; i++) 
    {
        if (i == n - 1)
            cout << arr[i] << " ";
        else
            cout << arr[i] << " , ";
    }
}
void sapXepTangDan(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; i++)
        {
            if (arr[i] > arr[j])
                hoanDoi(arr[i], arr[j]);
        }
    }
}
void hoanDoi(int& a, int& b)
{
    int tam;
    tam = a;
    a = b;
    b = tam;
}