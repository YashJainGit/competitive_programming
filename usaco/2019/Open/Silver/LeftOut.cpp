#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int maxn = 1e6+1;

void solve(){
    int n;
    cin >> n;

    int d=0;
    for (int i=0; i<n; i++){
        for (int j=0 ;j<n; j++){
            char c;
            cin >> c;
            if (c=='L'){
                d++;
            }
            else{
                d--;
            }
        }
    } 

    if (abs(d)%n==0){
        cout << "-1\n";
    }
    else{
        cout << "1 1\n";
    }
}


int main(){
    if (filein){
        string f="leftout";
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