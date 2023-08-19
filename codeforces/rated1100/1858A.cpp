#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll a, b, c;
    cin >> a >> b >> c;

    ll anna = (c+1)/2 + a;
    ll katie = (c)/2 + b;

    if (anna > katie){
        cout << "First\n";
    }
    else{
        cout << "Second\n";
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}

