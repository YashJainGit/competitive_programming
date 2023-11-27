#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)


const bool testcases = true;

ll min_ans = llmax;
ll num_ans = 0;
ll n, m, d;
ll a[100010];
ll memo[100010];

pair<ll, ll> traverse(ll i, bool removed, ll count){
    if (i==m){
        return {count, 1};
    }
    
    pair<ll, ll> a = traverse(i+1, count + );
    if (!removed){
        pi
    }
}
void solve(){
    cin >> n >> m >> d;

    fil
    for (ll &i:a){
        cin >> i;
    }
    sort(a, a+m);

    ll prev = 1;
    ll count = 1;
    for (ll i: a){
        count += ceil(((double)i-prev)/d);
        prev = i;   
    }
    count += (n-prev)/d;

    cout << count << '\n';

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