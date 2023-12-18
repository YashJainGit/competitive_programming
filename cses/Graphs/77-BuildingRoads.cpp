#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    bool v[n+1]={};
    vector<int> adj[n+1];
    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b; 
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> s;
    vector<int> ans;
    for (int i=1; i<=n; i++){
        if (!v[i]){
            s.push_back(i);
            while (s.size()!=0){
                int cur = s.back();
                s.pop_back();
                if (v[cur]){
                    continue;
                }
                v[cur] = true;

                for (int j=0; j<adj[cur].size(); j++){
                    s.push_back(adj[cur][j]);
                } 
            }
            ans.push_back(i);
        }
    }

    cout << ans.size()-1 << '\n';
    for (int i=1; i<ans.size(); i++){
        cout << 1 << ' ' << ans[i] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    solve();
    return 0;
}