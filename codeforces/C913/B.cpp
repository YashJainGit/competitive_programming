#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    string s;
    cin >> s;
    int n = s.length();

    int B=0, b=0;
    string ret="";
    for (int i=n-1; i>=0; i--){
        if (s[i]=='B') B++;
        else if (s[i]=='b') b++;
        else if (s[i]>='a'){
            if (b>0) b--;
            else ret+=s[i];
        }
        else if (s[i]>='A'){
            if (B>0) B--;
            else ret+=s[i];
        }
        

    }

    reverse(ret.begin(), ret.end());

    cout << ret << '\n';
    
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