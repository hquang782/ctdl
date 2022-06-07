#include<bits/stdc++.h>

using namespace std;

void xuly(int n){
    queue<long long > q;
    q.push(1);
    while(n--){
        long long x= q.front(); q.pop();
        cout<<x<<" ";
        q.push(x*10);
        q.push(x*10+1);
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        xuly(n);
        cout<<endl;
    }
}