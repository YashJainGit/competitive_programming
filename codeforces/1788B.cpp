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
    ll a=n/2, b=(n+1)/2;
    string sa = to_string(a), sb = to_string(b);
    ll ia=sa.size()-1, ib=sb.size()-1;
    cout << sa[ia] << " : " << sb[ib] << '='; 
    while (sa[ia]=='9' && sb[ib]=='0'){

        sa[ia] = '4';
        sb[ib] = '5';
        ia--;ib--;
    } 
    cout << sa << ' ' << sb << '\n';

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

