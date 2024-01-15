#include <bits/stdc++.h>

using namespace std;

const int mod_ = 1e9+7;
void solve(){
    long long n;
    cin >> n;

    long long sum=0;

    for (int i=1; i<=n;) {
        cout << i << ' ';
        int k = n/i;
        int nxt = n/k+1;

        cout << nxt << " to " << i << " : " << k << '\n'; 
        sum+=(nxt-i)*(k)*(s);
        i=nxt;
    }
    cout << sum << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}