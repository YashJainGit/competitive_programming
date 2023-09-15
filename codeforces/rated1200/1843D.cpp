#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

vector<vector<ll>> p;
vector<ll> s;
ll dfs(ll i, ll prev){
    ll su = 0;

    for (ll j:p[i]){
        if (j!=prev){
            su += dfs(j, i);
        }
    }
    if (su==0){
        su=1;;
    }
    s[i] = su;
    return su;
}

const bool testcases = true;
void solve(){
    ll n;
    cin >> n;
    
    p.assign(n+1, vector<ll>());
    s.assign(n+1, 0);
    for (ll i=0; i<n-1; i++){
        ll u, v;
        cin >> u >> v;
        p[u].push_back(v);
        p[v].push_back(u);
    }
    dfs(1, 0);
    ll q;
    cin >> q;
    for (ll i=0; i<q; i++){
        ll x, y;
        cin >> x >> y;
        cout << s[x] * s[y] << '\n';
    } 
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}