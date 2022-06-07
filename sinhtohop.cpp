#include<iostream>

using namespace std;

bool check = true;
void get(int a[], int n, int k) {
    int i = k;
    while (i > 0 && a[i] == n - k + i) i--;
    if (i > 0) {
        a[i]++;
        for (int j = i + 1;j <= k;j++) {
            a[j] = a[i] + j - i;
        }
    }
    else check = false;
}

void out(int a[], int k) {
    for (int i = 1;i <= k;i++) {
        cout << a[i] ;
    }
    cout << ' ';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        for (int i = 1;i <= k;i++) a[i]=i;
        check =true;
        while (check) {
            out(a, k);
            get(a, n, k);
        }
        cout<<endl;
    }
}