#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> p(n);
    vector<int> s(n);
    for (int i=0; i<n; i++){
        p[i] = i;
        s[i] = 1;
    }
    int comps=n;
    int maxs=1;
    for (int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        int pu=p[u], pv=p[v];
        while (pu!=p[pu])
            pu=p[pu];   
        while (pv!=p[pv])
            pv=p[pv];   

        if (pu!=pv){
            if (s[pu]<s[pv]) swap(pu, pv);
            p[pv] = pu;
            s[pu] += s[pv];
            maxs=max(maxs, s[pu]);
            comps--;
        }
        cout << comps << ' ' << maxs << '\n';

    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}