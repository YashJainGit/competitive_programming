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
    cin >>  n;

    ll s=1, b=n*n;

    for (ll i=0 ; i<n; i++){
        ll a[n];
        for (ll j=0; j<n; j++){
            if ((j+((i%2) & (n%2)))%2){
                a[j]=b;
                b--;
            }else{
                a[j]=s;
                s++;
            }
        }
        if (i%2) reverse(a, a+n);
        for (ll k:a){
            cout << k << ' ';
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