#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, m;
    cin >> n >> m;

    ll a[m], b[m];
    for (ll i=0; i<m; i++){
        cin >> a[i];
    }
    sort(a, a+m);
    for (ll j=0; j<m-1; j++){
        b[j] = a[j+1]-a[j]-1;
    }
    b[m-1] = n-a[m-1] + a[0]-1;
    //cout << "klod: " << a[m] << ' ' << b[m-1] << '\n';
    sort(b, b+m, greater<ll>());
    //cout << '\n';
    ll c=m;
    for (ll k=0; k<m; k++){
        c += min(b[k], (k*4));
        if (b[k]-(k*4) > 1){
            c++;
        }
        //cout << c << ' ';
    }
    cout << c << '\n';

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