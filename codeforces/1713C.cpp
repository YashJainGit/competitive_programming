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

    ll a = ceil(sqrt(n));
    ll b[n];

    ll mi = n;
    for (ll i=n-1; i>=0; i--){
        if (a*a-1>n){
            a--;
        }
        
        b[i] = a*a-i;
    }
    for (ll i: b){
        cout << i << ' ';
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