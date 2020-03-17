#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t,w,tmp;
    cin >> t;
    while(t--){
        cin >> w >> tmp;
        int r = tmp % 2;
        w--;
        int f = 0;
        while(w--){
            cin >> tmp;
            if(tmp % 2 != r){
                f = 1;
            }
        }
        if(f){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
    return 0;
}

