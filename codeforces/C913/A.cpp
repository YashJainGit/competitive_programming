#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    char c;
    int r;
    cin >> c >> r;

    for (int i=1; i<=8; i++){
        if (i!=r){
            cout <<  c << i << '\n';
        }
    }
    
    for (int i=0; i<8; i++){
        if ((char)('a'+i)!=c){
            cout << (char)('a'+i) << r << '\n';
        }
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