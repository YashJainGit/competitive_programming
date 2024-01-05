#include <bits/stdc++.h>

using namespace std;

const int mod_ = 1e9+7;
void solve(){
    int x;
    cin >> x;

    int c=0;
    for (int i=1; i*i<=x; i++){
        if (x%i==0){
            if (i*i==x)
                c--;
            c= (c+2)%mod_;
        }
    }
    
    cout << c << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int n;
    cin >> n;
    while (n--) solve();

    return 0;
}