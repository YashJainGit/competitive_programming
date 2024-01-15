#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double s1 = (y2-y1)/(x2-x1);
    double s2 = (y4-y2)/(x4-x3);

    cout << s1 << ' ' << s2 << '\n';

    if (s1==s2){
        cout << "No\n";
    }
    else{
        cout << "YES\n";
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(5);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}