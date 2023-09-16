#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, q;
    cin >> n >> q;
    ll m=0, a[n];
    for (ll i=0; i<n; i++){
        ll j;
        cin >> j;
        m = max(j, m);
        a[i] = m;
    }
    for (ll i=0; i<q; i++){
        ll w;
        cin >> w;

        ll l, r;
        ll j = l+(r-l)/2;
    }
    cout << '\n';
    
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