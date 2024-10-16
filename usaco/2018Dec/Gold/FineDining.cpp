#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=false;
const string f="stacking";
const int nx = 5e4+10;

int n, m, k;
vector<vector<int>> dp(nx, vector<int>(2, -1));

vector<vector<pair<int, int>>> tr(nx);
vector<int> dp(nx);

pair<int, bool> dfs(int i, bool h){
    if (dp[i][h]!=-1){
        return {dp[i][h], h};
    }
}

void solve(){
    cin >> n >> m >> k;

    
    for (int i=0; i<m; i++){
        int a, b, t;
        cin >> a >> b >> t;

        tr[a-1].emplace_back(b-1, t);
        tr[b-1].emplace_back(a-1, t);

    }

    
}  

int main(){
    if (filein){
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