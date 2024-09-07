#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=true;
const string f="atlarge";
const int maxn = 5001;

struct rect{
    ll x, y;
};

int n, k;
vector<vector<int>> tr;
vector<vector<int>> t2;
vector<bool> vis;
vector<int> mn_ex;

int root(int i){
    vis[i] = true;
    if (tr[i].size()==1 && i!=k-1){
        mn_ex[i] = 0;
        return 0;
    }
    int mn=INT_MAX;
    for (int j=0; j<tr[i].size(); j++) {
        if (!vis[tr[i][j]]){
            t2[i].push_back(tr[i][j]);
            mn = min(mn, root(tr[i][j]));
        }
    }
    mn++;
    mn_ex[i] = mn;
    return mn;
}

int dfs(int i, int d){
    if (d>=mn_ex[i]){
        return 1;

    }
    int n=0;
    for (int j=0; j<t2[i].size(); j++){
        n+=dfs(t2[i][j], d+1);
    }
    return n;
}

void solve(){
    cin >> n >> k;
    tr.resize(n, vector<int>());
    t2.resize(n, vector<int>());
    vis.resize(n, false);
    mn_ex.resize(n, -1);

    for (int i=0; i<n-1; i++){
        int x, y;
        cin >> x >> y;

        tr[x-1].push_back(y-1);
        tr[y-1].push_back(x-1);
    }

    root(k-1);
    cout << dfs(k-1, 0) << '\n';
    





}  


int main(){
    if (filein){
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(50);
    }
    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}