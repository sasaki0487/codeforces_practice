// add up every digit of the numbers of base k
// if there is a digit has value more than 1 then the answer is no
// otherwise it's yes
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t,n,k;
    ll tmp;
    cin >> t;
    while(t--){
        int f = 1;
        vector<int> tab(100,0);
        cin >> n >> k;
        for(int i = 0 ; i < n ; i++){
            int cnt = 0;
            cin >> tmp;
            while(f && tmp){
                if(tmp % k != 0 && tmp % k != 1){
                    f = 0;
                } 
                else{
                    tab[cnt] += tmp % k;
                    if(tab[cnt] > 1){
                        f = 0;
                    }
                }
                tmp /= k;
                cnt++;
            }
        }
        if(f){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }
    return 0;
}
