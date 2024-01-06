#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int a, b;
    cin >> a >> b;
    
    if ((a+b)%2==0){
        cout << "Bob\n";
    }
    else{
        cout << "Alice\n";
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