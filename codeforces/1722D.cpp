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

    priority_queue<ll, vector<ll>> pq;
    ll s=0;
    for (ll i=0; i<n; i++){
        char a;
        cin >> a;
        if (a=='L'){
            pq.push((n-1-i)-i);
            s += i;
            // cout << s << ' ' << (n-i)-i << '\n';
        }
        else if (a=='R'){
            pq.push(i-(n-1-i));
            s += n-1-i;
            //cout << s << ' ' << i-(n-1-i) << '\n';
        }
    }
    //cout << "s: " << s << " \n";
    for (ll i=0; i<n ;i++){
        ll x=pq.top();
        
        if (x>0){
            s += x;
        }
            cout << s << ' ';
        pq.pop();
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