#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){

    int n, q;
    cin >> n >> q;


    vector<int> pre(n+1);

    for (int i=1; i<=n; i++){
        int c;
        cin >> c;
        pre[i]=c^pre[i-1];
    } 

    for (int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;

        cout << (pre[a-1]^pre[b]) << '\n';
    }
    
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