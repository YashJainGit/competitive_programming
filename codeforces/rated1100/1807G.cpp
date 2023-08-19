#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1e9+7;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){

    ll n;
    cin >> n;
    
    ll c[n];
    for (ll i=0; i<n; i++){
        cin >> c[i];
    }
    sort(c, c+n);
    if (c[0]!=1){
        cout << "No\n";
        return;
    }
    ll sum = 1;
    for (ll i=1; i<n; i++){
        if (c[i]>sum){
            cout << "No\n";
            return;
        }
        sum += c[i];
    }
    cout << "Yes\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

