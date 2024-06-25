#include <bits/stdc++.h>

using namespace std;
using ll=long long;
vector<vector<int>> t;
vector<ll> cnt;
ll dfs(int i){

    ll c=0;
    for (int j=0; j<t[i].size(); j++){
        c += dfs(t[i][j]);
    }
    cnt[i] = c;
    return c+1;
}
void solve(){
    int n;
    cin >> n;
    t.resize(n, vector<int>(0));
    cnt.resize(n, 0);
    for (int i=1; i<n; i++){
        int x;
        cin >> x;

        t[x-1].push_back(i);
    }

    dfs(0);

    for (ll &i:cnt){
        cout << i << ' ';
    }
    cout << '\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}