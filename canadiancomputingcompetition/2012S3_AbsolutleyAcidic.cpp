#include <bits/stdc++.h>

using namespace std;

int a[1001];
void solve(){
    fill(a, a+1001, 0);

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;

        a[x]++;
    }

    int mfreq=0; 
    int min_a=0;
    int max_a=0;
    
    for (int i=0; i<1001; i++){
        if (a[i]>mfreq){
            mfreq = a[i];
            min_a = i;
            max_a = i;   
        }
        else if (a[i]==mfreq){
            max_a = i;
        }
    }



    if (min_a==max_a){
        int sec_freq=0, sec_best=0;
        for (int i=0; i<1001; i++){

            if (sec_freq<a[i] &&  a[i]!=mfreq){
                sec_freq = a[i];
                sec_best = i;
            }
            else if (sec_freq==a[i] && (abs(i-max_a) > abs(sec_best-max_a))){
                sec_best = i;
            }
        }
        cout << abs(max_a-sec_best) << '\n';
    }
    else{
        cout << abs(max_a-min_a) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}