#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> v;
int dfs(int i){

}
void solve(){
    int n, m;
    cin >> n >> m;
    adj.resize(n);
    fill(dp.begin(), dp.end(), -1);

    for (int i=0 ; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a-1].push_back(b-1);
    }

    int mn=INT_MAX;
    for (int i=1; i<=n; i++){

        mn = min(mn, dfs(i));
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    solve();
    return 0;
}