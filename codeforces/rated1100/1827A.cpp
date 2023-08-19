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
    ll a[n], b[n];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    } 
    for (ll i=0; i<n; i++){
        cin >> b[i];
    }
    sort(b, b+n);
    sort(a, a+n);

    ll total=1;
    ll i=0, j=0;
    
    while (i<n){
        if (b[j]>=a[i] || j==n){
            total = (total*(j-i))%mod;  
            i++;
        }else{
            j++;
        }
    }
    cout << total << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

