#include <bits/stdc++.h>

using namespace std;

const bool testcases = true;

void solve(){
    int n=0;
    cin >> n;

    int a[n], b[n], c[n];
    for (int &i:a)
        cin >> i;
    for (int &i:b)
        cin >> i;
    for (int &i:c)
        cin >> i;
    
    int i[3]=get3(a);
    int j[3]=get3(b);
    int k[3]=get3(c);

    cout << mx << '\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}