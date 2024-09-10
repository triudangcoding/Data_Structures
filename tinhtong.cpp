#include <iostream>
using namespace std;

void mang(int a[], int &n)
{
    cout << "Nhap Vao So Luong Phan Tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int a[100];
    int n;
    int tong = 0;
    mang(a, n);
    for (int i = 0; i <= a[i]; i++)
    {
        if (i % 2 == 0)
        {
            tong += a[i];
        }
        cout << "Tong Cac So Chan La: "<< tong;
    }
}

int main()
{
    int a0, a1, a2, a3, a4;
    int tong;
    int i;

    cout<< "Nhap Vao A, B, C, D: ";

    cin>>a0>>a1>>a2>>a3>>a4;

    if(a0, a1, a2, a3, a4 % 2 == 0)
    {
        a0, a1, a2, a3, a4 = i;
    }

    if(i % 2 == 0)
    {
        tong += i;
    }

    cout<<"Tong Cac So Chan La: " << a0, a1, a2, a3, a4;
}