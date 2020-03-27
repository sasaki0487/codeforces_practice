#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll b1=0, b2=0;
        string ans="";
        for(int i = 1 ; i < n ; i ++){
            b1 += i;
            if(b1 >= k){
                b2 = i + k  - b1 - 1;
                b1 = i;
                break;
            }
        }
        for(int i = 0 ; i < n - b1 - 1; i++){
            ans += 'a';   
        }
        ans += 'b';
        for(int i = 0 ; i < b1 - b2 - 1 ; i++){
            ans += 'a';
        }
        ans += 'b';
        for(int i = 0 ; i < b2 ; i++){
            ans += 'a';
        }
        cout << ans << endl;
    }
    return 0;
}
