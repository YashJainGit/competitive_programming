#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int g=0, v=0;
    for (int i=0 ; i<n-1; i++){
        if (s[i]=='A' && s[i+1]=='B'){
            s[i+1]='A';
            g+=v+1;
            v=0;
        }
        else if (s[i]=='A'){
            v++;
        }
    }
    cout << g << '\n';
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