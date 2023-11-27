#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = false;
void solve(){
    ll n, q;
    cin >> n >> q;

    ll a[n+1];
    ll sum=0;
    a[0] = 0;
    for (ll i=1; i<=n; i++){
        ll x;
        cin >> x;
        sum+=x;
        a[i] = sum;
    }

    //for (ll i:a){
    //    cout << i << ' ';
    //}
    //cout << '\n';
    for (ll j=0; j<q; j++){
        ll c;
        cin >> c;

        if (c==2){
            ll l, r;
            cin >> l >> r;

            cout << a[r]-a[l-1] << '\n';
        }
        else{
            ll k, u;
            cin >> k >> u;
            ll d = u-(a[k]-a[k-1]);
            
            for (ll i=k; i<=n; i++){
                a[i]+=d;
            }

            //for (ll i:a){
            //    cout << i << ' ';
            //}
            //cout << '\n';
        }
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