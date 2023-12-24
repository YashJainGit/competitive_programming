#include <bits/stdc++.h>
using namespace std;

const bool testcases = true;

void solve(){
    int n;

    cin >> n;
    int a[n];

    for (int &i:a){
        cin >> i;
    }

    bool run=true;
    for (int k=2; k<100 && run; k++){
        int num1=a[0]%k, num2=-1;
        for (int i=1; i<n; i++){
            if (a[i]%k!=num1){
                if (num2==-1){
                    num2=a[i]%k;
                }
                else if (a[i]%k != num2){
                    num1=-1;
                    break;
                }
            }
        }
        if (num1!=-1 && num2!=-1){
            run=false;
            cout << k << '\n';
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

