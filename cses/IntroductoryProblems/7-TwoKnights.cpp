#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    for (int i=1; i<=n; i++){
        long long s=0;
        s += (i*i-3);// corners
        s += 2*(i*i-4); // next to corner
        s += (i-4+1)*(i*i-5); // edges 
        s += (i-4)*(i*i-7); // edges
        s *= 4; 
        s += ((i-4)*(i-4))*(i*i-9); // square
        cout << s << '\n';
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}