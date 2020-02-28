#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int mx = -1;
        int tmp;
        int f = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            if(tmp == x){
                f = 1;
            }
            mx = max(mx,tmp);
        }
        if(f == 1){
            cout << 1;
        }
        else if(mx > x){
            cout << 2;
        }
        else if(x % mx == 0){
            cout << x/mx;
        }
        else{
            cout << x/mx + 1;
        }
        cout << endl;
    }


    return 0;
}
