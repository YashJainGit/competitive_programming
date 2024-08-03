#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;

const int maxn = 1002;

struct p{
    int nx, c, f;
};

int n, m;
vector<vector<p>> a(maxn);
pair<int, int> b = {0, 1};
vector<bool> vis(maxn);
void dfs(int i, int f, int c){
    if (vis[i]){
        return;
    }
    if (i==n-1){
        if ((double)f/c > b.first/b.second){
            b = {f, c};
        }
    }
    vis[i] = true;
    for (int j=0;j<a[i].size();j++){
        dfs(a[i][j].nx, min(f, a[i][j].f), c+a[i][j].c);
    }
    vis[i]  = false;
}
void solve(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int w, x, y, z;
        cin>>w>>x>>y>>z;
        a[w-1].push_back({x-1,y,z});
        a[x-1].push_back({w-1,y,z});
    }
    dfs(0, INT_MAX, 0);
    cout <<((double)b.first/b.second)*1e6 << '\n';
}


int main(){
    if (filein){
        string f="pump";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;

}