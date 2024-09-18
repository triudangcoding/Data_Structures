void xuat_mang(int A[100][100], int d, int c) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            if (A[i][j] < 10)
                cout << "0";
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

main() {
    int n = 5, A[100][100]; cin >> n;
    int d = n / 2 + 1, c = n / 2;
    for (int i = 1; i <= n * n; i++) {
        d--; c++;
        if (i >= n && (i - 1) % n == 0) { d++; c++; }
        if (d < 0) d = d + n;
        if (c >= n) c = c - n;
        A[d][c] = i;
    }
    xuat_mang(A, n, n);
}
