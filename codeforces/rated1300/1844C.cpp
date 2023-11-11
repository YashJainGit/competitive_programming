#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n;
    cin >> n;

    ll odd=0, even=0, maxm = llmin;
    for (ll i=0; i<n; i++){
        ll x;
        cin >> x;
        maxm = max(maxm, x);
        if (x>0){
            if (i%2){
                odd+=x;
            }else{
                even+=x;
            }
        }
    }

    ll ans = max(odd, even);
    if (ans==0){
        ans = maxm;
    }
    cout << ans << '\n';
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