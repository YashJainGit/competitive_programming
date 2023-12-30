#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    long long s=0;
    long long o=0;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;



        o+=x%2;
        s+=x;
        if (i==0){
            cout << s << ' ';
        }
        else if (o<=2){
            cout << s-(o%2) << ' ';
        }
        else{
            if (o%3==1){
                cout << s-ceil((o-2.0)/3+1) << ' ';
            }else{
                cout << s-ceil((o-2.0)/3) << ' ';
            }
        }
        //cout << s << ' ' << o<< '\n';
        
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