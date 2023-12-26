#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    string s;
    cin >> s;

    int n=s.length();
    int c1=0, c0=0;

    for (int i=0; i<n; i++) {
        if (s[i]=='1')
            c1++;
        else
            c0++;
    }

    for (int i=0; i<n; i++){
        if (s[i]=='1'){
            if (c0==0){
                cout << n-i << '\n';
                return;
            }
            c0--;
        }
        if (s[i]=='0'){
            if (c1==0){
                cout << n-i << '\n';
                return;
            }
            c1--;
        }
    }

    cout << 0 << '\n';
    
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