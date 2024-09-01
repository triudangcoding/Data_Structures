#include <iostream>
using namespace std;

bool uoc(int n)
{
    int tong = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            tong += i;
        }
    }
    return tong == n;
}

int main()
{
    int n;
    cout << "Nhap Vao So N: ";
    cin >> n;
    if (uoc(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
