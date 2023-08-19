#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1e9+7;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

#define problem

const bool testcases = true;
void solve(){

    string s;
    cin >> s;
    ll m=0, n=0, l=s.size();
    s+=s;
    for (char c:s){
        if (c=='1'){
            n++;
        } else{
            n=0;
        } 
        m = max(n, m);
    }
    if (m>l){
        cout << l*l << '\n';
    }else{
        cout << (ceil(((double)m+1)/2))*(floor(((double)m+1)/2)) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases)
    {cin >> t;}
    while(t--)
    {solve();}
    return 0;
}
