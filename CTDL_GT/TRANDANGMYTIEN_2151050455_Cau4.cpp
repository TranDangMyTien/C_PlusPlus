#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

#define max 5
int A[max][max];
int n;
char vertex[max];

struct Node
{
	int info;
	Node* link;
};
Node* sp;
Node* front, * rear;

// Start Stack
void Initstack()
{
	sp = NULL;
}
int isEmptyS()
{
	if (sp == NULL)
		return 1;
	return 0;
}
void PushS(int x)
{
	Node* p = new Node;
	p->info = x;
	p->link = sp;
	sp = p;

}
int PopS(int& x)
{
	if (sp != NULL)
	{
		Node* p = sp;
		x = p->info;
		sp = p->link;
		delete p; return 1;
	}
	return 0;
}
// End Stack

// Start Queue
void InitQ()
{
	front = NULL;
	rear = NULL;
}
int isEmptyQueue()
{
	if (front == NULL)
		return 1;
	return 0;
}
void PushQ(int x)
{
	Node* p = new Node;
	p->info = x;
	p->link = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->link = p;
	rear = p;
}
int PopQ(int& x)
{
	if (front != NULL)
	{
		Node* p = front;
		front = p->link;
		x = p->info;
		if (front == NULL)
		{
			rear = NULL;
		}
		delete p;
		return 1;
	}
	return 0;
}

void InitG()
{
	n = 0;
}
void inputGraphFormText()
{
	string line;
	ifstream myfile;
	myfile.open("text.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> n;
			for (int i = 0; i < n; i++)
				myfile >> vertex[i];

			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
					myfile >> A[i][j];
			}
		}
	}
}
void outputGraph()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Dinh " << i << " (" << vertex[i] << "): ";
		for (int j = 0; j < n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << vertex[a[i]] << " ";
}
//Duyet BFS (Queue)
int C[100], bfs[100];
int nbfs = 0;
void InitC()
{
	for (int i = 0; i < n; i++)
		C[i] = 1;
}
void BFS(int v)
{
	int w, p;
	PushQ(v);
	C[v] = 0;
	while (front != NULL)
	{
		PopQ(p);
		bfs[nbfs] = p;
		nbfs++;
		for (w = 0; w < n; w++)
			if (C[w] && A[p][w] == 1)
			{
				PushQ(w);
				C[w] = 0;
			}
	}
}
//Duyet DFS ( Stack)
int dfs[100];
int ndfs = 0;
void DFS(int s)
{
	PushS(s);
	dfs[ndfs] = s;
	ndfs++;
	C[s] = 0;
	int v = -1, u = s;
	while (isEmptyS() == 0)
	{
		if (v == n)
			PopS(u);
		for (v = 0; v < n; v++)
			if (A[u][v] != 0 && C[v] == 1)
			{
				PushS(u);
				PushS(v);
				dfs[ndfs] = v;
				ndfs++;
				C[v] = 0;
				u = v;
				break;
			}
	}

}

//PRIM
int E1[max], E2[max], wE[max], nE = 0;
int T1[max], T2[max], wT[max], nT = 0;
int TonTai(int d, int D[], int nD)
{
	for (int i = 0; i < nD; i++)
		if (D[i] == d)
			return 1;
	return 0;
}
void XoaViTriE(int i)
{
	for (int j = i; j < nE; j++)
	{
		E1[j] = E1[j + 1];
		E2[j] = E2[j + 1];
		wE[j] = wE[j + 1];
	}
	nE--;
}
void XoaCanhE(int u, int v)
{
	for (int i = 0; i < nE; i++)
		if (E1[i] == u && E2[i] == v)
		{
			XoaViTriE(i);
			break;
		}
}
void prim(int s) // s la dinh bat dau
{
	int u = s, min, i, d1, d2;
	while (nT < n - 1)
	{
		for (int v = 0; v < n; v++)
			if (A[u][v] != 0)
				if (TonTai(v, T2, nT) == 0)
				{
					E1[nE] = u; E2[nE] = v;
					wE[nE] = A[u][v]; nE++;
				}
		for (i = 0; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
			{
				min = wE[i]; d1 = E1[i];
				d2 = E2[i]; break;
			}
		for (; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
				if (min > wE[i])
				{
					min = wE[i];
					d1 = E1[i];
					d2 = E2[i];
				}
		T1[nT] = d1; T2[nT] = d2;
		wT[nT] = A[d1][d2];
		A[d1][d2] = 0; A[d2][d1] = 0;
		nT++;
		XoaCanhE(d1, d2);
		u = d2;
	}
}
void outputPrim()
{
	int tong = 0;
	for (int i = 0; i < nT; i++)
	{
		cout << endl << "(" << T1[i] << "," << T2[i] << ") = " << wT[i];
		tong += wT[i];
	}
	cout << "\n Tong = " << tong;
}
int main()
{
	int choice, x;
	system("cls");
	cout << "--------------- CAU 4 ---------------" << endl;
	cout << "1. Khoi tao MA TRAN KE rong " << endl;
	cout << "2. Nhap MA TRAN KE tu file text" << endl;
	cout << "3. Xuat MA TRAN KE " << endl;
	cout << "4. Duyet do thi theo chieu rong BFS - DSLK" << endl;
	cout << "5. Duyet do thi theo chieu sau DFS - DSLK" << endl;
	cout << "6. Tim khung cay nho nhat PRIM" << endl;
	cout << "7. Thoat" << endl;
	do
	{
		cout << " Vui long chon so de thuc hien:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			InitG();
			cout << " Ban vui khoi tao MA TRAN KE rong thanh cong ! " << endl;
			break;
		case 2:
			inputGraphFormText();
			cout << " Ban cua nhap MA TRAN KE tu file: " << endl;
			outputGraph();
			break;
		case 3:
			outputGraph();
			break;
		case 4:
			InitQ();
			InitC();
			cout << " Vui long nhap dinh xuat phat :";
			cin >> x;
			BFS(x);
			cout << " Thu tu dinh sau khi duyet BFS: " << endl;
			output(bfs, n);
			cout << endl;
			break;
		case 5:
			Initstack();
			InitC();
			cout << " Vui long nhap dinh xuat phat :";
			cin >> x;
			DFS(x);
			cout << " Thu tu dinh sau khi duyet DFS: " << endl;
			output(dfs, n);
			cout << endl;
			break;
		case 6:
			cout << " Vui long nhap dinh xuat phat :";
			cin >> x;

			prim(x);
			cout << "Khung cay nho nhat: ";
			outputPrim();
			cout << endl;
			break;
		case 7:
			cout << "Goodbye .....!" << endl;
			break;
		default:
			break;
		}
	} while (choice != 7);
	system("pause");
	return 0;
}