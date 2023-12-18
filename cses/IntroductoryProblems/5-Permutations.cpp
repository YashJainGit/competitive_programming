#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    if (n==2 || n==3){
        cout << "NO SOLUTION\n";
        return;
    }

    for (int i=n-1; i>=1; i-=2){
        cout << i << ' ';
    }
    for (int i=n; i>=1; i-=2){
        cout << i << ' ';
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}