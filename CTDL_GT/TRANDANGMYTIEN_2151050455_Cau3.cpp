#include <iostream>
#include <cstring>
using namespace std;

struct Node
{
    char info;
    Node* left; Node* right;
}*root;

void init()
{
    root = NULL;
}

int InsertNode(Node*& p, char x)
{
    if (p == NULL)
    {
        p = new Node;
        p->info = x;
        p->left = NULL;
        p->right = NULL;
    }
    else
    {
        if (p->info == x)
            return 1; // da co node co gia tri x 
        else if (p->info > x)
            return InsertNode(p->left, x);
        else
            return InsertNode(p->right, x);
    }
    return x;
}
void searchStandFor(Node*& p, Node*& q)
{
    if (q->left == NULL)
    {
        p->info == q->info;
        p = q;
        q = q->right;
    }
    else
        searchStandFor(p, q->left);
}
int Delete(Node*& p, char x)
{
    if (p == NULL)
        return 0;
    if (p->info == x)
    {
        Node* q = p;
        if (p->left == NULL)
            p = p->right;
        else if (p->right == NULL)
            p = p->left;
        else
            searchStandFor(q, p->right);
        delete(q);
        return 1;
    }
    if (p->info < x)
        return Delete(p->right, x);
    else
        return Delete(p->left, x);
}
void process()
{
    Node* p = root;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->right;
    }
    cout << endl;
}
void nodecha(Node* t)
{
    if (t != NULL)
    {
        if ((t->left != NULL && t->right == NULL) || (t->left == NULL && t->right != NULL) || (t->left != NULL && t->right != NULL))
            cout << t->info << "  ";
        nodecha(t->left);
        nodecha(t->right);
    }
}
void nodela(Node* t)
{
    if (t != NULL)
    {
        if (t->left == NULL && t->right == NULL)
            cout << t->info << "  ";
        nodela(t->left);
        nodela(t->right);
    }
}

void duyetLNR(Node* p)
{
    if (p != NULL)
    {
        duyetLNR(p->left);
        cout << p->info << " ";
        duyetLNR(p->right);
    }
}

void duyetLRN(Node* p)
{
    if (p != NULL)
    {
        duyetLNR(p->left);
        duyetLNR(p->right);
        cout << p->info << " ";
    }
}

void duyetNLR(Node* p)
{
    if (p != NULL)
    {
        cout << p->info << " ";
        duyetLNR(p->left);
        duyetLNR(p->right);
    }
}
void menu()
{
    cout << "--------------- CAU 3 ---------------\n"
        << "0. Khoi Tao + Them phan tu vao cay nhi phan\n"
        << "1. Xuat cay nhi phan\n"
        << "2. Xoa phan tu \n"
        << "3. Liet ke cac node la, node cha\n"
        << "4. Duyet cay theo LNR\n"
        << "5. Duyet cay theo LRN\n"
        << "6. Duyet cay theo NLR\n"
        << "7. Thoat!\n" << endl;
}

int main()
{
    int chon;

    menu();
    do {
        cout << "Chon tu 0-7: ";
        cin >> chon;
        switch (chon)
        {
        case 0:
        {
            init();
            char c[25] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' ,'i' , 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
            for (int i = 0; i < strlen(c) - 2; i++)
            {
                cout << "...Dang tao node: " << c[i] << endl;
                InsertNode(root, c[i]);
            }
            break;
        }
        case 1:
            cout << "Cac phan tu cua cay nhi phan tim kiem:\n";
            process();
            break;
        case 2:
        {
            cout << "Nhap phan tu can xoa: ";
            char z; cin >> z;
            Delete(root, z);
            cout << "Danh sach sau khi xoa: ";
            duyetNLR(root); cout << endl;
            process();
            break;
        }
        case 3:
        {
            cout << "\nCac node cha: ";
            nodecha(root);

            cout << "\nCac node la: ";
            nodela(root);
            process();
            break;
        }
        case 4:
        {
            cout << "\nLNR | Danh sach sau khi nhap: ";
            duyetLNR(root); cout << endl;
            process();
            break;
        }
        case 5:
        {
            cout << "LRN | Danh sach sau khi nhap: ";
            duyetLRN(root); cout << endl;
            process();
            break;
        }
        case 6:
        {
            cout << "NLR | Danh sach sau khi nhap: ";
            duyetNLR(root); cout << endl;
            process();
            break;
        }
        case 7:
            break;
        }
    } while (chon != 7);
    system("pause");
    return 0;
}