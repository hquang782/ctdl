#include<bits/stdc++.h>

using namespace std;
int n, m;
vector<int> a[1001];
int chuaxet[1001];
int f, e, kt = 0;
void dfs(int u) {
    chuaxet[u] = false;
    if (u == e) { kt = 1;}
    if (kt == 1) return;
    else
        for (int i = 0;i < a[u].size();i++) {
            int v = a[u][i];
            if (chuaxet[v]) dfs(v);
        }
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 1005; i++) a[i].clear();
        cin >> n >> m;
        for (int i = 0;i < m;i++) {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);

        }

        int k;
        cin >> k;
        while (k--)
        {
            for (int i = 1;i <= n;i++) {
                chuaxet[i] = true;
            }
            kt = 0;
            cin >> f >> e;
            if (f > e) swap(f, e);
            dfs(f);
            if (kt) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        // for(int i=1;i<=n;i++){
        //     cout<<i<<": ";
        //     for(int j=0;j<a[i].size();j++){
                
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
}