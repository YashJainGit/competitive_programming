#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool a_win = s[n-1]=='A';

    for (int i=1; i<=n; i++){
        int a=0;
        int b=0;
        int sa=0;
        int sb=0;
        for (int j=0; j<n; j++){
            if (s[j]=='A'){
                a++;
            }
            else{
                b++;
            }
            if (a==i){
                sa++;
                a=0;
                b=0;
            }
            else if (b==i){
                sb++;
                a=0;
                b=0;
            }
        }
        if (sa>sb && a_win) {
            cout << "A\n";
            return;
        }
        else if (sb>sa && !a_win){
            cout << "B\n";
            return;
        }
    }
    cout << "?\n";

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