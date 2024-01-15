#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double s12 = (y2-y1)/(x2-x1);
    double s13 = (y3-y1)/(x3-x1);
 
    if (s12==s13){
        cout << "TOUCH\n";
    }
    else if (s12>s13){
        cout << "RIGHT\n";
    }
    else{
        cout << "LEFT\n";
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