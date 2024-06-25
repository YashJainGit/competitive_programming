
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = (b-a) + (d-c) - max(0, min(b, d)-max(a, c));
    cout << ans << '\n';
}

int main(){
    
    if (filein){
         string f="paint";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}
