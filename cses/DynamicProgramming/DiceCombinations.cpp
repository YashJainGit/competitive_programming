#include <bits/stdc++.h>

using namespace std;

vector<long long> dp(1e6+1);
int mod=1e9+7;
long long dfs(int n){
    if (n==0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    if (dp[n]!=-1){
        return dp[n];
    }

    int s=0;
    for (int i=1; i<=6; i++){
        s= (s+dfs(n-i))%mod;

    }
    dp[n] = s;
    return s;

}

void solve(){
    fill(dp.begin(), dp.end(), -1);
    int n;
    cin >> n;

    cout << dfs(n) << '\n';    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}