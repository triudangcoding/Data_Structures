#include <iostream>
using namespace std;
bool sospecial(int n)
{
    int tongchan = 0;
    int tongle = 0;
    while (n > 0)
    {
        int So = n % 10;
        if (So % 2 == 0)
        {
            tongchan += So;
        }
        else
        {
            tongle += So;
        }
        n /= 10;
    }
    return tongchan == tongle;
}

int main()
{
    int a;
    int b;
    cout << "Nhap Vao So A va B";
    cin >> a >> b;

    int dem = 0;
    for (int i = a; i <= b; i++)
    {
        if (sospecial(i))
            dem++;
    }

    cout << "So Luong Cac So Dac Biet La: " << endl;
    cout << " " << a << "\n";
    cout << " " << b << "\n";
    cout << " " << dem << "\n";
    return 0;
}