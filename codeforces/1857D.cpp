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

    ll a[n], u[n];
    for (ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll mu=llmin;
    ll mc = 0;

    for (ll i=0;i<n;i++){
        ll x;
        cin >> x;
        u[i] = a[i]-x;
        
        if (u[i] > mu){
            mu = max(u[i], mu);
            mc = 1;
        }else if(u[i] == mu){
            mc++;
        }

    }
    cout << mc << '\n';
    for (ll i=0; i<n ; i++){
        if (u[i]==mu){
            cout << i+1 << ' ';
        }
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

