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

    vector<pair<ll, ll>> a;

    for (ll i=0; i<n; i++){
        ll m;
        cin >> m;

        ll prev = -1;
        for (ll j=0; j<m; j++){

            ll cur;
            cin >> cur;

            a.emplace_back(cur, prev);

            prev = cur;
        }
    }

    sort(a.begin(), a.end());
    ll split=0, merge=0;
    ll  prev = -1;
    for (pair<ll, ll> i : a){
        if (i.second != prev){
            if (i.second==-1){
                merge++;
            }else{
                split++;
            }
        }
        prev = i.first;
    }

    cout << split << ' ' << merge << '\n';

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