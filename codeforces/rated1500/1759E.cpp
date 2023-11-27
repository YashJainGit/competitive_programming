#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, h;
    cin >> n >> h;

    ll a[n];
    for (ll &i: a){
        cin >> i;
    }

    sort(a, a+n);

    int s[3][3] = {
        {2, 2, 3},
        {2, 3, 2},
        {3, 2, 2}};
    ll best = 0;
    for (ll i=0; i<3; i++){
        ll k=0;
        ll cur_h = h;
        ll j=0;
        for (; j<n; j++){

            while (cur_h <= a[j] && k<3){
                cur_h*=s[i][k];
                k++;
            }

            if (cur_h <= a[j]){
                break;
            }
            cur_h += (ll)(a[j]/2);
        }
        best = max(j, best);
    }
    cout << best << '\n';
    
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