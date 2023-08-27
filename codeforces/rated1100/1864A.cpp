
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll x, y, n;
    cin >> x >> y >> n;

    ll a[n-2];
    ll s=y, t=1;
    for (ll i=n-3; i>=0; i--){
        s-=t;
        a[i] = s;
        t+=1;
    }
    if (a[0]-x < t){
        cout << -1 << '\n';
        return;
    }
    cout << x << ' ';
    for (ll i:a){
        cout << i << ' ';
    }
    cout << y << '\n';


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
