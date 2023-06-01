#include <iostream>
#include <stdio.h>
using namespace std;

int main13()
{
    int n, max = INT_MIN, min = INT_MAX, sum = 0;
    char input;
    cout << "Nhap day so nguyen lien tuc va ket thuc bang to hop phim Ctrl + Z: ";
    cin >> n;

    do {
        int dem = n % 10;
        if (max < dem)
            max = dem;

        if (min > dem)
            min = dem;

        n = n / 10;
        sum += dem;
    } while (n > 0);
    while (1) {
        input = getchar();
        if (input == 26) {
            cout << max << endl;
            cout << min << endl;
            cout << sum;
            break;
        }
    }
    return 0;
}