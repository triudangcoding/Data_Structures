#include<iostream>
using namespace std;

void nhapmang(int A[], int &n)
{
    cout << "Nhap Vao Mang Cua Ban: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cin >> A[i];
    }
}

int main()
{
    int A[100];
    int n = 0;
    nhapmang(A, n);
    int tong = 0;
    for (int i = 0; i <= n; i++)
    {
        if (A[i] % 2 == 0)
        {
            tong += A[i];
        }
    }
    cout << "Ket Qua Cua Ban La: " << tong;
    return 0;
}