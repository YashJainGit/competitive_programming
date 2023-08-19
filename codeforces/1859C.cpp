#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n;
    cin >> n;

    ll i=1;
    ll best=0;
    while (1){
        ll s=0, m=0;
        for (ll k=1; k<=n-i; k++){
            cout << '"' << k*k << ' ';
        }for (ll j=)

        break;
        if (s<=best || i==n){
            break;
        }else{
            best = s;
            i++;
        }
    }
    cout << best << '\n';

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
