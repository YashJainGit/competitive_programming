
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

    vector<vector<ll>> a(n+1);
    for (ll i=0; i<n; i++){
        ll x, y;
        cin >> x >> y;
        a[x].push_back(y);        
    }

    ll s=0;
    for (ll i=0; i<n+1 ; i++){
        sort(a[i].begin(), a[i].end(), greater<ll>());

        for (ll j=0; j<min(i, (ll)a[i].size()); j++){
            s+=a[i][j];
        }
    }
    cout << s << '\n';
    return;
    for (auto i:a){
        cout << ">>: ";
        for (ll j:i){
            cout << j << ' ';
        }
        cout << '\n';
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

