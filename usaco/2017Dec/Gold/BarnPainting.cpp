#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const ll mll = __LONG_LONG_MAX__;
const bool testcases=false;
const bool filein=true;
const string f="barnpainting";
const int md = 1e9+7;
const int mx = 1e5+10;

int n, k;
vector<vector<int>> g(mx);
vector<int> c(mx, -1);
vector<bool> v(mx, 0);
vector<vector<ll>> dp(mx, vector<ll>(3, -1));

ll dfs(int i, int cl){
    if (dp[i][cl]!=-1){
        return dp[i][cl];
    }
    if (c[i]!=-1 && cl!=c[i]){
        dp[i][cl] = 0;
        return 0;
    }
    if (i!=0 && g[i].size()==1){
        dp[i][cl] = 1;
        return 1;
    }
    v[i] = true;
    ll ans=1;
    for (int j=0; j<g[i].size(); j++){
        if (!v[g[i][j]]){
            ll cur = (dfs(g[i][j], (cl+1)%3) + dfs(g[i][j], (cl+2)%3)) % md;
            ans = (ans*cur)%md;
        }
    }
    v[i] = false;
    dp[i][cl] = ans;
    return ans;
}

void solve(){
    cin >> n >> k;
    for(int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }

    for (int i=0; i<k; i++){
        int x, cl;
        cin >> x >> cl;
        c[x-1] = cl-1;
    }
    ll ans = dfs(0, 0);
    ans = (ans+dfs(0, 1))%md;
    ans = (ans+dfs(0, 2))%md;

    cout << ans << '\n';
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