// BTH4_BT09
#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "Nhap n1, n2 ( n1 < n2 ): ";
	cin >> n1 >> n2;
	while (true)
	{
		if (n1 > n2 || n2 < 0)
		{
			cout << "Ban nhap sai roi, nhap lai: ";
			cin >> n1 >> n2;
			continue;
		}

		else if (n1 > 10)
		{
			cout << "Khong co uoc cua 10 trong pham vi tu " << n1 << " den " << n2 << endl;
		}
		else
		{
			cout << "Thua so nguyen to cua 10 trong khoang tu " << n1 << " den " << n2 << endl;
			for (int i = n1; i <= n2; i++)
			{
				if (10 % i == 0)
				{
					cout << i << " ";
				}
			}
		}
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}