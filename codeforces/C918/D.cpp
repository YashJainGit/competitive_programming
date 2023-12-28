#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string res="";
    for (int i=n-1; i>=0;){
        if (s[i]=='a' || s[i]=='e'){;
            res = s.substr(i-1, 2) + "." + res;
            i-=2;
        }
        else{
            res = s.substr(i-2, 3) + "." + res;
            i-=3;
        }
    }
    for (int i=0; i<res.size()-1; i++){
        cout << res[i];
    }
    cout << '\n';
    return;
    
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