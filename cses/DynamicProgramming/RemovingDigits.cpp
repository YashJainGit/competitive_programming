#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> dp(n+1);

    for (int i=1; i<n; i++){
        
        int j=i;
        int m=INT_MAX;
        while (j>0){
            j%10;
            j/=10;
        }
        

    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}