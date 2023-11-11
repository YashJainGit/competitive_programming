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

    ll a[n];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }

    if (a[n-1]==1){
        cout << "NO\n";
        return;
    }
    cout << "Yes\n";

    for (ll i=n-2; i>=0; i--){
        ll j=0;    
        while (i>=0 && a[i] == 1){
            j++;
            i--;
            cout << 0 << ' ';
        }
        cout << j << ' ';
    }
    if (a[0]==0){
        cout << 0;
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
    return 0;
}