#include<bits/stdc++.h>
using namespace std;

void qhd(int a[],int n){
    int s=0,e=0;
    for(int i=0;i<n;i++){
        e=max(a[i],e+a[i]);
        s=max(s,e);
    }
    cout<<s;
}

int main() {
    int t, n,a[1000];
    cin >> t;
    while (t--) {
        cin >> n ;
        for(int i=0;i<n;i++) cin>>a[i];
        qhd(a,n);
    }
}
// 1
// 8
// -2 -5 6 -2 -3 1 5 -6