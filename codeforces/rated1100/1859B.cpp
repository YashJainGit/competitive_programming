#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n;
    cin >> n;

    ll sum=0;
    ll mmin1=llmax;
    ll mmin2=llmax;
    for (ll i=0; i<n; i++){

        ll m; cin >> m;
        ll min1 = llmax;
        ll min2 = llmax;
        for (ll j=0; j<m; j++){
            ll x; cin >> x;

            if (x<min1){
                min2 = min1;
                min1 = x;
            } else if(x<min2){
                min2 = x;
            }
        }
        sum += min2;
        mmin1 = min(mmin1, min1);
        mmin2 = min(mmin2, min2);
    }
    sum-=mmin2;
    sum+=mmin1;
    cout << sum << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}