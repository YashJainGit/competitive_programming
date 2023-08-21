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

    ll a[n], n0=0, n1=0, m=0;
    for (ll i=0; i<n; i++){
        cin >> a[i];
        if (a[i]==0){
            n0++;
            m+=n1;
        }else{
            n1++;
        }
    }
    n1=0;
    ll mx=m;
    for (ll i=0; i<n; i++){
        if (a[i]==0) {
            n0--;
            mx = max(m+n0-n1, mx);
        }else{
            mx = max(m-n0+n1, mx);
            n1++;
        }
    }
    cout << mx <<'\n';

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

