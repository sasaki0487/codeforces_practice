#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ll t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int f = 0;
        if(n % 2 != k % 2 || n < k * k){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}
