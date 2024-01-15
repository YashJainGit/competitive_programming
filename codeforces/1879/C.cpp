#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
const int mod = 998244353;
void solve(){
    string s;
    cin >> s;

    int n = s.length();
    long long cnt = 1;
    int run = 1;
    int ops = 0;
    for (int i=1; i<n; i++){
        if (s[i]==s[i-1]){
            run++;
            ops++;
        }
        else {
            run=1;
        }
        cnt = (cnt*run)%mod;
    }

    cout << ops << ' ' << cnt << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}