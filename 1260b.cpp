//    a - x  - 2y = 0 
//    b - 2x -  y = 0
// => a + b = 3 (x + y);
// So sum of a, b must be plural of 3
// Since the decrease path of number is 2 times faster than the other one,
// 2 * num must be larger or equal to another
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if((a + b) % 3 == 0 && a * 2 >= b && b * 2 >= a ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
