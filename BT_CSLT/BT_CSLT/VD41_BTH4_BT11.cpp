#include<iostream>
#include<cmath>
using namespace std;
int binToDec(long long);
int main()
{
	// Hệ 2 là bin
	// Hệ 10 là dec
	// Hệ 2 sang hệ 10 vd 1101=>2^3+2^2+2^0=13
	long long bin;
	cout << "Nhap so nhi phan : "; 
	cin >> bin; // bin=1101
	int BienDoi = binToDec(bin);
	cout << "So thap phan la : " << BienDoi << endl;
	system("pause");
	return 0;
}
int binToDec(long long Bin)
{
	int mu = 0;
	int dec = 0;
	while ( Bin > 0)// 1101 ; 110 ; 11 ;1
	{
		dec += ((Bin % 10) * pow(2, mu)) ;// dec = dec + (Bin % 10)*pow(2,mu) ; dec=0 + (1 *2^0)= 1
		// dec = 1 + (0*2^1) = 1 ; dec = 1 + (1*2^2)= 5 ; dec=5+(1*2^3)=13
		++mu; // mu = 0+1=1 ; mu= 1+1=2 ; mu=2+1=3
		Bin /= 10; // Bin = 110 ; Bin=11 ; Bin=1
	}
	return dec;
}


