
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
    string w;
    cin >> n >> k >> w;

    if (k%2==0){
        sort(w.begin(), w.end());
        cout << w << '\n';
        return;
    }

    string a="", b="";

    for (ll i=0; i<n; i+=2){
        a+=w[i];
    }
    for (ll i=1; i<n; i+=2){
        b+=w[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (ll i=0; i<a.size(); i++){
        cout << a[i];
        if (i<b.size()){
            cout << b[i];
        }
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

