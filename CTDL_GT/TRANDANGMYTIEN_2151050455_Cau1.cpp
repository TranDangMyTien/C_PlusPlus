#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct Node
{
	int info;
	Node* next, * previous;
	int madonhang, tongsp;
	float tonggtridonhang;
	string ngaydh, tenkh, trangthai;
};

Node dh[100];

Node* first, * last;
void init()
{
	first = NULL;
	last = NULL;
}
// Xuat danh sach
void Process_list()
{
	Node* p;
	for (int i = 1; i <= p; i++)
	{

	}
}
// Tim kiem 
Node* Search(int x)
{
	Node* p;
	p = first;
	while (p != NULL && p->info != x)
	{
		p = p->next;
	}
	return p;
}
// Them phan tu vao dau danh sach
void Insert_first(int x)
{
	Node* p;
	p = new Node;
	p->info = x;
	p->next = first;
	p->previous = NULL;
	if (first != NULL)
	{
		first->previous = p;
	}
	else // Danh sach rong
	{
		last = p;
	}
	first = p;
}

// Tim va xoa phan tu duoc tim thay
void SearchAndDelete(int x) {
	int z;
	cout << "Nhap vao ma don hang hoac ngay don hang: ";
	cin >> z;
}

void Sum(int x) {

}

void input() {

}
int main()
{
	const int max = 100;
	Node dh[max];
	int x, choice;
	Node* p;
	system("cls");
	cout << "------------------BAI TAP 3A CHUONG 2 DSLK DOI-----------------" << endl;
	cout << "1. Khoi tao danh sach rong " << endl;
	cout << "2. Xuat cac phan tu trong danh sach " << endl;
	cout << "3. Tim mot phan tu trong danh sach " << endl;
	cout << "4. Them mot phan tu vao dau danh sach " << endl;
	cout << "5. Tim kiem don hang " << endl;
	cout << "6. Nhap don hang " << endl;
	cout << "7. Thoat khoi chuong trinh! " << endl;
	do
	{
		cout << "Moi ban chon: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			init();
			cout << "Khoi tao danh sach rong thanh cong! " << endl;
			break;
		case 2:
			cout << "Danh sach: ";
			Process_list();
			break;
		case 3:
			cout << "Vui long nhap x: ";
			cin >> x;
			p = Search(x);
			if (p == NULL)
			{
				cout << "Khong tim thay x trong danh sach! " << endl;
			}
			else
				cout << "Tim thay x trong danh sach! " << endl;
			break;
		case 4:
			//			cout << "Vui long nhap x ma ban muon tim de xoa: ";
			//			cin >> x;
			SearchAndDelete(x);
			Process_list();
			break;
		case 6:
			int soluong;
			cout << "Ban muon nhap bao nhieu don hang: ";
			cin >> soluong;
			for (int i = 1; i <= soluong; i++)
			{
				cout << "Nhap ma don hang: ";
				cin >> dh[i].madonhang;
				cin.ignore(1);
				cout << "Nhap ngay don hang (28-12-2002 > 28122002): ";
				getline(cin, dh[i].ngaydh);
				cout << "Nhap tong gia tri don hang: ";
				cin >> dh[i].tonggtridonhang;
				cout << "Nhap tong san pham: ";
				cin >> dh[i].tongsp;
				cin.ignore(1);
				cout << "Nhap ten khach hang: ";
				getline(cin, dh[i].tenkh);
				cin.ignore(1);
				cout << "Nhap trang thai don hang: ";
				getline(cin, dh[i].trangthai);
			}
			break;
		case 7:
			cout << "Ket thuc chuong trinh! " << endl;
			break;
		default:
			break;
		}
	} while (choice != 7);
	system("pause");
	return 0;
}
