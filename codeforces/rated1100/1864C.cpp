#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll x;
    cin >> x;

    ll t=1;
    while (t<=x){
        t*=2;
    }
    t/=2;

    ll b = x-t;
    
    vector<ll> ans;
    ans.push_back(x);
    for (ll i=0; i<=31; i++){
        if ((b & (1<<i)) != 0){
            x-=(1<<i);
            ans.push_back(x);
        }
    }
    cout << '\n';
    while (x!=1){
        x /= 2;
        ans.push_back(x);
    }

    cout << ans.size() << '\n';
    for (ll i:ans){
        cout << i << ' '; 
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

