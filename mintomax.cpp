#include<iostream>
using namespace std;
void nhapmang(int A[], int &n) {
    cout << "nhap N: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
}
void xuatmang(int A[], int n) {
    cout << "xuat danh sach: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
int DoanTangDaiNhat(int A[], int n) {
    int max = 1;  
    int dem = 1;  
    for (int i = 1; i < n; i++) {
        if (A[i] > A[i - 1]) {
            dem++;  
        } else {
            dem = 1; 
        }
        if (dem > max) {
            max = dem; 
        }
    }
    return max;
}

int main() {
    int A[1000], n;     
    nhapmang(A, n);   
    xuatmang(A, n);
    int doDaiMax = DoanTangDaiNhat(A, n);
    cout << "Do dai doan tang lien tuc dai nhat la: " << doDaiMax << endl;
    
}