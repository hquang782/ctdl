#include<bits/stdc++.h>
//
using namespace std;

int a[100][100];

int c=0;int n,m;
void quaylui(int i,int j){
    if(i==n-1&&j==m-1){
        c++; return;
    }
    if(i+1<n){
        quaylui(i+1,j);
    }
    if(j+1<m){
        quaylui(i,j+1);
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        c=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        quaylui(0,0);
        cout<<c<<endl;
    }
}
