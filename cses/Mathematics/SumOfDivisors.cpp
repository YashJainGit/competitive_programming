#include <bits/stdc++.h>

using namespace std;

const int mod_ = 1e9+7;
void solve(){
    long long n;
    cin >> n;

    long long sum=0;

    for (int i=1; i<=n;) {
        int k = n/i;
        
        sum += (k)*(n/k+1-i);
        //cout << i << '\n';
        i = n/k+1;
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