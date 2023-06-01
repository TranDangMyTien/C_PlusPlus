#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int n;
	const int MAX = 20;
	int arr[MAX];
	int count = 0;
	int brr[MAX];
	srand(time(0));
	while (true)
	{
		cout << "Nhap vao so luong phan tu : ";
		cin >> n;
		if (n <= MAX && n >= 0);
		break;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 5 == 0)
		{
			brr[count] = 1; 
			count++;
		}
	}
	cout << "Co " << count << " so la boi cua 5\n";
	cout << "Bao gom : ";
	for (int i = 0; i < count; i++)
		cout << endl << "\t" << arr[brr[i]] << " ";
	cout << endl;
	system("pause");
	return 0;
}