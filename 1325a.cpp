// just output 1 and n-1
// LCM of 1 and other num is the number
// GCD of 1 and other num is 1

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t;
    ll n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << 1 << " " << n-1 << endl;
    }

    return 0;
}
