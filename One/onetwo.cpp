#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=true;
const bool filein=false;
const int maxn = 3e5+4;


void solve(){
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    int cnt=0;
    for (int i=1; i<n-1; i++){
        if (s[i-1]=='x' && s[i]=='.' && s[i+1]=='x' && t[i-1]=='.' && t[i]=='.' && t[i+1]=='.'){
            cnt++;
        }
        if (t[i-1]=='x' && t[i]=='.' && t[i+1]=='x' && s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
            cnt++;
        }
    }
    cout <<  cnt << '\n';
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