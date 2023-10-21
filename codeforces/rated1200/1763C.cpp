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
    
    pair<ll, ll> m[n];

    for (ll i=0; i<n; i++){
        cin >> m[i].second; 
    }
    for (ll i=0; i<n; i++){
        cin >> m[i].first;
    }

    sort(m, m+n);
    ll att = k;
    for (ll i=0; i<n;){
        while (m[i].second<=att){
            i++;
            if (i>=n){
                cout << "Yes\n";
                return;
            }
        }
        k-=m[i].first;
        att+=k;

        if (k<=0){
            cout<<"No\n";
            return;
        }
    }
    cout << "err\n";

    for (pair<ll, ll> i: m){
        cout << i.first <<  ' ' << i.second << '\n';
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