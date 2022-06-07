#include<bits/stdc++.h>

using namespace std;

int n,k,c[50],s,d;

void get(){
    int t=0,i;
    for(i=1;i<=k;i++){
        t+=c[i];
    }
    if(t==s) d++;
}

void backtrack(int i){
    for(int j=c[i-1]+1;j<=n-k+i;j++){
        c[i]=j;
        if(i==k) get();
        else backtrack(i+1);
    }
}

int main(){
    while (1){
        cin>>n>>k>>s;
        if(!n&&!k&&!s) break;
        c[0]=0; d=0;
        backtrack(1);
        cout<<d<<endl;
    }
}