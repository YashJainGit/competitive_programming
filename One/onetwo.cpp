
#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=true;
const bool filein=false;

void solve(){
    string s;
    cin >> s;

    for (int i=0; i<s.length()-1; i++){
        if (s[i]=='0'){
            cout << "No\n";
            return;
        }
    }

    if (s[s.length()-1]=='9' || s[0]!='1'){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
    }
}


int main(){
    if (filein){
        string f="stacking";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;

}