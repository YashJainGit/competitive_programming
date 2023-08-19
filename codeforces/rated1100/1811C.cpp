#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1e9+7;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n;cin >> n;

    ll a[n]={0}, b[n-1];
    ll prev=llmax;
    ll cur;
    for (ll i=0; i<n-1; i++){
        cin >> cur;
        if (prev<cur){
            a[i+1] = cur;
        }else{
            a[i] = cur;
        }
        prev = cur;
    }
    for (ll i:a){
        cout << i << ' ';
    }
    cout << '\n';

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
