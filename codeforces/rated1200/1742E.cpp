#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
 
typedef long long ll;
 
#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;
 
#define rep(x,y,z) for(int x=(y);x<=(z);x++)
 
const bool testcases = true;
void solve(){
    ll n, q;
    cin >> n >> q;
 
    ll m[n+1], h[n+1], mh=0, ch=0;
    h[0] = 0;
    for (ll i=0; i<n; i++){
        ll j;
        cin >> j;
 
        ch+=j;
        h[i+1]=ch;
 
        mh = max(mh, j);
        m[i]=mh;
        //cout << h[i] << ':';
    }
    m[n]=mh;
    //cout << '\n';
 
    for (ll k=0; k<q; k++){
        ll s;
        cin >> s;

        ll i = upper_bound(m, m+n, s)-m;
        cout << h[i] << ' ';
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
    std::cout.flush();
    return 0;
}