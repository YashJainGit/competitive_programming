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

    ll m=llmax;
    ll s=0;
    bool neg=false, zer=false;
    for (ll i=0; i<n; i++){
        ll a;
        cin >> a;
        s += abs(a);        
        m = min(abs(a),m);
        if (a<0){
            neg=!neg;
        }if (a==0){
            zer=true;
        }
    }
    if (neg && !zer){
        s-=m*2;
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

