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

    ll a[n];
    for (ll &i:a){
        cin >> i;
    }

    sort(a, a+n);

    ll s=0;
    for (ll i=0; i<n; i++){
        for (ll j=i+1; j<n-1; j++){
            ll k = __gcd(a[j]-a[i], a[i]);
            //cout << i+1 << ' ' << j+1 << ':' << (n-j-1) << '*' << k << '\n';
            s += (n-j-1)*k;
        }
    }

    cout << s << '\n';
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