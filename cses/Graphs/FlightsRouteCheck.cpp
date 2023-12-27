#include <bits/stdc++.h>
using namespace std;

const bool testcases = true;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> adj[n];
    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

