#include<bits/stdc++.h> 
using namespace std;


void sinh(int a[], int n, int& kt) {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1]) i--;
    if (i > 0) {
        int k = n;
        while (a[i] > a[k]) k--;
        swap(a[i], a[k]);
        int l = i + 1, r = n;
        while (l <=r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
    else kt = 0;
}

void out(int a[], int n) {
    for (int i = 1;i <= n;i++) {
        cout << a[i];
    }
    cout << ' ';
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, kt = 1;
        cin >> n;
        int a[n + 1];int k =1;
        for (int i = 1;i <= n;i++) {a[i] = k;k++;}
        kt = 1;
        while (kt) {
            out(a, n);sinh(a, n, kt);
        }
        cout << endl;
    }
}