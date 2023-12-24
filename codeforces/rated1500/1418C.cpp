#include <bits/stdc++.h>
using namespace std;

const bool testcases = true;
vector<bool> a;
int dp[(unsigned long long)2e5+1];
int dfs(int i){
    if (i>=a.size()){
        return 0;
    }
    if (dp[i]!=-1){
        return dp[i];
    }

    dp[i] = (int)a[i];
    int mn = INT_MAX;
    mn = min(mn, dfs(i+2)); // 1, 1
    mn = min(mn, dfs(i+3)); // 1, 2
    mn = min(mn, a[i+1] + dfs(i+3)); // 2, 1
    mn = min(mn, a[i+1] + dfs(i+4)); // 2, 2
    dp[i] += mn;

    return dp[i];  
}
void solve(){
    int n;
    cin >> n;

    a.resize(n, false);
    fill(dp, dp+n, -1);
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        a[i] = x==1;
    }

    cout << dfs(0) << '\n';

    
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

