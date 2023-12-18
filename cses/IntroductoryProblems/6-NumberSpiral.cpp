#include <bits/stdc++.h>

using namespace std;

void solve(){

    long long y, x;
    cin >> y >> x;    

    if (x>=y && x%2==0)
        cout << (x-1)*(x-1)+y;
    else if (x>=y && x%2==1)
        cout << (x)*(x)-y+1;
    else if (y>=x && y%2==0)
        cout << (y)*(y)-x+1;
    else if (y>=x && y%2==1)
        cout << (y-1)*(y-1)+x;
    cout << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}