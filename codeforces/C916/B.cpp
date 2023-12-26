#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, k;
    cin >> n >> k;

    for (int i=n-k; i>0; i--) 
        cout << i << ' ';

    for (int i=n-k+1; i<=n; i++)
        cout << i << ' ';
    cout << '\n';
    
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