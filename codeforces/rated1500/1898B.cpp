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
    
    for (ll &i:a){
        cin >> i;
    }

    ll c=0;
    for (ll i=n-2; i>=0; i--){
        if (a[i]>a[i+1]){
            //cout << a[i+1] << ' ';
            int j = ceil((double)a[i]/a[i+1]);
            a[i] = floor(a[i]/j);
            c+=j-1;
        }

    }
    cout << c << '\n';
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