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
    string S, T;
    cin >> S >> T;
    
    ll a=0, b=0;
    for (ll i=0; i<n; i++){
        if (S[i]!=T[i])a++;
    }
    reverse(S.begin(), S.end());

    for (ll i=0; i<n; i++){
        if (S[i]!=T[i])b++;
    }

    b = b*2-1;

    
    cout << min(a, b)*2 << '\n';

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