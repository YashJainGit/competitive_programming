#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    long long a, b;
    cin >> a >> b;

    int x=a, y=b;
    int i=1;
    if (y%x==0){
        y/=x;
        x/=x;
    }
    while (i*i<=a){
        while (i!=1 && x%i==0 && y%i==0){
            x/=i;
            y/=i;
        }
        
        i++;
    }

    //cout << x << ' ' << y << '\n'; 
    if (x==1){
        int i=2;
        for (; i<=y; i++){
            if (y%i==0){
                break;
            }
        }
        cout << b*i;
    }
    else{
        cout << b*x;
    }
    cout << '\n';
    
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