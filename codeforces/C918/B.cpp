#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int a=0, b=0, c=0;

    for (int i=0; i<9; i++){
        char x;
        cin >> x;
        if (x=='A')
            a++;
        if (x=='B')
            b++;
        if (x=='C')
            c++;
    }
    //cout << a << ' ' << b << '\n';

    if (a==2)
        cout << 'A' << '\n';
    if (b==2)
        cout << 'B' << '\n';
    if (c==2)
        cout << 'C' << '\n';
    
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