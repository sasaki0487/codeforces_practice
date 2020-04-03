#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll t,r,b,k;
    cin >> t;
    while(t--){
        cin >> r >> b >> k;
        ll d = __gcd(r,b);
        r /= d;
        b /= d;
        if(b > r){
            swap(b,r);
        }
        if(1 + b * (k - 1) >= r){
            cout << "OBEY\n";
        }
        else{
            cout << "REBEL\n";
        }
    }
    return 0;
}
