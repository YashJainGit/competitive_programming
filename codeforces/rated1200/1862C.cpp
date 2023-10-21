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

    ll a[n-1];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }

    vector<ll> b;
    ll j = 0;
    for (ll i=n; i>0; i--){
        while (j<a[i-1]){
            if (i != a[j]){
                cout << "No\n";
                return;
            }
            j++;
        }
    }
    cout << "Yes\n";
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