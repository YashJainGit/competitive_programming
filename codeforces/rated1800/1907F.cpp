#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    int n;
    cin >> n;

    int a[n];
    for (int &i : a){
        cin >> i;
    }

    int m = max_element(a, a+n)-a;
    bool up=true, down=true;
    for (int i=1;i<=n;i++){
        if (a[i%n]<a[i-1] && i-1!=m){
            up=false;
            break;
        }
    }
    for (int i=1;i<=n;i++){
        if (a[i%n]>a[i-1] && i!=m){
            down=false;
            break;
        }
    }


    if (!(up || down)){
        cout << -1;
    }
    else if (up && down){
        cout << min(m, n-m-1) << " 1";
    }
    else if (up){
        cout << n-m-1 << " 2";
    }
    else if (down){
        cout << m << " 3";
    }
    cout << '\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}