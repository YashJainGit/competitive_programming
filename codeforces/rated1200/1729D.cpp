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

    ll a[n], b[n], x[n];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }
    for (ll i=0; i<n; i++){
        cin >> b[i];
    }
    for (ll i=0; i<n; i++){
        x[i] = b[i]-a[i];
    }
    sort(x, x+n);
    ll d=0;
    for (ll i=0, j=n-1; i<j;){
        while (x[i]+x[j]<0){
            i++;
        }
        if (i>=j){
            break;
        }
        i++;
        j--;
        d++;
    }
    cout << d << '\n';
    
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