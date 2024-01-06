#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> odd(n);
    vector<int> even(n);
    
    for (int &i:a)
        cin >> i;
    int s=a[0]+a[1]+a[2];
    if (s%2){
        odd[2]=1;
    }
    else{
        even[2]=1;
    }
    for (int i=3; i<n; i++){
        if (a[i]%2){
            even[i]=odd[i-1]+1;
            odd[i]=even[i+1]+1;
        }else{
            even[i]=even[i-1]+1;
            odd[i]=odd[i+1]+1;
        } 
    }

    cout << even[n-1] << '\n'; 

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