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
    ll s=0;
    cin >> n;

    priority_queue<ll> a;
    for (ll i=0; i<n; i++){
        ll j; cin >> j;
        if (j!=0){
            a.push(j);
        }else if (a.size()){
            s += a.top();
            a.pop();
        }
    }
    cout << s << '\n';
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

