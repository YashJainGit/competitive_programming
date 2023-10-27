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
    bool b[n];
    fill(b, b+n, true);
    for (ll i=0; i<n; i++){
        char x;
        cin >> x;
        if (x=='1'){
            a[i]=1;
        }else{
            a[i]=0;
        }
        //cout << ':' << b[i];
    }
    //cout << '\n';
    

    ll c = 0;
    for (ll i=1; i<=n; i++){
        ll j=i;
        while (j<=n && a[j-1]==0){
            if (b[j-1]!=false){
                c+=i;
                b[j-1]=false;
            }
            j+=i;
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