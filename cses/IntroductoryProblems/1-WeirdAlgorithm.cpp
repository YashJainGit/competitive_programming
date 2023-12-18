#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    long long n;
    cin >> n;       

    while (n!=1){
        cout << n << ' ';
        
        if (n%2){
            n = (n*3)+1;
        }
        else{
            n = n/2;
        }
    }
    cout << "1\n";
}


int main(){
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

   return 0;
}