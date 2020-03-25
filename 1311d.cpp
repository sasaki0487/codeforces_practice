// Iterate all possible a & b then find the according c that makes
// the moves smallest.

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ll t,a,b,c,Aa,Ab,Ac;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        ll ans = INT_MAX;
        for(int i = 1 ; i <= 2 * a ; i++){
            for(int j = i ; j  <= 2 * b ; j+= i){
                for(int k = j * (c / j) ; k <= j * ((c / j) + 1) ; k += j){
                    int moves = abs(i-a) + abs(j-b) + abs(c-k);
                    if(moves < ans){
                        ans = moves;
                        Aa = i;
                        Ab = j;
                        Ac = k;
                    }
                }
            }
        }
        cout << ans << "\n" << Aa << " " << Ab << " " << Ac << endl;
    }
    return 0;
}
