// O(1) answer;
// The answer of dp is 0 and real answer is k
// 2 ^ 17 is to be larger than the maximum input

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n;
    cin >> n;
    int i = pow(2,17);
    cout << 2 << " " << 3 << endl;
    cout << i + n << " " << i     << " " << 0 << endl;
    cout << n     << " " << i + n << " " << n << endl;
    return 0;
}
