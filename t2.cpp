#include<bits/stdc++.h>
//
using namespace std;

int a[15][15];
int n, ok;
char b[1000];
void in(int k) {
    for (int i = 0;i < k;i++) {
        cout << b[i];
    }
    cout << " ";
}

void quaylui(int i, int j, int k) {
    if (i == n - 1 && j == n - 1) {
        in(k);
        ok = 1; return;
    }
    if (i + 1 < n && a[i + 1][j] == 1) {
        b[k] = 'D';
        a[i + 1][j] = 0;
        quaylui(i + 1, j, k + 1);
        a[i + 1][j] = 1;
    }
    if (j + 1 < n && a[i][j + 1] == 1) {
        b[k] = 'R';
        a[i][j + 1] = 0;
        quaylui(i, j + 1, k + 1);
        a[i][j + 1] = 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) cin >> a[i][j];
        }
        ok = 0;
        if (a[0][0] && a[n - 1][n - 1])
            quaylui(0, 0, 0);
        if (ok)
            cout << endl;
        else cout << -1 << endl;
    }
}
// 2

// 4

// 1  0  0  0

// 1  1  0  1 

// 0  1  0  0 

// 1  1  1  1

// 5

// 1 0 0 0 0

// 1 1 1 1 1

// 1 1 0 0 1

// 0 1 1 1 1

// 0 0 0 1 1