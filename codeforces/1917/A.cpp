#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    bool z=0;
    bool s=0;
    for (int i =0; i<n; i++){
        int x;
        cin >> x;

        if (x==0){
            z=1;
        }
        if (x<0){
            s=!s;
        }

    }

    if (z || s){
        cout << 0 << '\n';
    }
        else{
        cout << "1\n1 0\n";
    }

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}