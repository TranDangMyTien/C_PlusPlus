#include <iostream>
using namespace std;
int main()
{
	const int MAX = 6;
	int arr[MAX];
	int chan = 0, countchan = 0;
	int le = 0, countle = 0;
	cout << "Nhap vao 6 so nguyen : ";
	for (int i = 0; i < MAX; i++)
		cin >> arr[i];
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] % 2 == 0)
		{
			countchan ++;
			chan += arr[i];
		}
		else
		{
			countle++;
			le += arr[i];
		}
	}
	cout << "Trung binh cong so chan la : " << (double)chan / countchan << endl;
	cout << "Trung binh cong so chan la : " << (double)le / countle << endl;
	system("pause");
	return 0;
}