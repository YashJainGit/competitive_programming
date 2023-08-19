#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n;
    cin >> n;

    bool v[n+1] = {false};
    for (ll i=1; i<=n; i++){
        ll j=i;
        while (j<=n && !v[j]){
            cout << j << ' ';
            v[j] = true;
            j *= 2; 
        }
    }
    cout << '\n';


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

