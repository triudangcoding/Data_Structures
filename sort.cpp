
#include <iostream>
#include <string>


int main()
{
    // Tìm Max Và Duyệt Qua Mảng
    // int max = 0;
    // const int N = 8;
    // int a[N] = {89, 90, 70, 91, 100, 69, 71, 102};

    // for(int i = 0; i < N; i++)
    // {
    //         if(a[i] > max)
    //             max = a[i];
    // }
    // std::cout<<"Max :" << max << "\n";

    // Selection Sort
    // Tim Phan Tu Be
    const int N = 8;
    int a[N] = {89, 90, 70, 91, 100, 69, 71, 102};

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (a[i] > a[j])
            {
                int sort = a[i];
                a[i] = a[j];
                a[j] = sort;
            }
        }
    }
    std::cout<<"Max: " << a[N - 1] << "\n";
    return 0;
    // Tim Phan Tu Lon Nhat
}