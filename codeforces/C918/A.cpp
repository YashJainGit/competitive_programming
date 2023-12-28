#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    if (a==b)
        cout << c << '\n';
    if (a==c)
        cout << b << '\n';
    if (b==c)
        cout << a << '\n';
    
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