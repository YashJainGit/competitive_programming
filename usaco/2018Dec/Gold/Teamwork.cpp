#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=true;
const string f="teamwork";
const int nx = 1e4+10;

int n, k;
vector<int> c(nx);
vector<ll> dp(nx, -1);

ll team(int i){
    if (i>=n){
        return 0;

    }
    if (dp[i] != -1){
        return dp[i];
    }
    

    int cur = 0;
    ll best = 0;
    for (int j=0; j<k && j+i<n; j++){
        cur = max(cur, c[i+j]);
        best = max(best, (j+1)*cur + team(i+j+1));
    }
    dp[i] = best;
} 

void solve(){
    cin >> n >> k;

    for (int i=0; i<n; i++){
        cin >> c[i];
    }

    team(0);
    cout << dp[0] << '\n';

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