#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    
    ll n, k;
    cin >> n >> k;

    ll a[n][n] = {};
    for (ll i=0; i<n; i++){
        for (ll j = 0; j < n; j++) {
            ll b;
            cin >> b;
            if (b){
                a[i][j]++;
                a[n-i-1][n-j-1]++;
            }
        }
    }
    
    ll c=0;
    for (ll i=0; i<n; i++){
        for (ll j=0; j<n; j++){
            if (a[i][j]==1){
                c++;
            }
        }
    }
    c = k-(c/2);
    
    if (c<0 || (c%2 && n%2==0)){
        cout << "No\n";
    }else{
        cout << "YeS\n";
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

