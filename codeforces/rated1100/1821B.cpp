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

    ll a[n], b[n];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }for (ll i=0; i<n; i++){
        cin >> b[i];
    }

    ll l=0, r=n-1;
    while (a[l]==b[l]){
        l++;
    }
    while (l!=0 && b[l-1]<=b[l]){
        l--;
    }
    while (a[r]==b[r]){
        r--;
    }
    while (r!=n-1 && b[r+1]>=b[r]){
        r++;
    }cout << l+1 << ' ' << r+1 << '\n';

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

