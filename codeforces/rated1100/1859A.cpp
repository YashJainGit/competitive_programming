#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n;
    cin >> n;

    ll a[n];
    for (ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll m = *max_element(a, a+n);
    ll i = count(a, a+n, m);

    if (i==n){
        cout << -1 << '\n';
    } else {
        cout << n-i << ' ' << i << '\n';
        for (ll j=0; j<n; j++){
            if (a[j] != m){
                cout << a[j] << ' ';
            }
        }
        cout << '\n';
        while (i--){
            cout << m << ' ';
        }
        cout << '\n';
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
