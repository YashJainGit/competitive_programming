#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n, k;
    cin >> n >> k;

    int a[n], b[n];

    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        cin >> b[i];

    int mb=0;
    int ms=0;
    int as=0;

    for (int i=0; i<n && i<k;i++){
        as += a[i];
        mb = max(mb, b[i]);
        
        int s = as + (k-(i+1))*mb;
        //cout << s << ' ';
        ms = max(ms, s);
    }
    cout << ms <<'\n';

    
    
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