#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

ll n;
string s;
pair<ll, ll> adj[300010];

ll trav(ll i){
    ll x = adj[i].first;    
    ll y = adj[i].second;

    if (x==0 && y==0){
        return 0;
    }

    ll l = llmax;
    ll r = llmax;
    if (x!=0){
        l = trav(x) + (s[i-1]!='L');
    }
    if (y!=0){
        r = trav(y) + (s[i-1]!='R');
    }

    return min(l, r);
}

const bool testcases = true;
void solve(){
    cin >> n >> s;
    fill(adj, adj+n, pair<ll, ll>());

    for (ll i=0; i<n;i++){
        ll x, y;
        cin >> x >> y;
        
        adj[i+1].first = x;
        adj[i+1].second = y;
    }
    cout << trav(1) << '\n';
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