#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    int s1, e1;
    cin >> s1 >>  e1;

    bool p = true;
    for (int i=0; i<n-1; i++){
        int si, ei;
        cin >>si>>ei;

        if (si>=s1 && ei>=e1){
            p=false;
        }
    }
    if (p){
        cout << s1 << '\n';
    }
    else{
        cout << -1 << '\n';
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