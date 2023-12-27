#include <bits/stdc++.h>

using namespace std;

vector<int> c;
vector<int> dp(1e6+1);

int trav(int n){
    if (n==0){
        return 1;
    }
    if (n<0){
        return INT_MAX;
    }
    if (dp[n]!=-1){
        return dp[n];
    }

    int mn=INT_MAX;
    for (int i:c){
        mn = min(mn, trav(n-i));
    }
    dp[n] = mn;
    if (mn!=INT_MAX){
        dp[n]++;
    }
    return dp[n];
}


void solve(){
    fill(dp.begin(), dp.end(), -1);
    int n, x;
    cin >> n >> x;    

    c.resize(n);
    for (int &i:c){
        cin >> i;
    }

    int ans = trav(x);
    if (ans==INT_MAX){
        cout << -1;
    }
    else{
        cout << ans-1;
    }

    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}