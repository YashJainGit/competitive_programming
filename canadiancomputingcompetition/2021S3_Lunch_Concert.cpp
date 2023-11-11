#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = false;
void solve(){
    ll n;
    cin >> n;

    ll a[n][3], md = 0, mn = llmax; 
    for (ll i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        md = max(a[i][0], md);
        mn = min(a[i][0], mn);
    }
    
    ll l=mn, r=md, best = llmax;
    while (l<=r){
        ll i = l+((r-l)/2);
        ll cur = 0, prev = 0;
        for (ll j=0; j<n; j++){
            cur += a[j][1]*max((ll)0, abs(a[j][0]-i)-a[j][2]);
            prev += a[j][1]*max((ll)0, abs(a[j][0]-(i-1))-a[j][2]);
        }
        
        if (prev > cur){
            best = cur;
            l = i+1;
        }else{
            r = i-1;
        }

    }
    cout << best << '\n';
}


int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}